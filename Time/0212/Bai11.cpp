#include <stdio.h>
#include <string.h>

char *catChuoi(char name[],int vitri, int dodaicat)
{
    char newname2[100];
    int j = 0;
    for (int i = 0; i <=dodaicat; i++)
    {
        newname2[j]==name[vitri];
        j++;
    }
    newname2[j] = '\0';
    return newname2;
}
int main()
{
    //khai bao
    char name[100], newname[100];
    int dodai,vitri;
    //nhap lieu
    printf("Moi nhap ten: ");
    gets(name);
    //xu ly
    printf("Ban muon cat vi tri thu: ");
    scanf("%d",&vitri);
    printf("Do dai cat la: ");
    scanf("%d",&dodai);
    strcpy(newname,catChuoi(name,vitri,dodai));
    printf("Ten sau khi cat la: %s",newname);
    return 0;
}