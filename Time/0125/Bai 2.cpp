#include <stdio.h>

void yeucau1(float mang[])
{
    printf("Danh sach ung vien thua can, thieu can: \n");
    for (int i = 0;i < 20;i++)
    {
        if (mang[i]<38 || mang[i]>75)
        {
            printf("vi tri %d. (%.1f) kg\n",i,mang[i]);
        }
    }
}
void yeucau2(float mang[])
{
    
    float min = mang[0];
    float max = mang[0];
    int a,b;
    for (int i = 0;i < 20;i++)
    {
        if (mang[i]<min)
        {
            min = mang[i];
            a = i;
        }
        if (mang[i]>max)
        {
            max = mang[i];
            b = i;
        }
    }
    printf("ung vien %d can nang thap nhat voi %.1f kg\n",a+1,min);   
    printf("ung vien %d can nang cao nhat voi %.1f kg\n",b+1,max);   
}
int yeucau3(float mang[])
{
    int dem = 0;
    for (int i = 0; i < 20;i++)
    {
        if (mang[i]>=38&&mang[i]<=75) dem++;
    }
    return dem;
}
float yeucau4(float mang[])
{
    float tong=0;
    int dem=0;
    for (int i = 0; i < 20;i++)
    {
    if (mang[i]>=38&&mang[i]<=75)
    {
        tong+=mang[i];
        dem++;
    }
    }
    return tong/dem;
}
int main()
{
    float mang[20] = {36.5, 98, 27.8, 63, 78.1, 48.3, 69, 72, 41.5, 32, 29.5, 120, 52.3, 23, 50.2, 56, 72.5, 70, 68.4, 65};
    yeucau1(mang);
    yeucau2(mang);
    printf("co %d ung vien dat tieu chuan.\n",yeucau3(mang));
    printf("can nang tb = %f",yeucau4(mang));
    return 0;
}