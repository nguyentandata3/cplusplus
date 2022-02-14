#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    //khai bao
    char chuoi[100];
    int dodai;
    int demalpha = 0, demspunct = 0, demdigit = 0, demspace = 0;
    //xu ly
    printf("Moi nhap 1 chuoi: ");
    gets(chuoi);
    dodai = strlen(chuoi);

    for (int i = 0; i < dodai;i++)
    {
        if (isalpha(chuoi[i])!=0)
        {
            demalpha++;
        }
        else if (ispunct(chuoi[i])!=0)
        {
            demspunct++;
        }
        else if (isdigit(chuoi[i])!=0)
        {
            demdigit++;
        }
        else if(isspace(chuoi[i])!=0)
        {
            demspace++;
        }
    }
    printf("Co %d chu cai.\n",demalpha);
    printf("Co %d chu so.\n",demdigit);
    printf("Co %d ky tu dac biet.\n",demspunct);
    printf("Co %d khoang trang.\n",demspace);
    return 0;
}