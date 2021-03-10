#include<iostream>
using namespace std;
#define dc 2000  
#define misc 5000

//patient account that handles all the details of patient

class PatientAccount
{
private:
	string name;
	string gender;
	int age;
	int days;
	double totalbill;
public:
	void setname(string n)
	{
		name = n;	
	}
	string getname()
	{
		return name;
	}
	void setage(int a)
	{
		age = a;
	}
	int getage()
	{
		return age;
	}
	void setgender(string g)
	{
		gender = g;
	}
	string getgender()
	{
		return gender;
	}
	void setdays(int d)
	{
		days = d;
	}
	int getdays()
	{
		return days;
	}
	void settotalbill(double tb)
	{
		totalbill = tb;
	}
	double gettotalbill()
	{
		return totalbill;
	}
};
class Surgery
{
public:
	long int heartsurgerycost = 2000000;
	long int brainsurgerycost = 5000000;
	long int cancertreatmentcost = 1500000;
	long int kidneysurgerytreatment = 700000;
	long int livertransplant = 800000;
	void heartsurgery(long int tb)
	{
		tb += heartsurgerycost;
		PA.settotalbill(tb);
		return;
	}
	void brainsurgery(long int tb)
	{
		tb += brainsurgerycost;
		PA.settotalbill(tb);
		return;
	}
	void cancertreatment(long int tb)
	{
		tb += cancertreatmentcost;
		PA.settotalbill(tb);
		return;
	}
	void kidneysurgery(long int tb)
	{
		tb += kidneysurgerytreatment;
		PA.settotalbill(tb);
		return;
	}
	void livertrans(long int tb)
	{
		tb += livertransplant;
		PA.settotalbill(tb);
		return;
	}
};
class Pharmacy
{
public:
	long int telma = 5000;
	long int ciplal = 4000;
	long int oswal = 6500;
	long int qwerty = 2000;
	long int hawking = 7000;
	void updatetelma(long int tb)
	{
		tb += telma;
		PA.settotalbill(tb);
		return;
	}
	void updateciplal(long int tb)
	{
		tb += ciplal;
		PA.settotalbill(tb);
		return;
	}
	void updateoswal(long int tb)
	{
		tb += oswal;
		PA.settotalbill(tb);
		return;
	}
	void updateqwerty(long int tb)
	{
		tb += qwerty;
		PA.settotalbill(tb);
		return;
	}
	void updatehawking(long int tb)
	{
		tb += hawking;
		PA.settotalbill(tb);
		return;
	}
};

//enter the patients info

void enterinfo()
{
	string n,g;
	int a,d;
	double tb;
	cout<<"Enter the name: ";
	cin>>n;
	cout<<"Enter the age of patient: ";
	cin>>a;
	cout<<"Enter the gender of patient: ";
	cin>>g;
	cout<<"Enter the number of days patient spend in hospital: ";
	cin>>d;
	cout<<"Enter the total bill: ";//initially zero
	cin>>tb;

	PatientAccount patient;

	patient.setname(n);
	patient.setage(a);
	patient.setgender(g);
	patient.setdays(d);
	patient.settotalbill(tb);
}
void updatesurgeryinfo()
{
	int option;
	cout<<
	switch(optionsurgery)
	{
		case 1: op.heartsurgery()
		break;
		case 2: op.brainsurgery()
		break;
		case 3: op.cancertreatment()
		break;
		case 4: op.kidneysurgery()
		break;
		case 5: op.livertrans()
		break;
		default: cout<<"Invalid Choice";
		break;
	}

}