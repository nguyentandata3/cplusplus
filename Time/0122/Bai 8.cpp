
#include <stdio.h>
#define PI 3.14
float DienTichHinhTron(float bankinh)
{
    return PI*bankinh*bankinh;
}
float ChuViHinhTron(float bankinh)
{
    return 2*bankinh*PI;
}
float DienTichHinhVuong(int canh)
{
    return canh*canh;
}
float ChuViHinhVuong(int canh)
{
    return canh*4;
}
float DienTichHCN(int CD,int CR)
{
    return CD*CR;
}
float ChuViHCN(int CD,int CR)
{
    return (CD+CR)*2;
}
void xuatKetQua(int opt, float CV, float DT)
{
    const char *TenHinh;
    if (opt == 1)
    {
        TenHinh = "chu nhat";
    }
    else if (opt == 2)
    {
        TenHinh = "vuong";
    }
    else TenHinh = "tron";
    printf("Chu vi hinh %s la: %f\n",TenHinh,CV);
    printf("Dien tich hinh %s la: %f",TenHinh,DT);
}
int main()
{
    //khai bao
    int opt,CD,CR;
    float bankinh,ChuVi,DienTich;
    int CanhHV;
    //nhap lieu
    printf("1. Hinh hcn\n");
    printf("2. Hinh vuong\n");
    printf("3. Hinh tron\n");
    do
    {
        printf("Moi nhap opt: ");
        scanf("%d",&opt);
        switch (opt)
        {
        case 1:
        {
            printf("Moi nhap CD,CR: ");
            scanf("%d%d",&CD,&CR);
            ChuVi=ChuViHCN(CD,CR);
            DienTich=DienTichHCN(CD,CR);
            break;
        }
        case 2:
        {
            printf("Moi nhap chieu dai canh: ");
            scanf("%d",&CanhHV);
            ChuVi=ChuViHinhVuong(CanhHV);
            DienTich=DienTichHinhVuong(CanhHV);
            break;
        }
        case 3:
        {
            printf("Moi nhap ban kinh: ");
            scanf("%f",&bankinh);
            ChuVi=ChuViHinhTron(bankinh);
            DienTich=DienTichHinhTron(bankinh);
            break;
        }
        default:
        {
        printf("Moi sai opt\n");
        break;
        }
        }
    } while (opt <= 0 || opt >= 4);
    xuatKetQua(opt,ChuVi,DienTich);
    return 0;
}