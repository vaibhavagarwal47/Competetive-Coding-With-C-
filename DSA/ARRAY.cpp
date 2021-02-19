#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	const int max = 6;
	int employee[max];
	int count=0;
	ofstream outfile;
	outfile.open("data.dat");
	while(count!=max)
	{	
		cin>>employee[count];
		outfile<<employee[count];
		count++;
	}
	outfile.close();

	ifstream datafile;
	datafile.open("data.dat");
	if(!datafile)
	{
		cout<<"error"<<endl;
	}
	while(count>=0 && datafile>>employee[count])
	{
		count--;
	}
	datafile.close();
	for(int i=0;i<max;i++)
	{
		cout<<employee[i]<<endl;
	}
	return 0;
}