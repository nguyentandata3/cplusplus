#include <iostream>
using namespace std;
void merge(int a[], int left, int m, int right)
{
    int i,j,k;
    int n1= m-left+1;
    int n2=right-m;
    int L[n1], R[n2];
    for(int i = 0; i < n1; i++)
    {
        L[i] = a[left+i];
    }
    for(int i = 0; i < n1; i++)
    {
        R[i] = a[m+1+i];
    }
    i=0;
    j=0;
    k=left;
    while (i < n1 && j < n2)
    {
        if(L[i]<=R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] == R[j];
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        a[k]=R[j];
        j++;
        k;;
    }
}
void mergeSort(int a[], int left, int right)
{
    if(left<right)
    {
        int m = left+(right-left)/2;
        mergeSort(a, left, m);
        mergeSort(a, m+1, right);
        merge(a,left,m,right);
    }
}
void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    cout<<"truoc khi sort: ";
    xuat(arr,6);
    mergeSort(arr,0,6);
    cout<<"sau khi sort: ";
    xuat(arr,6);
    return 0;
}