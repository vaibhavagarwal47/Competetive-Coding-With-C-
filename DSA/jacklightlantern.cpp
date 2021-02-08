#include <iostream>
#include <windows.h>
using namespace std;
void displaymenu()
{	
	system("cls");
	cout<<"\t\t\tTHE JACK-'O'-LANTERN"<<endl;
	cout<<"Select the desired color for the Lantern"<<endl;
	cout<<"Enter\n1 for Green\n2 for Blue\n3 for Red\n4 for Purple\n5 for Yellow\n6 to exit the program\n";
}
int choice()
{
	int choice;
	cin>>choice;
	return choice;
}
void makejackolantern()
{
	cout<<"\n\n";
	cout<<"				^		^	\n";
	cout<<"					*		\n";
	cout<<"				     \\_____/	"<<endl;
	cout<<"\n\n 	Press ENTER to return to the menu";
	cin.get();
	cin.get();
}
int main()
{
	int color;
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	do
	{
		SetConsoleTextAttribute(screen,7);
		displaymenu();
		color = choice();
		if(color!=6)
		{
			SetConsoleTextAttribute(screen,color+9);
			makejackolantern();
		}
	}while(color !=6);
	return 0;
}