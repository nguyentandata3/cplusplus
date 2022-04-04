#include <iostream>
#include <string>
#include <map>
using namespace std;
class Tu{
    private:
        string loaitu;
        string nghiatu;
    public:
        Tu();
    // khoi tao 2 doi so
        Tu(string loaitu, string nghiatu);
    // set,get
        void setloaitu(string loaitu);
        string getloaitu();
        void setnghiatu(string nghiatu);
        string getnghiatu();
        void xuat();
};
Tu::Tu()
{
    this->loaitu = "error";
    this->nghiatu = "error";
}
Tu::Tu(string loaitu, string nghiatu)
{
    this->loaitu = loaitu;
    this->nghiatu = nghiatu;
}
void Tu::setloaitu(string loaitu)
{
    this->loaitu = loaitu;
}
string Tu::getloaitu()
{
    return loaitu;
}
void Tu::setnghiatu(string nghiatu)
{
    this->nghiatu = nghiatu;
}
string Tu::getnghiatu()
{
    return nghiatu;
}
void Tu::xuat()
{
    cout<<loaitu<<": "<<nghiatu<<"\n";
}
class dictionary
{
    private:
        map<string, Tu> danhsachtu;
    public:
        dictionary();
        void themTu(string english, Tu nghia);
        void inTuDien();
        void xoaTu(string key);
        void update(string key, Tu nghia);
        Tu search(string key);
};
dictionary::dictionary()
{};
void dictionary::themTu(string english, Tu nghia){
    danhsachtu[english] = nghia;
}
void dictionary::inTuDien()
{
    for(auto i = danhsachtu.begin(); i != danhsachtu.end(); i++)
    {
        cout<<i->first<<": ";
        i->second.xuat();
        cout<<"\n";
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
void dictionary::update(string key, Tu nghia)
{
    for(auto i = danhsachtu.begin(); i != danhsachtu.end(); i++)
    {
        if(i->first == key)
        {
            i->second = nghia;
            break;
        }
    }
}
Tu dictionary::search(string key)
{
    for(auto i = danhsachtu.begin(); i != danhsachtu.end(); i++)
    {
        if(i->first == key)
        {
            return i->second;            
        }
    }
    return i->second;
}
int main()
{
    dictionary list;
    Tu keyword;
    keyword.setloaitu("Hoa");
    keyword.setnghiatu("Loai hoa");
    keyword.xuat();
    keyword.setloaitu("abc");
    keyword.setnghiatu("eft qwe");
    keyword.xuat();
    list.themTu("English",keyword);
    list.inTuDien();
    list.search("ENG").xuat();
    return 0;
}