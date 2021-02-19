#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	system("cls");
HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
COORD pas = {40, 3};
SetConsoleCursorPosition(screen, pas) ;
cout << "OO" << endl;
Sleep(500) ;
for (int tossit = 1; tossit <= 3; tossit++)
{
while (pas.Y <= 20)
{
SetConsoleCursorPosition(screen, pas) ;
cout << "||"<< endl;
pas.Y++;
SetConsoleCursorPosition(screen, pas) ;
cout << "OO" << endl;
Sleep(100) ;
}
while (pas.Y > 3)
{
SetConsoleCursorPosition(screen, pas) ;
cout << "  " << endl;
pas.Y--;
SetConsoleCursorPosition(screen, pas) ;
cout << "OO" << endl;
Sleep(100) ;
}
}
return 0;
}