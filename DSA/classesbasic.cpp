/*
basic class program

#include <iostream>
#include<cstring>
using namespace std;
class student{
    private:
    int roll_no;
    int ph_no;
    string address;
    public:
    void setroll_no(int roll){
        roll_no = roll;
        cout<<roll_no<<endl;
    }
    void setph_no(int ph){
        ph_no = ph;
        cout<<ph_no<<endl;
    }
    int getroll_no(){
        return roll_no;
    }
    int getph_no(){
        return ph_no;
    }
    void setaddr(string addr){
        address = addr;
        cout<<address<<endl;
    }
    string getaddr(){
        return address;
    }
};
int main() {
    student sam,john;
    int roll,ph;
    string addr;
    cin>>roll>>ph>>addr;
    sam.setroll_no(roll);
    sam.setph_no(ph);
    sam.setaddr(addr);
    cin>>roll>>ph>>addr;
    john.setroll_no(roll);
    john.setph_no(ph);
    john.setaddr(addr);
}
*/

/*
basic class program

#include <iostream>
#include<cstring>
using namespace std;
class triangle{
    private:
    int length;
    int breadth;
    int height;
    public:
    int len(int l){
        length = l;
        return length;
    }
    int bre(int b){
        breadth = b;
        return breadth;
    }
    int hei(int h){
        height = h;
        return height;
    }
    int perimeter(){
        return length+breadth+height;
    }
    int area(){
        return (length*breadth*height)/2;
    }
};
int main() {
   triangle tri;
    int l,b,h;
    tri.len(3);
    tri.bre(4);
    tri.hei(5); 
    cout<<tri.perimeter()<<endl;
    cout<<tri.area();
}
*/

/*
constructor program

#include <iostream>
#include<cmath>
using namespace std;
class circle{
    private:
    double radius;
    public:
    circle();
    void setradius(double);
    void getarea();
};
circle::circle(){
    radius = 1.0;
}
void circle::setradius(double r){
    radius = r;
}
void circle::getarea(){
    double area = 3.14 * pow(radius,2);
    cout<<area;
}
int main() {
    circle circle1,circle2;
    double r;
    cin>>r;
    circle2.setradius(r);
    circle1.getarea();
    cout<<endl;
    circle2.getarea();
    return 0;
}
*/
/*
constructor overloading program

#include <iostream>
#include<cmath>
using namespace std;
class circle{
    private:
    double radius;
    public:
    circle();
    circle(double);
    void setradius(double);
    void getarea();
};
circle::circle(){
    radius = 1.0;
}
circle::circle(double x){
    radius = x;
}
void circle::setradius(double r){
    radius = r;
}
void circle::getarea(){
    double area = 3.14 * pow(radius,2);
    cout<<area;
}
int main() {
    circle circle2;
    double r,x;
    cin>>r;
    cin>>x;
   circle circle1(x);
    circle2.setradius(r);
    circle1.getarea();
    cout<<endl;
    circle2.getarea();
    return 0;
}
*/

/*
destructor program

