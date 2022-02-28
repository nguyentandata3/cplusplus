#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> numbers;
    numbers.push_back(3);
    numbers.push_back(4);
    cout<<numbers.size();
    for(int i=0;i<numbers.size();i++){
        cout<<numbers[i]<<" ";
    }    
    return 0;
}