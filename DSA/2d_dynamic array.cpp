#include <iostream>
using namespace std;
int main() {
    int row,col;
    int **a;
    cin>>row>>col;
    a = new int*[row];
    for(int i=0;i<row;i++){
        a[i] = new int[col]{0};
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }
    cout<<endl;
    }
    return 0;
}


#include <iostream>
using namespace std;
int *fun(){
    int *a = new int[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<a<<endl;
    cout<<a[0]<<endl;
    return a;
}
int main() {
   int *b = fun();
   cout<<b<<endl;
   cout<<b[0]<<endl;
    return 0;
}
