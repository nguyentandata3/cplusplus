#include <stdio.h>

void nhapMang(int songuyen[],int soluong)
{
    for(int i = 0;i < soluong;i++)
    {
        printf("Moi nhap phan tu thu %d: ",i);
        scanf("%d",&songuyen[i]);
    }
}
void xuatMang(int songuyen[],int soluong)
{
    for(int i = 0;i < soluong;i++)
    {
        printf("Phan thu thu %d la: %d\n",i,songuyen[i]);

    }
}

void hoanvi(int &a,int &b)
{
    a = a+b;
    b = a-b;
    a = a-b;
    printf("2 so sau khi hoan vi la: %d va %d",a,b);
}
int main()
{
    //khai bao
    int songuyen[20];
    int soluong;
    int a,b;
    //xu ly
    printf("SLPT can quan ly: ");
    scanf("%d",&soluong);
    // nhapMang(songuyen,soluong);
    // xuatMang(songuyen,soluong);
    printf("Moi nhap 2 so can hoan vi: ");
    scanf("%d %d",&a,&b);
    hoanvi(a,b);
    // //tra ve
    return 0;
}