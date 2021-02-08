#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string filename,name;
	cin>>filename;
	int number;
	cin>>number;
	ofstream outputfile;
	outputfile.open(filename.c_str());
	for(int i=0;i<number;i++){
		cin>>name;
		outputfile<<name<<endl;
	}
	outputfile.close();
	ifstream infile;
	infile.open(filename.c_str());
	for(int i=0;i<number;i++){
		infile>>name;
		cout<<name<<endl;
	}
	infile.close();
	return 0;
}