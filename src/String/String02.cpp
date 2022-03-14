// chuan hoa: nguyen thanh an --> Nguyen Thanh An
// Nguyen Thanh AN --> Nguyen Thanh An
#include <iostream>
#include <ctype.h>
#include <string.h>
using namespace std;
int main()
{
    char name[100];
    cout<<"name: ";
    gets(name);
    name[0] = toupper(name[0]);
    for(int i = 0; i < strlen(name); i++)
    {
        if(isspace(name[i])) name[i+1] = toupper(name[i+1]);
        else name[i+1] = tolower(name[i+1]);
    }
    cout<<name;
    
    return 0;
}