#include<stdio.h>

int main()
{
    system("color 0");

    int one, two, three, result = 0;
    char repetir;

    do{
        printf("\n\nRegra de 3 Simples\n\n\n");
        printf("1 ----  2\n");
        printf("3 ----  X");
        printf("\n\n\n");

        do{
            printf("1: ");
            scanf("%d", &one);
            if(one==0)
                printf("(1) nao pode ser igual a 0!\n\n\n");
        }while(one==0);

        printf("2: ");
        scanf("%d", &two);

        printf("3: ");
        scanf("%d", &three);

        result = three * two / one;

        printf("X igual a : %d\n\n\n", result);

        printf("\n\n\nDeseja repetir? (S/N)");
        do{
            scanf("%c", &repetir);
        }while(repetir!='S'&&repetir!='s'&&repetir!='N'&&repetir!='n');
    }while(repetir=='S'||repetir=='s');

    return 0;
}
