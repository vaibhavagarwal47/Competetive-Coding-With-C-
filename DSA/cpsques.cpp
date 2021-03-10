#include <iostream>
using namespace std;
void enterinput(int a[][100],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    return;
}
void printmatrix(int a[][100],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}
void rotatematrix(int a[][100],int n)
{
    int b[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[i][j] = a[j][i];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}
int main() {
    int n;
    cin>>n;
    int a[100][100];
    enterinput(a,n);
    cout<<"The original matrix is: \n";
    printmatrix(a,n);
    cout<<"The rotated matrix is: \n";
    rotatematrix(a,n);
}















#include <iostream>
using namespace std;
void enterinput(int a[][100],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    return;
}
void printabovediagonal(int a[][100],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
            {
                cout<<a[i][j]<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return;
}
int main() {
    int n;
    cin>>n;
    int a[100][100];
    enterinput(a,n);
    printabovediagonal(a,n);
}











#include <iostream>
using namespace std;
void enterinput(bool a[][100],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    return;
}
void boolmatrix(bool a[][100],int n,int m)
{
    bool row[n] = {0};
    bool col[m] = {0};
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==1)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(row[i] ==1 || col[j]==1)
            {
                a[i][j] = 1;
            }
        }
    }
}
void printmatrix(bool a[][100],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}
int main() {
    int n,m;
    cin>>n;
    cin>>m;
    bool a[100][100];
    enterinput(a,n,m);
    cout<<"The original matrix is: \n";
    printmatrix(a,n,m);
    cout<<"The resultant matrix is: \n";
    boolmatrix(a,n,m);
    printmatrix(a,n,m);
}












#include <iostream>
using namespace std;
void enterinput(int a[][100],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    return;
}
void printmatrix(int a[][100],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}
void rotatematrix(int a[][100],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}
int main() {
    int n;
    cin>>n;
    int a[100][100];
    enterinput(a,n);
    cout<<"The original matrix is: \n";
    printmatrix(a,n);
    cout<<"The rotated matrix is: \n";
    rotatematrix(a,n);
}












