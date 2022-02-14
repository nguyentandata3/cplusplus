#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    //khai bao
    char name[100];
    char chucanTim;
    int dem=0;
    //nhap lieu
    printf("Input name: ");
    gets(name);
    printf("Chu can tim la: ");
    scanf("%c",&chucanTim);
    //xu ly
    chucanTim = toupper(chucanTim);
    for (int i = 0; i < strlen(name) - 1;i++)
    {
        name[i] = toupper(name[i]);
        if (name[i]==chucanTim)
        dem++;
    }
    printf("So luong chu can tim la: %d\n",dem);
    return 0;
}