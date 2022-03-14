#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    //khai bao
    char name[100];
    int demkhoangtrang=0,dodai=0,demsotu=0,end = 0;

    //nhap lieu
    printf("Moi nhap 1 chuoi ky tu: ");
    gets(name);

    //xu ly
    dodai=strlen(name);
    for(int i = dodai-1; i >= 0;i--)
    {
        if(isspace(name[i])==0) 
        {
            end = i;
            break;
        }
    }
    for(int i = end;i > 0; i--)
    {
       if (isspace(name[i])!=0 && isspace(name[i-1])==0) demkhoangtrang++;
    }
    demsotu=demkhoangtrang+1;
    printf("Chuoi ban nhap co %d tu.\n",demsotu);
    return 0;
}