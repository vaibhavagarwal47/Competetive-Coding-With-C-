#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
string name;
int count = 1,
score,
totalscore;
double average;
cout << fixed << showpoint << setprecision(1);
cout << "Enter the first name of student " << count
<< " (or Q to quit) : ";
cin >> name;

while (name != "Q" && name != "q")
{
	totalscore = 0;
cout << "Enter score 1: " ;
cin >> score;
if (score < 0 || score > 100)
{ cout << "Score must be between 0 and 100. Please reenter: ";
cin >> score;
}
totalscore += score;
cout << "Enter score 2: ";
cin >> score;
if (score < 0 || score > 100)
{ cout << "Score must be between 0 and 100. Please reenter: ";
cin >> score;
}
totalscore += score;
average = totalscore /2.0;
cout << name << setw(6) << average << endl;
cout << "Enter the first name of student " << count++
<< " ( or Q to quit ) : " ;
cin >> name;
}
return 0;
}