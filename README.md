# 🚀 Rankeador de Média dos Alunos

![Status](https://img.shields.io/badge/status-Em_desenvolvimento-yellow)

Projeto desenvolvido como Avaliação de Produto 2 da disciplina Lógica Digital na Resolução de Problemas, oferecida no 1º período do curso de Sistemas de Informação.

## 🎯 Objetivo

O programa deve solicita uma quantidade N de alunos, o código identificador e três notas de cada aluno. Após o processamento dos dados, o sistema retorna um relatório com a maior e menor média da turma, e um ranking de alunos ordenado da maior para menor média.

## ✨ Funcionalidades

O sistema é capaz de realizar as seguintes operações:
- Leitura de um número N de alunos.
- Coleta do código identificador e 3 notas por aluno.
- Cálculo automático da **média aritmética** de cada indivíduo.
- Definição da **situação acadêmica**: Aprovado, Recuperação ou Reprovado.
- Identificação da **Maior** e **Menor** média geral da turma.
- Exibição de um **Ranking Final**, ordenando os alunos da maior para a menor nota.

## 📝 Descrição e  estrutura do projeto

Este repositório contém um programa escrito em C para gerenciar e processar notas escolares. A arquitetura do código foi pensada de forma modular, separando as regras de negócio em um módulo específico de alunos (`alunos.c` e `alunos.h`) e mantendo a execução no arquivo principal (`main.c`), garantindo um código limpo e organizado: 

- `src/`
  - `alunos.c` - Implementação das funções de manipulação de alunos.
  - `alunos.h` - Declarações das funções e estruturas utilizadas pelo módulo de alunos.
  - `main.c` - Programa principal para compilar e executar o sistema.
  - `main` - Executável gerado após a compilação (não é parte do código-fonte).


## 📸 Demonstração
![Print do Terminal](image.png)

## 💻 Tecnologias Utilizadas

- Linguagem C
- Compilador GCC (ou equivalente compatível com C)
- Modularização de código em múltiplos arquivos (`alunos.c`, `alunos.h`, `main.c`)
- Editor ou IDE com suporte a desenvolvimento em C

## ✅ Requisitos

- Sistema com suporte a compilação em C
- GCC ou outro compilador compatível com C instalado
- Acesso a um terminal ou prompt de comando
- Editor de código ou IDE opcional para abrir e editar os arquivos

## ▶️ Como compilar e executar o programa

1. Abra um terminal.
2. Entre na pasta do projeto ou no diretório `src`:   
3. Compile os arquivos-fonte `main.c` e `alunos.c` em um executável chamado `main`:
   ```bash
   gcc main.c alunos.c -o main
   ```
4. Execute o programa compilado:
   ```bash
   ./main
   ```

> Se preferir, você também pode compilar a partir da raiz do projeto usando o caminho para os arquivos:
> ```bash
> gcc src/main.c src/alunos.c -o main && ./main
> ```

## 👥 Equipe

| Nome | LinkedIn | GitHub | E-mail |
| :--- | :--- | :--- | :--- |
| Andrew Minto Neves | [LinkedIn](Link) | [GitHub](Link) | a.mintoneves@gmail.com |
| Eividy Silva de Oliveira | [LinkedIn](Link) | [GitHub](Link) | eividy.oliveira@souunisales.com.br |
| Erasmo Ribeiro Bezerra | [LinkedIn](https://www.linkedin.com/in/erasmobezerra/) | [GitHub](https://github.com/erasmobezerra) | erasmo.ads.tech@gmail.com |
| Gabriel de Jesus Santana Serri | [LinkedIn](Link) | [GitHub](Link) | gabriel.jesus@souunisales.com.br |
| Mayk Vilar do Bomfim Calmon | [LinkedIn](Link) | [GitHub](Link) | ayk.calmon@souunisales.com.br |

