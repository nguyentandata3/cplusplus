#include <stdio.h>
#include <string.h>

struct BOOK 
{
    char name[100];
    char author[100];
    int page;
    int price;
};
void nhaplieu(BOOK b[], int soluong)
{
    for(int i = 0; i < soluong; i++)
    {
            while (getchar () != '\n');
            printf("Thong tin cuon sach thu %d.\n",i+1);
            printf("Name: ");
            gets(b[i].name);
            printf("Author: ");
            gets(b[i].author);
            printf("Page: ");
            scanf("%d",&b[i].page);  
            printf("Price: ");
            scanf("%d",&b[i].price);
    }
}

int main()
{
    BOOK b[50];
    int soluong;

    //nhap lieu
    printf("Ban muon quan ly bao nhieu cuon sach: ");
    scanf("%d",&soluong);
    
    //xu ly
    nhaplieu(b,soluong);
    printf("%30s%25s%20s%20s\n","Tua sach","Tac gia","So trang","Gia tien");
    for (int i = 0; i < soluong; i++)
    {
         printf("%30s%25s%20d%20d\n",b[i].name,b[i].author,b[i].page,b[i].price);
    }
    printf("-----------------------------------------------------------------------------------------------\n");

    //Yeu cau 4
    printf("Danh sach ten sach co so trang tren 200\n")
    for (int i = 0; i < soluong; i++)
    {
        if(b[i].page >= 200)
        {
            printf("%30s%25s%20d%20d\n",b[i].name,b[i].author,b[i].page,b[i].price);
        }
    }
    //Yeu cau 5
    printf("Danh sach ten sach co gia tien duoi 90000\n");
    for (int i = 0; i < soluong; i++)
    {
        if(b[i].price < 90000)
        {
            printf("%30s%25s%20d%20d\n",b[i].name,b[i].author,b[i].page,b[i].price);
        }
    }
    return 0;
}