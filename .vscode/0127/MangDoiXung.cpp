#include <stdio.h>

int main()
{
    //khai bao

    int mang[100];
    int slpt;
    bool test = true;
    //xu ly
    printf("Moi nhap slpt: ");
    scanf("%d",&slpt);
    for (int i = 0;i < slpt;i++)
    {
        printf("Moi nhap phan tu thu %d: ",i);
        scanf("%d",&mang[i]);
    }
    for(int i = 0;i < slpt/2;i++)
    {
        if (mang[i]!=mang[slpt-i-1])
        {
            test = false;
            break;
        }
    }
    if (test==false)
    {
        printf("Day khong phai la mang doi xung.\n");
    }
    else
    {
        printf("Day la mang doi xung.\n");
    }
    //tra ve
    return 0;
}