#include <stdio.h>
#include <string.h>
struct music
{
    char id[10];
    char name[100];
    int luotnghe;
};
void nhaplieu(music dsbh[],int soluong)
{
    for (int i = 0; i < soluong; i++)
    {
        while (getchar () != '\n');
        printf("Bai hat thu %d: \n",i+1);
        printf("id: ");
        gets(dsbh[i].id);
        printf("name: ");
        gets(dsbh[i].name);
        printf("luot nghe: ");
        scanf("%d",&dsbh[i].luotnghe);
    }
}
void xuatham(music dsbh[],int soluong)
{
    for (int i = 0; i < soluong; i++)
    {
        printf("id: %s\n",dsbh[i].id);
        printf("name: %s\n",dsbh[i].name);
        printf("luot nghe: %d\n",dsbh[i].luotnghe);
    }
}
music baihit(music dsbh[],int soluong)
{
    music hit = dsbh[0];
    for (int i = 0; i < soluong; i++)
    {
        if(hit.luotnghe < dsbh[i].luotnghe)
        {
            hit = dsbh[i];
        }
    }
    return hit;
}
int main()
{
    music dsbh[100];
    music hit[1];
    strcpy(dsbh[0].id, "CVKVA");
    strcpy(dsbh[0].name,"Chay ve khoc voi anh");
    dsbh[0].luotnghe = 200000;
    strcpy(dsbh[1].id, "MTVCM");
    strcpy(dsbh[1].name,"Mang tien ve cho me");
    dsbh[1].luotnghe = 851234;
    strcpy(dsbh[2].id, "GQ");
    strcpy(dsbh[2].name,"Gieo que");
    dsbh[2].luotnghe = 1000000;
    strcpy(dsbh[3].id, "TNCT");
    strcpy(dsbh[3].name,"Tu nhien cai Tet");
    dsbh[3].luotnghe = 304062;
    strcpy(dsbh[4].id, "CMNQ");
    strcpy(dsbh[4].name,"Con mua ngang qua");
    dsbh[4].luotnghe = 62571;
    int avalibleSong=0, inputSong, amount;
    //nhap lieu
    printf("So bai hat ban muon them: ");
    scanf("%d",&inputSong);
    amount = avalibleSong + inputSong;
    nhaplieu(dsbh,amount);
    printf("Bai hat hit la \n");
    hit[0] = baihit(dsbh,amount);
    xuatham(hit,1);
    return 0;
}