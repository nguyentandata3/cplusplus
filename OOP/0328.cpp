#include <iostream>
#include <cmath>
using namespace std;
int soxanhat(int a[], int n, int x);

int main()
{
    int a[100] = {3,4,5,6,7,8,9,10}, x, i;
    cin>>x;
    i = soxanhat(a,8,x);
    cout<<"so xa nhat: "<<a[i]<<endl;
    return 0;
}
int soxanhat(int a[], int n, int x)
{
    int value = abs(a[0]-x), max = a[0];
    int index = 0;
    for(int i = 0; i < n; i++)
    {
        if(abs(a[i] - x) > value)
        {
            // value = a[i];
            index = i;
        }
    }
    return index;
}