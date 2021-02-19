#include<iostream>
#include<windows.h>
using namespace std;
const int max=5;
void displayinfo()
{
	cout<<"\t\t\tWELCOME TO THE GAME"<<endl;
	cout<<"\t\t\tROCK-PAPER-SCISSORS"<<endl;
	cout<<"THERE ARE TOTAL OF 5 ROUNDS YOU WILL PLAY WITH COMPUTER"<<endl;
	cout<<"YOU NEED TO WIN MINIMUM OF 3 ROUNDS TO WIN THE GAME"<<endl;
	cout<<"FOR ROCK CHOOSE 1\tFOR PAPER CHOOSE 2\tFOR SCISSORS CHOOSE 3"<<endl;
}
void displayresults(int upoints,int cpoints)
{	
	cout<<"YOUR POINTS : "<<upoints<<endl;
	cout<<"COMPUTER POINTS : "<<cpoints<<endl;
	if(upoints>cpoints)
	{	
		cout<<"\t\t\tYOU WON THE GAME!!!";
	}
	else if(cpoints==upoints)
	{	
		cout<<"\t\t\tOOPS!! GAME TIED";
	}
	else
	{	
		cout<<"\t\t\tCOMPUTER WON THE GAME!!";
	}
}
int main()
{	
	system("cls");
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(screen,11);
	displayinfo();
	int userchoice,
	computerchoice,
	roundcount=0,
	userpoints=0,
	computerpoints=0;
	while(roundcount!=5)
	{	
		SetConsoleTextAttribute(screen,4);
		cout<<"Enter your choice: ";
		cin>>userchoice;
		computerchoice = 1+ (rand()%3);
		if(userchoice==computerchoice)
		{
			SetConsoleTextAttribute(screen,6);
			cout<<"OOPS!! ROUND TIED"<<endl;
			roundcount++;
		}
		else if(userchoice==1 && computerchoice==3 || userchoice==2 && computerchoice==1 
			|| userchoice==3 && computerchoice==2)
		{
			SetConsoleTextAttribute(screen,6);
			cout<<"You won the round"<<endl;
			userpoints++;
			roundcount++;
		}
		else
		{
			SetConsoleTextAttribute(screen,6);
			cout<<"Computer won the round"<<endl;
			computerpoints++;
			roundcount++;
		}
	}
	SetConsoleTextAttribute(screen,8);
	displayresults(userpoints,computerpoints);
	SetConsoleTextAttribute(screen,7);
	return 0;
}