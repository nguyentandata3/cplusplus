#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    //khai bao
    char text[100];
    int i = 0;
    printf("Moi nhap vao 1 chuoi ky tu lien tuc: ");
    //scanf("%s",&text);
    gets(text);
    // while (text[i]!='\0')
    // {
    //     putchar(text[i]);
    //     putchar('\n');
    //     i++;
    // }
    for (int i = 0; i < 100; i++)
    {
        if (text[i]=='\0')
        {
            break;
        }
        else
        {
            putchar(text[i]);
            putchar('\n');
        }
    }
    int dodai = strlen(text);
    for (int i = dodai - 1; i >= 0;i--)
    {
          putchar(text[i]);
            putchar('\n');
    }
    return 0;
}