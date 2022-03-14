#include <stdio.h>
#include <conio.h>
const char* tinhCan(int ns)
{
    int socuoins = ns%10;
    switch (socuoins)
    {
        case 0: return "Canh"; break;
        case 1: return "Tan"; break;
        case 2: return "Nham"; break;
        case 3: return "Quy"; break;
        case 4: return "Giap"; break;
        case 5: return "At"; break;
        case 6: return "Binh"; break;
        case 7: return "Dinh"; break;
        case 8: return "Mau"; break;
        case 9: return "Ky"; break;
    }
}
const char* tinhChi(int ns)
{
    int socuoins = (ns-1800)%12;
        switch (socuoins)
    {
        case 0: return "Than"; break;
        case 1: return "Dau"; break;
        case 2: return "Tuat"; break;
        case 3: return "Hoi"; break;
        case 4: return "Ti"; break;
        case 5: return "Suu"; break;
        case 6: return "Dan"; break;
        case 7: return "Meo"; break;
        case 8: return "Thin"; break;
        case 9: return "Ty"; break;
        case 10: return "Ngo"; break;
        case 11: return "Mui"; break;
    }
}
int main()
{
    int ns;
    printf("Moi nhap nam sinh: ");
    scanf("%d",&ns); 
    printf("Nam %d la %s %s",ns,tinhCan(ns),tinhChi(ns));   
    return 0;
}