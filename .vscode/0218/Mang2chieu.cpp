#include <iostream>
using namespace std;
#define MAX_ROW 10
#define MAX_COLUM 10
void nhap(int a[MAX_ROW][MAX_COLUM], int &colum, int &row);
void xuat(int a[MAX_ROW][MAX_COLUM], int colum, int row);
int timMax(int a[MAX_ROW][MAX_COLUM], int colum, int row);
int timMin(int a[MAX_ROW][MAX_COLUM], int colum, int row);
void xoaPhanTuAm(int a[MAX_ROW][MAX_COLUM], int colum, int row);
int main()
{
    int a[MAX_ROW][MAX_COLUM];
    int colum,row;
    nhap(a,colum,row);
    xuat(a,colum,row);
    cout<<"max = "<<timMax(a,colum,row)<<endl;
    cout<<"min = "<<timMin(a,colum,row)<<endl;
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
void xoaPhanTuAm(int a[MAX_ROW][MAX_COLUM], int colum, int row)
{
    
}
