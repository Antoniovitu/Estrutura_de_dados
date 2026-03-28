
  //Exercícios em C 


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// exercicio 1 - achar dois dias seguidos com maior soma
void analise_reproducoes() {
    printf("\n=== EXERCICIO 1 ===\n");

    int dados[] = {120, 150, 80, 200, 300, 250};
    int tamanho = sizeof(dados) / sizeof(dados[0]);

    int maiorTotal = -1;
    int posA = 0, posB = 1;

    for (int i = 0; i < tamanho - 1; i++) {
        int atual = dados[i] + dados[i + 1];

        if (atual > maiorTotal) {
            maiorTotal = atual;
            posA = i;
            posB = i + 1;
        }
    }

    printf("valores: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d", dados[i]);
        if (i < tamanho - 1) printf(", ");
    }

    printf("\nmaior soma: dia %d (%d) + dia %d (%d) = %d\n",
           posA + 1, dados[posA],
           posB + 1, dados[posB],
           maiorTotal);
}

// exercicio 2 - comparar notas de dois funcionarios
void comparar_desempenho() {
    printf("\n=== EXERCICIO 2 ===\n");

    int a[] = {8, 7, 9};
    int b[] = {6, 7, 10};

    const char *itens[] = {"Produtividade", "Qualidade", "Pontualidade"};

    int scoreA = 0, scoreB = 0;

    for (int i = 0; i < 3; i++) {
        printf("%s: A=%d x B=%d -> ", itens[i], a[i], b[i]);

        if (a[i] > b[i]) {
            scoreA++;
            printf("A ganha\n");
        } else if (b[i] > a[i]) {
            scoreB++;
            printf("B ganha\n");
        } else {
            printf("empate\n");
        }
    }

    printf("resultado: A=%d | B=%d\n", scoreA, scoreB);
}

// exercicio 3 - contar vogais e consoantes
void contar_letras() {
    printf("\n=== EXERCICIO 3 ===\n");

    char texto[] = "ola, mundo";
    int v = 0, c = 0;

    printf("texto: %s\n", texto);

    for (int i = 0; texto[i] != '\0'; i++) {
        char ch = texto[i];

        if (ch >= 'a' && ch <= 'z') {
            int ehVogal = (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');

            if (ehVogal)
                v++;
            else
                c++;
        }
    }

    printf("vogais: %d | consoantes: %d\n", v, c);
}

// exercicio 4a - mostrar vetor ao contrario
void mostrar_inverso() {
    printf("\n=== EXERCICIO 4A ===\n");

    int lista[] = {10, 20, 30, 40, 50};
    int tam = 5;

    printf("normal: ");
    for (int i = 0; i < tam; i++) printf("%d ", lista[i]);

    printf("\ninvertido: ");
    for (int i = tam - 1; i >= 0; i--) printf("%d ", lista[i]);

    printf("\n");
}

// exercicio 4b - gerar numeros e mostrar maiores que 5
void filtrar_valores() {
    printf("\n=== EXERCICIO 4B ===\n");

    int nums[10];

    srand(time(NULL));

    printf("gerados: ");
    for (int i = 0; i < 10; i++) {
        nums[i] = rand() % 11;
        printf("%d ", nums[i]);
    }

    printf("\nmaiores que 5: ");
    for (int i = 0; i < 10; i++) {
        if (nums[i] > 5) printf("%d ", nums[i]);
    }

    printf("\n");
}

// exercicio 4c - mostrar letras alternadas
void alternar_letras() {
    printf("\n=== EXERCICIO 4C ===\n");

    char nome[] = "caparroz";

    printf("nome: ");
    for (int i = 0; nome[i] != '\0'; i++) printf("%c", nome[i]);

    printf("\nalternado: ");
    for (int i = 0; nome[i] != '\0'; i++) {
        if (i % 2 == 0) printf("%c", nome[i]);
    }

    printf("\n");
}

// exercicio 4d - mostrar apenas impares
void filtrar_impares() {
    printf("\n=== EXERCICIO 4D ===\n");

    int valores[] = {18, 25, 32, 41, 17, 30, 55, 23};
    int total = 8;

    printf("lista: ");
    for (int i = 0; i < total; i++) printf("%d ", valores[i]);

    printf("\nimpares: ");
    for (int i = 0; i < total; i++) {
        if (valores[i] % 2 == 1) printf("%d ", valores[i]);
    }

    printf("\n");
}

// main
int main() {
    analise_reproducoes();
    comparar_desempenho();
    contar_letras();
    mostrar_inverso();
    filtrar_valores();
    alternar_letras();
    filtrar_impares();

    printf("\nfim\n");
    return 0;
}