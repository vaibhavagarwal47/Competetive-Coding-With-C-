#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
struct userinfo
{
	string name;
	int age;
	char gender;
};
void placecursor(HANDLE,int,int);
void displayprompt(HANDLE);
void enterinfo(HANDLE,userinfo&);
void displayinfo(HANDLE,userinfo&);

int main()
{	
	system("cls");
	userinfo user;
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	displayprompt(screen);
	enterinfo(screen,user);
	displayinfo(screen,user);

	return 0;
}
void placecursor(HANDLE screen,int row,int column)
{
	COORD place;
	place.X = row;
	place.Y = column;
	SetConsoleCursorPosition(screen,place);
}
void displayprompt(HANDLE screen)
{
	placecursor(screen,3,20);
	cout<<"---------------DATA ENTRY---------------"<<endl;
	placecursor(screen,5,28);
	cout<<"NAME: "<<endl;
	placecursor(screen,7,30);
	cout<<"AGE:          GENDER: "<<endl;
}
void enterinfo(HANDLE screen, userinfo& user)
{
	placecursor(screen,11,28);
	cin>>user.name;
	placecursor(screen,12,30);
	cin>>user.age;
	placecursor(screen,30,30);
	cin>>user.gender;
}
void displayinfo(HANDLE screen,userinfo& user)
{
	placecursor(screen,0,0);
	cout<<"name: "<<user.name<<endl;
	cout<<"age: "<<user.age<<endl;
	cout<<"gender: "<<user.gender<<endl;
}