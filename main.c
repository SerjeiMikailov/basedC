#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>


int main()
{
    setlocale(LC_ALL, "");

    printf("-----------\n");
    printf("- Welcome -\n");
    printf("-----------\n");

    int secretnumber = 30;

    int guess;

    printf("Qual seu chute? ");
    scanf("%d", &guess);
    printf("Seu chute foi %d\n", guess);

    if (guess == secretnumber)
    {
        printf("Você acertou\n");
    }
    else
    {
        if(guess > secretnumber) {
            printf("O número que você chutou está acima do número certo\n");
        } else {
            printf("O número que você chutou está abaixo do correto\n");
        }
    }
}