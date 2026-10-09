#include<iostream>
using namespace std;
class complex{
    public:
    double real,img;
    void print(){
        if(img>0)
            cout<<real<<"+i"<<img<<endl;
        else
            cout<<real<<"-i"<<-img<<endl;
    }
    void init(double r,double i){
        real=r;
        img=i;
    }
};
int main (){
    complex c;
    c.init(2,4);
    c.print();
    return 0;
}
 