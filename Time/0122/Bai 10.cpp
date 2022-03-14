#include <stdio.h>
void hoanvi(int &a, int &b)
{
    a = a+b;
    b = a-b;
    a = a-b;
}
int main()
{
    int a = 10;
    int b = 50;
    printf("Moi nhap a: ");
    scanf("%d",&a);
    printf("Moi nhap b: ");
    scanf("%d",&b);
    hoanvi(a,b);
    printf("%d %d ",a, b);
    return 0;
}