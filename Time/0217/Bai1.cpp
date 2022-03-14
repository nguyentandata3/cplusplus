#include <stdio.h>
#include <string.h>
struct NhanVien
{
    char ma[100];
    char hovaten[100];
    char chucvu[100];
    int TNCT;
    int phep;
};
void xuatNV(NhanVien nv)
{
    printf("Ma nhan vien: %10s\n",nv.ma);
    printf("Ho va ten: %30s\n",nv.hovaten);
    printf("Chuc vu: %20s\n",nv.chucvu);
    printf("Tham nien cong tac: %d10\n",nv.TNCT);
    printf("Phep: %d10\n\n",nv.phep);
}
int main()
{
    NhanVien nv1,nv2,nv3,nv4,nv5;
    strcpy(nv1.ma,"Dl01");
    strcpy(nv1.hovaten,"Nguyen Kim Long");
    strcpy(nv1.chucvu,"Giam Doc");
    nv1.TNCT = 47;
    nv1.phep = 17;

    strcpy(nv2.ma,"AC05");
    strcpy(nv2.hovaten,"Dau Thi Duyen");
    strcpy(nv2.chucvu,"Ke Toan");
    nv2.TNCT = 47;
    nv2.phep = 25;

    strcpy(nv3.ma,"HR03");
    strcpy(nv3.hovaten,"Tran Ha Lan");
    strcpy(nv3.chucvu,"Nhan Su");
    nv3.TNCT = 22;
    nv3.phep = 7;

    strcpy(nv4.ma,"TR02");
    strcpy(nv4.hovaten,"Tran Ngoc Thoa");
    strcpy(nv4.chucvu,"Giao vu");
    nv4.TNCT = 13;
    nv4.phep = 9;

    strcpy(nv5.ma,"IT04");
    strcpy(nv5.hovaten,"Tran Ngoc Dang");
    strcpy(nv5.chucvu,"IT");
    nv5.TNCT = 4;
    nv5.phep = 2;

    xuatNV(NhanVien nv1);
    xuatNV(NhanVien nv2);
    xuatNV(NhanVien nv3);
    xuatNV(NhanVien nv4);
    xuatNV(NhanVien nv5);
    return 0;
}