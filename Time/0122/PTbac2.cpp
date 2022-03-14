#include <stdio.h>
#include <math.h>
int giaiPTBac2(int a,int b,int c,float &x1,float &x2)
{
    int delta = b*b-4*a*c;
    if (delta<0)
    {
        return -1;
    }
    else if (delta == 0)
    {
        x1=x2=-b/(2*a);
        return 0;
    }
    else 
    {
        x1 = (-b-sqrt(delta))/(2*a);
        x2 = (-b+sqrt(delta))/(2*a);
        return 1;
    }
}
int main()
{
    int a,b,c,ketluan;
    float x1,x2;
    printf("moi nhap a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    ketluan = giaiPTBac2(a,b,c,x1,x2);
    if(ketluan==-1)
    {
        printf("Phuong trinh vo nghiem");
    }
    else if (ketluan == 0)
    {
        printf("Phuong trinh co nghiem kep: %f",x1);
    }
    else 
    {
        printf("Phuong trinh co 2 nghiem phan biet: %f va %f",x1,x2);
    }
    return 0;
}