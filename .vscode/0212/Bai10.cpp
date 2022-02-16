#include <stdio.h>

void xuatketqua(int so[],int dodai,int j)
{
    for (int i = 0; i < dodai; i++)
    {
        printf("%d",so[i]);
        j++;
        if(j%3==0 && j < dodai) printf(",");
    }
}
int main()
{
    //khai bao
    int so[100];
    int dodai;
    //nhap lieu
    printf("Ban muon quan ly bao nhieu so: ");
    scanf("%d",&dodai);
    for (int i = 0; i < dodai; i++)
    {
        printf("[%d]: ",i+1);
        scanf("%d",&so[i]);
    }
    int j = dodai%3;
    if (j==0) xuatketqua(so,dodai,j);
    else if (j==1) xuatketqua(so,dodai,2);
    else xuatketqua(so,dodai,1);
    //xu ly
    return 0;
}