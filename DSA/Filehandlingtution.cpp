#include<iostream>
#include<fstream>
#include <string>
using namespace std;
int main()
{
	char story,a;
	int countup=0,countvow=0,countdot=0,countthe=0;
	string lines1,lines2,word;
	ifstream infile;
	infile.open("story.txt");
	/*
	while(infile>>story)
	{
		if(story>='A' && story<='Z')
		{
			countup++;
		}
		if(story=='a' || story=='A' || story=='E' || story=='e' || story=='i' || story=='I' || story=='o' || story=='O' || story=='U' || story=='u')
		{
			countvow++;
		}
	}
	cout<<countup<<endl<<countvow<<endl;
	*/
	/*
	while(getline(infile,lines1))
	{
		if(lines1[0]>='A' && lines1[0]<='Z')
		{
			cout<<lines1<<endl;
		}
	}
	*/
	/*
	while(infile>>lines2)
	{
		if(lines2=="the" || lines2=="The")
		{
			countthe++;
		}
	}
	cout<<countthe<<endl;
	*/
	/*
	while(infile>>a)
	{
		if(a=='.')
		{
			countdot++;
		}
	}
	cout<<countdot<<endl;
	*/
	/*
	while(infile>>word)
	{
		if(word.size()==7 && word[6]!='.')
		{
			cout<<word<<endl;
		}
	}
	*/
	return 0;
}