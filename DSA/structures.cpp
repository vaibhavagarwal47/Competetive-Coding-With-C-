/*
nested structure read and display of information

#include<iostream>
using namespace std;
int main(){
	struct date_ofbirth {
		int dd;
		int mm;
		int yyyy;
	}date;

	struct student {
		int roll;
		char name[50];
		date_ofbirth dob;
	};
	student stud1;
	cin>>stud1.roll;
	cin>>stud1.name;
	cin>>stud1.dob.dd;
	cin>>stud1.dob.mm;
	cin>>stud1.dob.yyyy;

	cout<<"roll number is= "<<stud1.roll;
	cout<<"\nname is= "<<stud1.name;
	cout<<"\ndate of birth is= "<<stud1.dob.dd<<"-"<<stud1.dob.mm<<"-"<<stud1.dob.yyyy;

	return 0;
}
*/

/*
Write a program to read and display the information of all the students in a class. Then
edit the details of the ith student and redisplay the entire information.


#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n;
	int x,n_roll,n_age;
	char n_name[50];
	cout<<"enter the number of students ";
	cin>>n;
	struct student {
		int roll;
		char name[50];
		int age;
	};
	struct student stud1[100];
	for(int i=0;i<n;i++){
	cout<<"enter the roll no of "<<i+1<<endl;
	cin>>stud1[i].roll;
	cout<<"enter the name of student "<<i+1<<endl;
	cin>>stud1[i].name;
	cout<<"enter the age of student "<<i+1<<endl;
	cin>>stud1[i].age;
	}
	for(int i=0;i<n;i++){
		cout<<"the roll no of student "<<i+1<<" is "<<stud1[i].roll<<endl;
		cout<<"the name of student "<<i+1<<" is "<<stud1[i].name<<endl;
		cout<<"the age of student "<<i+1<<" is "<<stud1[i].age<<endl;
	}
	cout<<"enter the number of students whose details you want to edit";
	cin>>x;
	cout<<"enter the new rollnumber";
	cin>>n_roll;
	cout<<"enter the new name";
	cin>>n_name;
	cout<<"enter new age";
	cin>>n_age;

	for(int i=x-1;i>=0;){
		stud1[i].roll= n_roll;
		strcpy(stud1[i].name,n_name);
		stud1[i].age= n_age;
		break;
	}
	for(int i=0;i<n;i++){
		cout<<"the roll no of student "<<i+1<<" is "<<stud1[i].roll<<endl;
		cout<<"the name of student "<<i+1<<" is "<<stud1[i].name<<endl;
		cout<<"the age of student "<<i+1<<" is "<<stud1[i].age<<endl;
	}
	return 0;
}
*/

/*
passing individual members of structures to functions

#include<iostream>
using namespace std;
void display(int a,int b){
	cout<<a;
	cout<<b;
}
int main(){
	typedef struct{
		int x;
		int y;
	}coordinates;
	coordinates coord;
	cin>>coord.x;
	cin>>coord.y;
	display(coord.x,coord.y);
	return 0;
}
*/

/*
Write a program to read, display, add, and subtract two distances. Distance must be defined
using kms and meters
*/
#include<iostream>
using namespace std;
void display(distance dis){
	cout<<dis.dist1<<endl;
	cout<<dis.dist2;
}
int main (){
	typedef struct{
		int dist1;
		int dist2;
	}distance;
	distance dis;
	cout<<"enter distance 1";
	cin>>dis.dist1;
	cout<<"enter dstance 2";
	cin>>dis.dist2;
	display(dis);

	return 0;
}