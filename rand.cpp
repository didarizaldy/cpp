#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
int main()
{
    char ulangi;
    do
    {
        int i;
        srand((unsigned)time(NULL));
        printf("Hasil bilangan yang di random : \n");
        do
        {
            printf(" %d\n", i = (rand() % 99));
        } while (i != 88 && i < 88);

        
        printf("\n");
    } while (ulangi == ' ');
}
