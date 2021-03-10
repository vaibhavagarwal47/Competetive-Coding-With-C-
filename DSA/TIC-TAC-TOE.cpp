#include<iostream>
#include<windows.h>
#include<string>
using namespace std;
void displayinfo()
{
	cout<<"welcome to tictactoe\n";
}
char user1choice()
{
	char letter;
	cout<<"choose your letter: X or O\n";
	cin>>letter;
	return letter;
}
char compchoice(char x)
{
	char computerchoice;
	if(x=='X')
	{
		computerchoice = 'O';
	}
	else
	{
		computerchoice = 'X';
	}
	return computerchoice;
}
char enterchar(char x,char y,char arr[][],char choice1)
{
	int row,column;
	cout<<"enter the coordinates\n";
	cin>>row;
	cin>>column;
	a[row][column] = choice1;
	return a[row][column];
}
int main()
{	
	system("cls");

	char user1choice,user2choice;
	displayinfo();
	char choice1 = userchoice();
	char choice2 = compchoice(choice1);
	char a[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			a[i][j] = '*';
			cout<<a[i][j];
		}
		cout<<endl;
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(userpoints=0)
			{
				enterchar(choice1,choice2,a[][],choice1);
				
			}
			
		}
		cout<<endl;
	}
	
}