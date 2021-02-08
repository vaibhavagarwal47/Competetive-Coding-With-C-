/*

//check if the number is even or odd

#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if((n&1) == 0){
        cout<<"number is even"<<endl;
    }
    else {
        cout<<"number is odd";
    }
    return 0;
}
*/
/*

//check the i th bit of a number

#include <iostream>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    cin>>i;
    if((n& (1<<i))>0){
        cout<<"the bit was 1"<<endl;
    }
    else{
        cout<<"the bit was 0"<<endl;
    }
    return 0;
}
*/
/*

//set the i th bit of a number
#include <iostream>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    cin>>i;
    int mask = (1<<i);
    n = n|mask;
    cout<<n;
    return 0;
}
*/
/*

//clear a particular bit of a number

#include <iostream>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    cin>>i;
    int mask = (1<<i);
    n = n&(~mask);
    cout<<n;
    return 0;
}
*/
/*

//update a particular bit in a number

#include <iostream>
using namespace std;
int main() {
    int n,i,v;
    cin>>n;
    cin>>i;
    cin>>v;
    int mask = (1<<i);
    n = n&(~mask);
    int mask2 = (v<<i);
    n = n|mask2;
    cout<<n;
    return 0;
}
*/
/*

//clear a range of bits in a number

#include <iostream>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    cin>>i;
    int mask =(-1<<(i+1));
    n = n&mask;
    cout<<n;
    return 0;
}
*/
/*

//clearing a range of bits from i to j th index

#include <iostream>
using namespace std;
int main() {
    int n,m,i,j;
    cin>>n;
    cin>>i;
    cin>>j;
    int mask =(-1<<(i+1));
    n = n&mask;
    m = (1<<j)-1;
    n = n|m;
    cout<<n;
    return 0;
}
*/
/*

//replace a range of bits of n number from m number

#include <iostream>
using namespace std;
int main() {
    int num1,num2,upper,lower;
    int secnum;
    cin>>num1;
    cin>>upper;
    cin>>lower;
    cin>>secnum;
    int mask =(-1<<(upper+1));
    num1 = num1&mask;
    num2 = (1<<lower)-1;
    num1 = num1 | num2;
    int mask2 = secnum<<lower;
    int finalnum = num1|mask2;
    cout<<finalnum;
    return 0;
}
*/
/*

//count how many set bits are in a range of numbers using stl function

#include <iostream>
#include<algorithm>
using namespace std;
int main() 
{
    int n,x,y,number;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        int ans = 0;
        for(int j=x;j<=y;j++)
        {
            number = j;
              ans = ans + __builtin_popcount(number);
        }
        cout<<ans<<endl;
    }
    return 0;
}
*/
/*

//