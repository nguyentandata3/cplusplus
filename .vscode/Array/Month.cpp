// month --> hợp lệ hay không?
// Mot, Hai, Ba,...
#include <iostream>
#include <string>
using namespace std;
int main()
{
    const string month[12] = {"Mot","Hai","Ba","Bon","Nam","Sau","Bay","Tam","Chin","Muoi","Muoi Mot","Muoi hai"};
    string test = "Khong hop le";
    string nhap;
    cin>>nhap;
    for(int i = 0; i < 12; i++)
    {
        if(nhap == month[i])
        {
            test = "Hop le";
            break;
        }
    }
    cout<<test<<endl;
    return 0;
}