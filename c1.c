#include <stdio.h>
#include <windows.h>

//真真真真真真真�#真�

void main()
{

    printf("[屎壓芦廾]################################\t");

    int i=0;

    while(i<100)
    {
        i++;
        printf("%d%%",i);
        Sleep(100);
        if(i>=10)
        {
            printf("\b\b\b");
        }
        else
        {
            printf("\b\b");
        }

    }



    Sleep(3000);
}
