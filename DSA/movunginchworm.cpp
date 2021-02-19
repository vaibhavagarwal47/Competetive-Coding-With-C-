#include<iostream>
#include<windows.h>
#include <string>
#include <ctime>
#include <vector>
#include <algorithm>

using namespace std;
/*char fruitinput(string worm)
{

}
*/
int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	int numberoftimes;
	cin>>numberoftimes;
	COORD line = {5,10};
	string worm = "**>";
	SetConsoleCursorPosition(screen,line);
	cout<<worm;
	Sleep(500);
	for(int lineofmovement = 0 ; lineofmovement < numberoftimes ; lineofmovement++)
	{
		//moveagain:
		while (line.Y<40)
		{
			cout << worm;
			Sleep(50);
			//fruitinput();
			if(line.X!=10)
			{
				break;
			}
		}
	}


}