#include <iostream>
using namespace std;
#define MAX_ROW 10
#define MAX_COLUM 10
void nhap(int a[MAX_ROW][MAX_COLUM], int &colum, int &row);
void xuat(int a[MAX_ROW][MAX_COLUM], int colum, int row);
int timMax(int a[MAX_ROW][MAX_COLUM], int colum, int row);
int timMin(int a[MAX_ROW][MAX_COLUM], int colum, int row);
int maxHang(int a[MAX_ROW][MAX_COLUM], int colum, int hangcantim); // tim max hang can tim (findrow)
int maxCot(int a[MAX_ROW][MAX_COLUM], int row, int cotcantim); // tim max cot can tim (findcolum)
int maxDuongCheo(int a[MAX_ROW][MAX_COLUM], int colum, int row); //tim max duong cheo 
int maxDuongCheoNguoc9(int a[MAX_ROW][MAX_COLUM], int colum, int row);

int main()
{
    int a[MAX_ROW][MAX_COLUM];
    int colum,row;
    int findrow = 3;
    int findcolum = 3;
    nhap(a,colum,row);
    xuat(a,colum,row);
    cout<<"max = "<<timMax(a,colum,row)<<endl;
    cout<<"min = "<<timMin(a,colum,row)<<endl;
    cout<<"max Hang = "<<maxHang(a,colum,findrow);
    cout<<"max Cot = "<<maxCot(a,colum,findcolum);
    cout<<"max duong cheo = "<<maxDuongCheo(a,colum,row);
    return 0;
}
void nhap(int a[MAX_ROW][MAX_COLUM], int &colum, int &row)
{
    cout<<"colum = ";
    cin>>colum;
    cout<<"row = ";
    cin>>row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]: ";
            // cin>>a[i][j];
            a[i][j] = i + j;
        }
    }
}
void xuat(int a[MAX_ROW][MAX_COLUM], int colum, int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            cout<<a[i][j];
            cout<<"  ";
        }
        cout<<endl;
    }
}
int timMax(int a[MAX_ROW][MAX_COLUM], int colum, int row)
{
    int max = a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            if (max < a[i][j]) max = a[i][j];
        }
    }
    return max;
}
int timMin(int a[MAX_ROW][MAX_COLUM], int colum, int row)
{
    int min = a[0][0];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            if (min > a[i][j]) min = a[i][j];
        }
    }
    return min;
}
int maxHang(int a[MAX_ROW][MAX_COLUM], int colum, int row, int hangcantim)
{
    int max = a[hangcantim][0];
    for(int i = 0; i < colum; i++)
    {
        if (max <= a[3][i]) max = a[3][i];
    }
    return max;
}
int maxCot(int a[MAX_ROW][MAX_COLUM], int row, int cotcantim)
{
    int max = a[0][cotcantim];
    for(int i = 0; i < row; i++)
    {
        if (max < a[i][cotcantim]) max = a[i][cotcantim];
    }
    return max;
}
int maxDuongCheo(int a[MAX_ROW][MAX_COLUM], int colum, int row) //tim max duong cheo 
{
    int max = a[0][0];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < colum; j++)
        {
            if(i==j && max < a[i][j]) max = a[i][j];
        }
    }
    return max;
}
int maxDuongCheoNguoc9(int a[MAX_ROW][MAX_COLUM], int colum, int row)
{
    int max = a[0][row - 1];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < colum; j++)
        {
            if(i+j==(row-1) && max < a[i][j]) max = a[i][j];
        }
    }
    return max;
}
// 2 6 9 5 8 3 1 a[0][6], a[1][5], a[2][4], a[3][3], a[4][2], a[5][1], a[6][0]
// 6 9 2 1 4 6 2
// 8 2 3 6 4 1 6
// 9 8 7 1 6 5 3
// 4 8 6 2 1 4 9 
// 6 3 1 5 9 8 7
// 6 8 1 0 1 6 4