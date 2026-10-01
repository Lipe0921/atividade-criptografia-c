# Atividade Avaliativa 02 - Criptografia em C 🔐

**Disciplina:** Algoritmo e Pensamento Computacional  
**Professor:** Francisco de Assis Cavallaro  

## 👥 Integrantes do Grupo
- Felipe de Souza Ferreira - RA: 48120863
- Davi Melo Salgueiro - RA: 48129470
- Kaiky dos Santos - RA: 47802928

## 🎯 Objetivo Educacional
Este projeto aplica a Taxonomia de Bloom na prática, unificando conceitos de criptografia simples (Cifra de César), manipulação de arquivos em C e matemática aplicada (progressões e séries).

## 💻 Como o programa funciona
O sistema recebe uma palavra secreta e aplica duas camadas de criptografia:
1. **Camada 1 (Cifra de César):** Deslocamento fixo (SHIFT) escolhido pelo usuário.
2. **Camada 2 (Deslocamento Dinâmico):** Deslocamento iterativo baseado em uma sequência matemática escolhida no menu (PA, PG, Série de Fibonacci ou Números Primos).

## 🧩 Exemplo de Execução (Corrigido matematicamente)
- **Palavra de entrada:** coracao
- **SHIFT escolhido:** 3
- **Sequência escolhida:** 3 (Série de Fibonacci)
- **Cálculo da primeira letra ('c'):** Posição 2 (c) + 3 (SHIFT) + 1 (Fibonacci) = 6 ('g')
- O log de execução e a palavra codificada final (`gswgkle`) estão salvos no arquivo `resultado_criptografia.txt` anexo a este repositório.
