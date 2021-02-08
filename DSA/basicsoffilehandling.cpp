#include <iostream>
#include<windows.h>
#include <fstream>
#include <string>
using namespace std;

/*
int main()
{
	ofstream outputfile;
	string name1,name2,name;
	//it will make a file at desired path with filename as names
	outputfile.open("C:\\VAIBHAV\\names.txt");	
	//to take names as input from user
	cin>>name1;
	cin>>name2;
	outputfile<<name1<<endl;
	outputfile<<name2<<endl;
	outputfile.close();


	ifstream inputfile;
	inputfile.open("C:\\VAIBHAV\\names.txt");
	inputfile>>name;
	cout<<name<<endl;
	inputfile>>name;
	cout<<name<<endl;
	return 0;
}
*/
/*
int main()
{
	ofstream outputfile;
	int numberofdays;
	double salary;
	double num=0.0;
	cin>>numberofdays;
	outputfile.open("salary.txt");
	for(int i=1;i<=numberofdays;i++){
		cin>>salary;
		outputfile<<salary<<endl;
	}
	outputfile.close();

	ifstream inputfile;
	inputfile.open("salary.txt");
	while(inputfile>>salary)
	{
		num = num + salary;
	}
	inputfile.close();
	cout<<num<<endl;
	return 0;
}
*/

// print the output in colors
int main(){
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	for(int color = 0;color<200;color++){
		SetConsoleTextAttribute(screen,color);
		cout<<"hello all"<<endl;
		Sleep(200);
	}
	SetConsoleTextAttribute(screen,7);
	return 0;
}
