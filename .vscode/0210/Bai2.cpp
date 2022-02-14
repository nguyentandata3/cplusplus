#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#pragma warning (disable:4996)
int main()
{
    //khai bao
    char text[100];
    int i = 0;
    printf("input: ");
    //scanf("%s",&text);
    gets(text);

 
    //Yeu cau 1

    // for (int i = 0; i < 100; i++)
    // {
    //     if (text[i]==0)
    //     {
    //         break;
    //     }
    //     else
    //     {
    //         if(text[i]<91&&text[i]>65)
    //         {
    //             text[i]=text[i]+32;

    //         }
    //     }
    //     putchar(text[i]);
    // }
    // putchar('\n');
    while (text[i]!='\0')
    {
        if (isupper(text[i])!=0)
        {
        text[i] = tolower(text[i]);
        }
        putchar(text[i]);
        i++;
    }
    // puts(strlwr(text));
    putchar('\n');


    //Yeu cau 2
    i = 0;
    while (text[i]!='\0')
    {
        if(text[i]<123&&text[i]>96)
            {
                text[i]=text[i]-32;

            }
        putchar(text[i]);
        i++;
    }
    putchar('\n');
    return 0;
}