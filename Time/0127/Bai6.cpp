#include <stdio.h>

void xuatMang(int lop[],int siso)
{
    for(int i = 0;i < siso;i++)
    {
        printf("%d ",lop[i]);
    }
    printf("\n");
}
void chuyenViTri(int lop[],int siso,int k)
{
    for (int i = siso;i > k;i--)
    {
        lop[i]=lop[i-1];
    }
}
int main()
{
    //khai bao
    int siso = 4;
    int lop[10] = {2,3,4,5};
    int hsmoi_cuoilop = 6;
    int hsmoi_daulop = 1;
    int hsmoi_giualop = 9;
    int k = 0;
    printf("truoc khi them: "); 
    lop[siso] = hsmoi_cuoilop;
    xuatMang(lop,siso);
    siso++;
    printf("sau khi them vi tri sau: ");
    xuatMang(lop,siso);
    printf("sau khi them vi tri dau: ");
    chuyenViTri(lop,siso,k);
    lop[0]=hsmoi_daulop;
    siso++;
    xuatMang(lop,siso);
    printf("vi tri muon them vi tri la: ");
    scanf("%d",&k);
    printf("sau khi them vi tri giua: ");
    chuyenViTri(lop,siso,k);
    lop[k]=hsmoi_giualop;
    siso++;
    xuatMang(lop,siso);
    return 0;
}