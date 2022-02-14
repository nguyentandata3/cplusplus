//Bai tap hoan vi

#include <stdio.h>
void nhapMang(int mang[],int slpt)
{
    for(int i = 0;i < slpt; i++)
    {
        printf("Phan tu thu %d = ",i);
        scanf("%d",&mang[i]);
    }
}
void xuatMang(int mang[],int slpt)
{
    for (int i = 0;i < slpt;i++)
    {
        printf("%d ",mang[i]);
    }
    printf("\n");
}

void sapxepMang(int mang[],int slpt)
{
    for (int left = 0; left <= slpt - 1; left++)
    {
        for (int right = left+1;right < slpt;right++)
        {
            if (mang[left]>mang[right])
            {
                int temp;
                temp = mang[left];
                mang[left] = mang[right];
                mang[right] = temp;
            }
        }
        printf("%d ",mang[left]);
    }

    printf("\n");
}

int main()
{
    //khai bao
    int mang[50];
    int slpt;
    //nhap lieu
    printf("slpt = ");
    scanf("%d",&slpt);
    //xu ly
    nhapMang(mang,slpt);
    printf("Mang truoc khi sap xep: ");
    xuatMang(mang,slpt);
    printf("Mang sau khi sap xep: ");
    sapxepMang(mang,slpt);
    //tra ve
    return 0;
}