#include <stdio.h>

int main()
{
    //khai bao
    int mang[100];
    int slpt;
    //xu ly
    printf("Ban muon quan ly bao nhieu phan tu: ");
    scanf("%d",&slpt);
    for(int i = 0;i < slpt;i++)
    {
        printf("Moi nhap phan thu thu %d: ",i+1);
        scanf("%d",&mang[i]);
    }
    for(int i = 0;i < slpt;i++)
    {
        printf("phan tu thu %d : %d\n",i+1,mang[i]);
    }
    //tra ve
    return 0;
}