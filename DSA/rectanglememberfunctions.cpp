/*
#include <iostream>
using namespace std;
class rectangle
{
    private:
    double length;
    double width;
    public:
    void len(double);
    void w(double);
    double glen();
    double gw();
    double garea();
};
void rectangle::len(){
    length = len;
}
void rectangle::w(){
    width = w;
}
double rectangle::glen()
{
    return length;
}
double rectangle::gw()
{
    return width;
}
double rectangle::garea()
{
    return length*width;
}
int main() {
    rectangle box;
    double boxlength,boxwidth;

    cin>>boxlength;
    cin>>boxwidth;
    box.len(boxlength);
    box.w(boxwidth);

    cout<<box.glen()<<endl;
    cout<<box.gw()<<endl;
    cout<<box.garea();
    return 0;
}
*/

#include <iostream>
using namespace std;
class student{
public:
    void info(string name,int roll_no){
        name = "vaibhav";
        roll_no = 25;
        cout<<name<<endl<<roll_no;
    }
};
int main(){
    string name;
    int roll_no;
    cin>>name>>roll_no;
    student stud;
    stud.info(name,roll_no);
    return 0;
}