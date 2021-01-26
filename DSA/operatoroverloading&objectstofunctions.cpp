/*
#include <iostream>
#include<string>
using namespace std;
class Example{
    public:
    int a;
    Example add(Example e1,Example e2,Example e3){
        e3.a = e1.a +e2.a +e3.a;
        return e3;
    }
};
int main() {
    Example e1,e2,e3;
    e1.a = 100;
    e2.a = 220;
    e3.a = 30;
    e3=e3.add(e1,e2,e3);
    cout<<e3.a;
    return 0;
}
*/


/*
#include <iostream>
#include<string>
using namespace std;
class complex{
    float real;
    float imagine;
    public:
   complex(){
       float real = 0;
       float imagine = 0;
   }
       complex(int r,int i){
           real = r;
           imagine = i;
       }
   void setr(int r){
       real = r;
   }
   void seti(int i){
       imagine = i;
}
   float getr(){
        return real;
    }
    float geti(){
        return imagine;
    }
    void print(){
        cout<<real<<" + "<<imagine<<"i";
    }
    void add(complex c){
        real = real + c.real;
        imagine = imagine +c.imagine;
        cout<<real<<" + "<<imagine<<"i";
    }
    void operator+(complex c){
         real = real + c.real;
        imagine = imagine +c.imagine;
        cout<<real<<" + "<<imagine<<"i";
    }
};
istream& operator>>(istream &cin,complex &abc){
    int r,i;
    cin>>r>>i;
    abc.setr(r);
    abc.seti(i);
    return cin;
}
ostream& operator<<(ostream &cout,complex &abc){
    abc.print();
    return cout;
}
int main(){
    complex c1(1,2);
    complex c2(3,4);
    complex c3(5,6);
   c1.print();
   cout<<endl;
   c2.print();
   cout<<endl;
   c2.add(c1);
   cout<<endl;
   c3+c2;
   cout<<endl;
   complex abc,nigga;
   cin>>nigga>>abc;
   cout<<nigga<<endl<<abc;
    return 0;
}
*/