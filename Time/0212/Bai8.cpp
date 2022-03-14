#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    //khai bao
    char name[100];
    int dodai;
    //nhap lieu
    printf("Moi nhap ten: ");
    gets(name);
    //xu ly
    printf("%c",toupper(name[0]));
    for (int i = 0; i < strlen(name); i++)
    {
        if (isspace(name[i])!=0)
        {
            printf("%c",toupper(name[i+1]));
        }
    }
    return 0;
}