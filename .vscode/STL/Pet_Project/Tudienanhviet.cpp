#include <iostream>
#include <string>
#include <map>
using namespace std;
class dictionary
{
    private:
        map<string, string> danhsachtu;
    public:
        dictionary();
        void themTu(string english, string vietnam);
        void inTuDien();
        void xoaTu(string key);
        void update(string key, string value);
        void search(string key);
};
dictionary::dictionary()
{};
void dictionary::themTu(string english, string vietnam){
    danhsachtu[english] = vietnam;
}
void dictionary::inTuDien()
{
    for(auto i = danhsachtu.begin(); i != danhsachtu.end(); i++)
    {
        cout<<i->first<<": "<<i->second<<"\n";
    }
}
void dictionary::xoaTu(string key)
{
    for(auto i = danhsachtu.begin(); i != danhsachtu.end(); i++)
    {
        if(i->first == key)
        {
            danhsachtu.erase(i);
            break;
        }
    }
}
void dictionary::update(string key, string value)
{
    for(auto i = danhsachtu.begin(); i != danhsachtu.end(); i++)
    {
        if(i->first == key)
        {
            i->second = value;
            break;
        }
    }
}
void dictionary::search(string key)
{
    for(auto i = danhsachtu.begin(); i != danhsachtu.end(); i++)
    {
        if(i->first == key)
        {
            cout<<i->first<<": "<<i->second<<"\n";
            break;
        }
    }
}
int main()
{
    dictionary list;
    list.themTu("English","Viet Nam");
    list.themTu("ENG","HN");
    // list.xoaTu("English");
    list.update("English","VN");
    list.inTuDien();
    list.search("ENG");
    return 0;
}