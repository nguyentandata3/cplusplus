#include <stdio.h>

int nhapSoNguyenA(int a)
{
    do
    {
        printf("Moi nhap so nguyen duong a: ");
        scanf("%d",&a);
    } while (a<=0); 
    return a; 
}
int giaithuaA(int a)
{
    int giaithua = 1;
    for (int i = 1;i <= a;i++)
    {
        giaithua = giaithua*i;
    }
    return giaithua;
}
int nhapSoNguyenB(int b)
{
    do
    {
        printf("Moi nhap so nguyen duong b: ");
        scanf("%d",&b);
    } while (b<=0);  
    return b; 
}
int giaithuaB(int b)
{
    int giaithua = 1;
    for (int i = 1;i <= b;i++)
    {
        giaithua = giaithua*i;
    }
    return giaithua;
}
int nhapSoNguyenC(int c)
{
    do
    {
        printf("Moi nhap so nguyen duong c: ");
        scanf("%d",&c);
    } while (c<=0);  
    return c; 
}
int giaithuaC(int c)
{
    int giaithua = 1;
    for (int i = 1;i <= c;i++)
    {
        giaithua = giaithua*i;
    }
    return giaithua;
}
int main()
{
    int a,b,c;
    long tonggiaithua = 0;
    a=nhapSoNguyenA(a);
    b=nhapSoNguyenB(b);
    c=nhapSoNguyenC(c);
    tonggiaithua = giaithuaA(a) + giaithuaB(b) + giaithuaC(c);
    printf("Tong giai thua = %ld",tonggiaithua);
    return 0;
}