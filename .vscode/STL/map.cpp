#include <iostream>
#include <map>
using namespace std;
// 30000
// 2000:3, 5000:7, 10000:10
// số đồng tiền nhiều nhất, tổng xấp xỉ 30000
int main()
{
    map<int,int> mymap;
    mymap[2000] = 3;
    mymap[5000] = 7;
    // mymap[5000] = 200;
    mymap[10000] = 10;
    int tong = 0;
    const int max = 30000;
    for(map<int,int>::iterator i = mymap.begin(); i != mymap.end(); i++)
    {
        // tong += i->first * i->second;
        // cout<<i->first<<": "<<i->second<<endl;
        if(tong+i->first*i->second>max){
            int soto = (max-tong)/i->first;
            tong+=soto*i->first;
            cout<<tong<<" ";
            break;
        } else{// lấy cả
            tong +=  i->first * i->second;
            cout<<"tong2:"<<tong<<" *";
        }
    }
    cout<<"tong = "<<tong;
    return 0;
}