#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
int email(char email[], int dodai)
{
    int check = 0;
    for (int i = 0; i < dodai; i++)
    {
        if (email[i]=='@')
        {
            for (int j = i+1; j < dodai; j++)
            if (email[j]=='.')
            return 1;
            else check = 0;
        }
    }
    return check;
}
int pass(char pass[], int dodai)
{
    int check = 0;
    if (dodai < 8) return 0;
    else
    {
        for (int i = 0; i < dodai; i++)
        {
            if (ispunct(pass[i])!=0)
            {
                for (int j = 0; j < dodai; j++)
                {
                    if(isalpha(pass[j])==1)
                    {
                        for (int l = 0;l < dodai; l++)
                        {
                            if(isalpha(pass[l])==2) check = 1;
                        }
                    }
                }
            }
        }
    }
    return check;
}
int checkpass(char passgoc[], char passconfirm[])
{
    int check = 1;
    for (int i = 0; i < strlen(passgoc); i++)
    {
        if (passgoc[i] != passconfirm[i])
        {
            check = 0;
            break;
        }
    }
    return check;
}
    

int main()
{
    //khai bao
    char emailgoc[100];
    char passgoc[100];
    char confirmpassword[100];
    int check = 0;
    //nhap lieu
    do
    {
        printf("Moi nhap tai khoan: ");
        gets(emailgoc);
    }
    while (email(emailgoc,strlen(emailgoc))==0);
    do
    {
         printf("Moi nhap pass: ");
         gets(passgoc);
    }
    while (pass(passgoc,strlen(passgoc))==0);
    printf("Input ConfirmPassword(1): ");
    gets(confirmpassword);
    do
    {
        if (checkpass(passgoc,confirmpassword)!=0)
        {
            check = 1;
            break;
        }
        else
        {
            do            
            {
                printf("Moi nhap pass goc: ");
                gets(passgoc);
            } while (pass(passgoc,strlen(passgoc))==0);
            printf("Input ConfirmPassword(2): ");
            gets(confirmpassword);      
            if (checkpass(passgoc,confirmpassword)!=0)
            {
                check = 1;
                break;
            }    
        } 
    }    while (checkpass(passgoc,confirmpassword)==0);
    if (check==1) printf("Register successfully\n");
    return 0;
}