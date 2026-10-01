#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int fibonacci(int n) {
    if (n == 0 || n == 1) return 1;
    int a = 1, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int pa(int n) {
    return 1 + n * 2;
}

int pg(int n) {
    int res = 1;
    for (int i = 0; i < n; i++) {
        res *= 2;
    }
    return res;
}

int eh_primo(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int n_primo(int n) {
    int count = 0;
    int num = 2;
    while (1) {
        if (eh_primo(num)) {
            if (count == n) return num;
            count++;
        }
        num++;
    }
}

int main() {
    char palavra[20];
    char cripto[20];
    int shift, tipo, i;
    FILE *arq;

    printf("Digite a palavra secreta: ");
    scanf("%15s", palavra);

    printf("Digite o valor de SHIFT: ");
    scanf("%d", &shift);

    printf("\n1 - PA\n2 - PG\n3 - Fibonacci\n4 - Primos\nEscolha a sequencia: ");
    scanf("%d", &tipo);

    int tam = strlen(palavra);

    for (i = 0; i < tam; i++) {
        char letra = tolower(palavra[i]);
        
        if (letra >= 'a' && letra <= 'z') {
            int seq = 0;

            switch (tipo) {
                case 1: seq = pa(i); break;
                case 2: seq = pg(i); break;
                case 3: seq = fibonacci(i); break;
                case 4: seq = n_primo(i); break;
            }

            int deslocamento = shift + seq;
            cripto[i] = 'a' + ((letra - 'a' + deslocamento) % 26);
        } else {
            cripto[i] = letra;
        }
    }
    cripto[tam] = '\0';

    printf("\nPalavra original: %s\n", palavra);
    printf("Palavra criptografada: %s\n", cripto);

    arq = fopen("resultado_criptografia.txt", "w");
    if (arq != NULL) {
        fprintf(arq, "Palavra codificada: %s | SHIFT: %d | Tipo: %d | Letras: %d\n", cripto, shift, tipo, tam);
        fclose(arq);
    }

    return 0;
}