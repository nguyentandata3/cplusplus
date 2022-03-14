
#include <stdio.h>
void yeucau1(int mang[])
{
    printf("Yeu cau 1: \n");
    for (int i = 0;i < 15;i++)
    {
        printf("Vi tri %d - Gia tri %d.\n",i,mang[i]);
    }
}
int yeucau2(int mang[])
{
    int dem = 0;
    for (int i = 0;i < 15;i++)
    {
        if (mang[i]%3==0 && mang[i]%4==0)
        {
            dem++;
        }
    }
    return dem;
}
int yeucau3(int mang[])
{
    int tong = 0;
    for(int i = 0;i < 15;i++)
    {
        if (i%2==0)
        {
            tong+=mang[i];
        }
    }
    return tong;
}
void yeucau4(int mang[])
{
    for(int i = 0;i < 15;i++)
    if (mang[i]<0)
    {
        printf("Vi tri %d. %d -> 0\n",i,mang[i]);
    }
}
int main()
{
    int songuyen[15] = {10, 25, -4, 32, 63, 81, 19, -24, 13, 18, 45, 12, 72, 42, -6};
    yeucau1(songuyen);
    printf("Co %d phan tu vua chia het cho 3 va chia het cho 4.\n",yeucau2(songuyen));
    printf("Tong cac gia tri phan tu so chan = %d\n",yeucau3(songuyen));
    yeucau4(songuyen);
    return 0;
    
}