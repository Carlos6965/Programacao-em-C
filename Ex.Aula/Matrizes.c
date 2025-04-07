#include <stdio.h>
#include <string.h>

int main()
{
    /*
    float notas[3][3];

    for(int i = 0; i < 3; i++){
        printf("\nAluno %d:\n", i + 1);

        for(int j = 0; j < 3; j++){
            printf("Digite a nota da matéria %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }


    printf("\nBoletim completo:\n");

    for(int i = 0; i < 3; i++){
        printf("\nAluno %d:\n", i + 1);

        for(int j = 0; j < 3; j++){
            printf("%.1f\n", notas[i][j]);
        }
    }

    printf("\nMédia de cada aluno:\n");

    for(int i = 0; i < 3; i++){

        float soma = 0;

        for(int j = 0; j < 3; j++){
            soma += notas[i][j];
        }

        float media = soma / 3.0;
        printf("Aluno %d: %.2f\n", i + 1, media);
    }
    */

    /*
    char grade[5][3][10];

    char dias[5][10] = {"Segunda", "Terça", "Quarta", "Quinta", "Sexta"};

    for (int i = 0; i < 5; i++)
    {
        printf("\nDia: %s\n", dias[i]);

        for (int j = 0; j < 3; j++)
        {
            printf("Digite a disciplina da aula %d: ", j + 1);
            scanf(" %[^\n]", grade[i][j]);
        }
    }

    printf("\nGrade de Horários: \n");

    for (int i = 0; i < 5; i++)
    {
        printf("\n%s:\n", dias[i]);

        for (int j = 0; j < 3; j++)
        {
            printf(" Aula %d: %s\n", j + 1, grade[i][j]);
        }
    }
    */

    /*
    char alunos[3][20] = {"Ana", "Carlos", "Beatriz"};

    char dias[5][10] = {"Seg", "Ter", "Qua", "Qui", "Sex"};

    char presenca[3][5];

    for (int i = 0; i < 3; i++)
    {
        printf("\nPresenças para %s:\n", alunos[i]);

        for (int j = 0; j < 5; j++)
        {
            char valor;

            do
            {
                printf("%s - Digite 'p' para presente ou 'F' para Falta: ", dias[j]);
                scanf(" %c", &valor);

                valor = toupper(valor);

                if (valor == 'p' || valor == 'F')
                {
                    presenca[i][j] = valor;
                }
                else
                {
                    printf("Entrada invalida! Use apenas P ou F.\n");
                }
            } while (valor != 'P' && valor != 'F');
        }
    }

    printf("\nTabela de Presenças:\n");

    printf("Aluno     |");
    for (int j = 0; j < 5; j++)
    {
        printf("%s ", dias[j]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%-10s| ", alunos[i]);
        for (int j = 0; j < 5; j++)
        {
            printf(" %c ", presenca[i][j]);
        }
        printf("\n");
    }
    */
}
