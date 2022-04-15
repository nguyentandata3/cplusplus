class Animal{// dong vat
    public:
    virtual void run() = 0;// thuần ảo
       void b(){}; // ảo
       void c(){};// ảo
};
class Dog: public Animal{// bắt buộc trong B phải có a,b,c
    public:
        Dog(){};
        void run(){}
};
int main(){
    Dog b;
}