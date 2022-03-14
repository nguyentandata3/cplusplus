#include <stdio.h>
#include <string.h>
#include <ctype.h>
char firstname[100];
char lastname[100];
char domainname[100]={"@greenacademy.edu.vn\n"};
char email[100];
int timViTriTen(char name[],int dodai)
{
    int pos;
    for (int i = dodai-1;i >= 0;i--)
    {
        if (isspace(name[i])!=0)
        {
            pos = i;
            break;
        }
    }
    return pos;
}
char *lietkeKyTu(char name[], int start, int end)
{
    char content[100];
    int contentindex = 0;
    for(int i = start; i < end; i++)
    {
        if (isspace(name[i])==0)
        {
            content[contentindex] = name[i];
            contentindex++;
        }
    }
    content[contentindex] = '\0';
    return strlwr(content);
}
int main()
{
    //khai bao
    char name[100];
    int dodai, vitriten=0;
    //nhap lieu
    printf("input name: ");
    gets(name);
    //xu ly

    dodai=strlen(name);
    vitriten=timViTriTen(name,dodai);
    strcpy(firstname,lietkeKyTu(name,vitriten,dodai));
    // putchar('.');
    strcpy(lastname,lietkeKyTu(name,0,vitriten));
    strcat(email,firstname);
    strcat(email,".");
    strcat(email,lastname);
    strcat(email,domainname);
    printf("email cua ban la: %s",email);
    // printf("@greenacademy.edu.vn\n");

    return 0;
}