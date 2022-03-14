#include <stdio.h>
#include <math.h>

void nhapSoNguyen(int &a, int &b)
{
    printf("Moi nhap a: ");
    scanf("%d",&a);
    printf("Moi nhap b: ");
    scanf("%d",&b);
    abs(a);
    abs(b);
}
int timUCLN(int a, int b)
{
    if (a==0||b==0)
    {
        a=a+b;
    }
    else
    {
    while (a!=b)
    {
        if (a>b) a=a-b;
        else b=b-a;

    }
    return a;
    }
}
int main()
{
    int a,b,ucln;
    nhapSoNguyen(a,b);
    printf("UCLN = %d",timUCLN(a,b));
    return 0;
}