# 🚀 Rankeador de média dos alunos

Projeto de Avaliação de Produto 2 da disciplina Lógica Digital na Resolução de Problemas, oferecida no 1º período do curso de Sistemas de Informação, campus Vitória/ES.

## 🎯 Objetivo

O programa solicita uma quantidade N de alunos, o código identificador e três notas de cada aluno. Após o correto processamento de dados realizado, o sistema deve mostrar um resultado com a média aritmética de cada aluno; a situação de cada aluno (Aprovado, Recuperação ou Reprovado), a maior e menor média da turma e por fim o ranking final de alunos ordenado da maior para menor média.

## 📝 Descrição

Este repositório contém um programa em C para gerenciar informações de alunos. O código está organizado em um módulo de alunos (`alunos.c`/`alunos.h`) e um arquivo principal (`main.c`) que demonstra o uso das funções disponíveis.

## 🏗️ Estrutura do projeto

- `src/`
  - `alunos.c` - Implementação das funções de manipulação de alunos.
  - `alunos.h` - Declarações das funções e estruturas utilizadas pelo módulo de alunos.
  - `main.c` - Programa principal para compilar e executar o sistema.
  - `main` - Executável gerado após a compilação (não é parte do código-fonte).

## ✅ Requisitos

- GCC ou outro compilador compatível com C
- IDE de sua preferência

## 🛠️ Como compilar

No diretório `src`, execute:

```bash
gcc main.c alunos.c -o main