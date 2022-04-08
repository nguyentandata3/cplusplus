#include <iostream>
#define PI 3.14
using namespace std;
class hinh
{
    private:
        int chieudai;
        int chieurong;
        int chieucao;
        int bankinh;
    public:
        hinh();
        hinh(int chieudai, int chieurong, int chieucao, int bankinh);
        void setchieudai(int chieudai);
        int getchieudai();
        void setchieurong(int chieurong);
        int getchieurong();
        void setchieucao(int chieucao);
        int getchieucao();
        void setbankinh(int bankinh);
        int getbankinh();
};
void hinh::setchieudai(int chieudai)
{
    this->chieudai = chieudai;
}
int hinh::getchieudai()
{
    return chieudai;
}
void hinh::setchieurong(int chieurong)
{
    this->chieurong = chieurong;
}
int hinh::getchieurong()
{
    return chieurong;
}
void hinh::setchieucao(int chieucao)
{
    this->chieucao = chieucao;
}
int hinh::getchieucao()
{
    return chieucao;
}
void hinh::setbankinh(int bankinh)
{
    this->bankinh = bankinh;
}
int hinh::getbankinh()
{
    return bankinh;
}
class hinhvuong: public hinh
{
    public:
        void setchieudai(int chieudai);
        int getchieudai();
};
class hinhtron: public hinh
{
    public:
        void setbankinh(int bankinh);
        void getbankinh();
};
class hcn: public hinh
{
    public:
        void setbankinh(int bankinh);
        void getbankinh();
};
class dientich: private hinh
{
    private:
        int chieudai = getchieudai();
        int chieurong = getchieurong();
        int bankinh = getbankinh();
    public:
        int dientichhv();
        float dientichht();
        int dientichhcn();
};
int dientich::dientichhv()
{
    return this->chieudai*this->chieudai;
}
float dientich::dientichht()
{
    return 1.0*this->bankinh*this->bankinh*PI;
}
int dientich::dientichhcn()
{
    return this->chieudai*this->chieurong;
}
class chuvi: private hinh
{
    private:
        int chieudai = getchieudai();
        int chieurong = getchieurong();
        int bankinh = getbankinh();
    public:
        int chuvihv();
        int chuvihcn();
        float chuvihinhtron();
};
int chuvi::chuvihv()
{
    return this->chieudai*4;
}
int chuvi::chuvihcn()
{
    return (this->chieudai+this->chieurong)*2;
}
float chuvi::chuvihinhtron()
{
    return 1.0*this->bankinh*PI;
}
int main()
{
    hinh hinh[10];
    hinh[1]={3,5,0,0};
    hinh[2]={2,2,0,0};
    hinh[3]={0,0,0,6};
    dientich a;
    // cout<<a.dientichhcn()<<"\n";
    return 0;
}