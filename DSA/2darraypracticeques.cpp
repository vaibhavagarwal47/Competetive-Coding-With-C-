/*
//print opposite diagonal elements

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int end_col = n-1;
    int end_row = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==end_row && j==end_col){
            cout<<a[end_row][end_col];
            end_col--;
            end_row++;
            }
            else {
                cout<<"\t";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
//print both diagonal elements
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int end_col = n-1;
    int end_row = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==end_row && j==end_col){
            cout<<a[end_row][end_col];
            end_col--;
            end_row++;
            }
            else if(i==j){
                cout<<a[i][j];
            }
            else {
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
//print non diagonal elements
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int end_col = n-1;
    int end_row = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==end_row && j==end_col){
            cout<<"\t";
            end_col--;
            end_row++;
            }
            else if(i==j){
                cout<<"\t";
            }
            else {
                cout<<a[i][j]<<"\t";
            }
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
//print
*
**
***
****
*****

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || i>j){
                cout<<a[i][j]<<"   ";
            }
        }
       cout<<endl;
    }
    return 0;
}
*/

/*
//print 
*****
 ****
  ***
   **
    *
    #include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || i<j){
            cout<<a[i][j];
            }
            else if(i>j){
                cout<<" ";
            }
        }
       cout<<endl;
    }
    return 0;
}
*/

/*
//print
    *
   **
  ***
 ****
*****
#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int a[n][n];
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cin>>a[i][j];
       }
   }
    for(int i=0;i<n;i++){
        for(int k=i+1;k<n;k++){
            cout<<" ";
        }
        for(int j=n-i-1;j<n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
   return 0;
}
*/

/*
//print 
*****
****
***
**
*
#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int a[n][n];
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cin>>a[i][j];
       }
   }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
   return 0;
}
*/

/*
//print
*****
*   *
*   *
*   *
*****
