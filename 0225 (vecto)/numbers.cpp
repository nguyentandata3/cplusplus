#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> numbers; // giong khai bao 1 mang
    numbers.push_back(1);// them 1 vao numbers[0] -> numbers[0] = 1
    numbers.push_back(2);// them 2 vao numbers[1] -> numbers[1] = 2
    numbers.push_back(3);// them 3 vao numbers[2] -> numbers[2] = 3
    numbers.pop_back(); //loai bo phan tu cuoi mang
    // cout<<numbers.size(); // xuat mang co bao nhieu phan tu
    //duyet mang kieu vector
    for(int number:numbers)
    {
        cout<<number<<" ";
    }
    return 0;
}