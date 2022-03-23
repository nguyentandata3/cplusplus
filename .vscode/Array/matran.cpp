#include <iostream>
using namespace std;
int main()
{
    const int row = 3;
    const int column = 7;
    const int matran[row][column]=
    {
        { 1,  2,  3,  4,  5,  6,  7},
        { 8,  9, 10, 11, 12, 13, 14},
        {15, 16, 17, 18, 19, 20, 21}
    };
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            cout<<matran[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}