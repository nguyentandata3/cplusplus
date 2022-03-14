#include <stdio.h>
#include <string.h>
#include <conio.h>
#define MAX 50
int soluongthuc = 0;
struct giay
{
    char id[10];
    float size;
    int gioitinh;
    int soluong;
    int dongia;
};
void nhapgiay(giay giaydep[MAX], int &soluongthuc)
{   
    printf("Ban muon nhap bao nhieu giay: ");
    scanf("%d",&soluongthuc);
    for(int i = 0; i < soluongthuc; i++)
    {
        printf("Thong tin giay thu %d: \n",i+1);
        printf("id: ");
        gets(giaydep[i].id);
        printf("size: ");
        scanf("%d",giaydep[i].size);
        printf("gioi tinh (0. Danh cho nu, 1. Danh cho nam, 2. Unisex): ");
        scanf("%d",giaydep[i].gioitinh);
        printf("So luong: ");
        scanf("%d",giaydep[i].soluong);
        printf("Don gia: ");
        scanf("%d",giaydep[i].dongia);
    }
}
void xuatgiay(giay giaydep[MAX], int soluongthuc)
{
    printf("%15s%15s%10s%15s%20s\n","id","Size","Gioi tinh","So luong","Don gia");
    for(int i = 0; i < soluongthuc; i++)
    {
        char gioitinh[10];
        if (giaydep[i].gioitinh == 0) strcpy(gioitinh,"nam");
        else if (giaydep[i].gioitinh == 1) strcpy(gioitinh,"nu");
        else strcpy(gioitinh, "Unisex");
        printf("%15s%15s%10s%15s%20s\n",giaydep[i].id,giaydep[i].size,giaydep[i].gioitinh,giaydep[i].soluong,giaydep[i].dongia);
    }
}
giay timgiay(giay giaydep[MAX], int soluongthuc)
{
    giay giaycantim;
    printf("Ban muon tim giay gioi tinh nao?(0. Danh cho nu, 1. Danh cho nam, 2. Unisex): ");
    scanf("%d",giaycantim.gioitinh);
    printf("Size giay la: ");
    scanf("%f",giaycantim.size);
    for(int i = 0; i < soluongthuc; i++)
    {
        if (giaycantim.gioitinh == giaydep[i].gioitinh && giaycantim.size == giaydep[i].size)
        {
            giaycantim = giaydep[i];
        }
    }
    return giaycantim;
}
void muagiay(giay giaydep[MAX], int soluongthuc)
{
    giay giaymuonmua;
    int test;
    printf("Moi nhap id giay ban muon mua: ");
    gets(giaymuonmua.id);
    for(int i = 0; i < soluongthuc; i++)
    {
        test = stricmp(giaymuonmua.id,giaydep[i].id);
        if (test == 0)
        {
            char gioitinh[10];
            if (giaydep[i].gioitinh == 0) strcpy(gioitinh,"nam");
            else if (giaydep[i].gioitinh == 1) strcpy(gioitinh,"nu");
            else strcpy(gioitinh, "Unisex");
            printf("Giay muon mua la: \n");
            printf("%15s%10f%15s%15d%20d\n",giaymuonmua.id,giaymuonmua.size,gioitinh,giaymuonmua.soluong,giaymuonmua.dongia);
            break;
        }  
    }

}
int main()
{
    giay giaydep[MAX];
    giay giaycantim;
    giay giaymuonmua;
    int test;
    // void nhapgiay(giaydep,soluongthucthuc);
    // void xuatgiay(giaydep,soluongthucthuc);
    printf("Ban muon nhap bao nhieu giay: ");
    scanf("%d",&soluongthuc);
    for(int i = 0; i < soluongthuc; i++)
    {
        while (getchar () != '\n');
        printf("Thong tin giay thu %d: \n",i+1);
        printf("id: ");
        gets(giaydep[i].id);
        printf("size: ");
        scanf("%f",&giaydep[i].size);
        printf("gioi tinh (0. Danh cho nu, 1. Danh cho nam, 2. Unisex): ");
        scanf("%d",&giaydep[i].gioitinh);
        printf("So luong: ");
        scanf("%d",&giaydep[i].soluong);
        printf("Don gia: ");
        scanf("%d",&giaydep[i].dongia);
    }
    printf("%15s%10s%15s%15s%20s\n","id","Size","Gioi tinh","So luong","Don gia");
    for(int i = 0; i < soluongthuc; i++)
    {
        char gioitinh[10];
        if (giaydep[i].gioitinh == 0) strcpy(gioitinh,"nam");
        else if (giaydep[i].gioitinh == 1) strcpy(gioitinh,"nu");
        else strcpy(gioitinh, "Unisex");
        printf("%15s%10f%15s%15d%20d\n",giaydep[i].id,giaydep[i].size,gioitinh,giaydep[i].soluong,giaydep[i].dongia);
    }
    printf("Giay can tim la: \n");
    printf("Ban muon tim giay gioi tinh nao?(0. Danh cho nu, 1. Danh cho nam, 2. Unisex): ");
    scanf("%d",giaycantim.gioitinh);
    printf("Size giay la: ");
    scanf("%f",giaycantim.size);
    for(int i = 0; i < soluongthuc; i++)
    {
        if (giaycantim.gioitinh == giaydep[i].gioitinh && giaycantim.size == giaydep[i].size)
        {
            giaycantim = giaydep[i];
        }
    }
    printf("Moi nhap id giay ban muon mua: ");
    gets(giaymuonmua.id);
    for(int i = 0; i < soluongthuc; i++)
    {
        test = stricmp(giaymuonmua.id,giaydep[i].id);
        if (test == 0)
        {
            char gioitinh[10];
            if (giaydep[i].gioitinh == 0) strcpy(gioitinh,"nam");
            else if (giaydep[i].gioitinh == 1) strcpy(gioitinh,"nu");
            else strcpy(gioitinh, "Unisex");
            printf("Giay muon mua la: \n");
            printf("%15s%10f%15s%15d%20d\n",giaymuonmua.id,giaymuonmua.size,gioitinh,giaymuonmua.soluong,giaymuonmua.dongia);
            break;
        }  
    }
    return 0;
}

    