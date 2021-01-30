/*
//count the no of blank spaces in the names and print it below

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int count;
    char a[5][30];
    for(int i=0;i<5;i++){
        cin.get(a[i],30);
        cin.get();
    }
    for(int i=0;i<5;i++){
        count = 0;
        for(int j=0;j<strlen(a[i]);j++){
            if(a[i][j]== ' '){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
*/
/*
//print the length of each string

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[5][30];
    for(int i=0;i<5;i++){
        cin.get(a[i],30);
        cin.get();
    }
    for(int i=0;i<5;i++){
        int l = strlen(a[i]);
        cout<<l<<endl;
    }
    return 0;
}
*/
/*
//print the reversed string for each name
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[5][30];
    for(int i=0;i<5;i++){
        cin.get(a[i],30);
        cin.get();
    }
    for(int i=0;i<5;i++){
        int l = strlen(a[i]);
       for(int j=0;j<l;j++){
           swap(a[i][j],a[i][l-1]);
           l--;
       }
       cout<<a[i]<<endl;
    }
    return 0;
}
*/
/*
//search a name in the given array of strings
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[5][30];
    int flag;
    for(int i=0;i<5;i++){
        cin.get(a[i],30);
        cin.get();
    }
    char b[30];
    cin.get(b,30);
    cin.get();
    for(int i=0;i<5;){
       if(strcmp(a[i],b) == 0){
           cout<<"name found at index "<<i;
           flag = 1;
           i++;
           break;
       }
       else {
           flag = 0;
           i++;
       }
    }
    if(flag==0){
        cout<<"not found ";
    }
    return 0;
}
*/
/*
//arrange the names in ascending order

*/