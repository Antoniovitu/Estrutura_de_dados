// Atividade II - Exercicio 1

#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    char cpf[20];
    char dataNascimento[20];
    char motivoVisita[20];
} Pessoa;

int main() {
    Pessoa fila[5] = {
        {"Ana", "111.111.111-11", "01/01/2000", "Reclamar"},
        {"Bruno", "222.222.222-22", "15/03/1998", "Elogiar"},
        {"Carlos", "333.333.333-33", "20/07/1995", "Reclamar"},
        {"Daniela", "444.444.444-44", "11/09/2001", "Elogiar"},
        {"Eduardo", "555.555.555-55", "05/12/1997", "Reclamar"}
    };

    int reclamar = 0;
    int elogiar = 0;

    for (int i = 0; i < 5; i++) {
        if (strcmp(fila[i].motivoVisita, "Reclamar") == 0) {
            reclamar++;
        } else if (strcmp(fila[i].motivoVisita, "Elogiar") == 0) {
            elogiar++;
        }
    }

    if (elogiar < reclamar) {
        printf("Na fila de hoje tivemos %d pessoas que vieram elogiar e %d para reclamar.\n", elogiar, reclamar);
    } else {
        printf("Na fila de hoje tivemos %d pessoas que vieram reclamar e %d para elogiar.\n", reclamar, elogiar);
    }

    return 0;
}

// Exercicio 2

#include <stdio.h>

typedef struct {
    char nome[50];
    int tempoAtendimento;
} Pessoa;

int main() {
    Pessoa fila[5] = {
        {"Lucas", 10},
        {"Mariana", 7},
        {"Felipe", 9},
        {"Juliana", 6},
        {"Rafael", 8}
    };

    int soma = 0;
    float media;

    for (int i = 0; i < 5; i++) {
        soma += fila[i].tempoAtendimento;
    }

    media = soma / 5.0;

    printf("Media do tempo de atendimento: %.2f minutos\n", media);

    if (media > 8) {
        printf("Recomenda-se a abertura de um novo caixa.\n");
    } else {
        printf("Nao ha necessidade de abrir um novo caixa.\n");
    }

    return 0;
}

// Exercicio 3

#include <stdio.h>

typedef struct {
    int codigoProcesso;
    char nomeArquivo[50];
    int quantidadeBytes;
} Documento;

int main() {
    Documento fila[5] = {
        {101, "trabalho.pdf", 2500},
        {102, "foto.png", 1800},
        {103, "relatorio.docx", 3200},
        {104, "planilha.xlsx", 2100},
        {105, "apresentacao.pptx", 4000}
    };

    for (int i = 0; i < 5; i++) {
        printf("Documento retirado da fila:\n");
        printf("Codigo do processo: %d\n", fila[i].codigoProcesso);
        printf("Nome do arquivo: %s\n", fila[i].nomeArquivo);
        printf("Quantidade em bytes: %d\n\n", fila[i].quantidadeBytes);
    }

    return 0;
}

// Exercicio 4

#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
} Pessoa;

int main() {
    Pessoa fila[5] = {
        {"Ricardo", 30},
        {"Patricia", 22},
        {"Antonio", 70},
        {"Camila", 40},
        {"Roberto", 68}
    };

    Pessoa atendimento[5];
    int posicao = 0;

    for (int i = 0; i < 5; i++) {
        if (fila[i].idade > 65) {
            atendimento[posicao] = fila[i];
            posicao++;
        }
    }

    for (int i = 0; i < 5; i++) {
        if (fila[i].idade <= 65) {
            atendimento[posicao] = fila[i];
            posicao++;
        }
    }

    printf("Ordem de atendimento:\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Nome: %s\n", atendimento[i].nome);
        printf("Idade: %d\n\n", atendimento[i].idade);
    }

    return 0;
}