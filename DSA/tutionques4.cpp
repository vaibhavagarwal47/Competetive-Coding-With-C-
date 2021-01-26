/*
#include <iostream>
#include<cstring>
using namespace std;
int main() {
    char a[1000],b[1000];
    cin.getline(a,1000,'$');
    for(int i=0;i<strlen(a);i++){
        strcpy(b," ");
        int j=0;
        while(a[i]!=' ' && i<strlen(a)){
            b[j]=a[i];
            j++;
            i++;
        }
        b[j]='\0';
        if(b[0]=='a' ||b[0]=='e' ||b[0]=='i' ||b[0]=='o' ||b[0]=='u' ||b[0]=='A' ||b[0]=='E' ||b[0]=='I' ||b[0]=='O' ||b[0]=='U'){
            puts(b);
        }
    }
}
*/
/*
#include <iostream>
#include<cstring>
using namespace std;
int main() {
    char a[1000],b[1000];
    cin.getline(a,1000,'$');
    for(int i=0;i<strlen(a);i++){
        strcpy(b," ");
        int j=0;
        while(a[i]!=' ' && i<strlen(a)){
            b[j]=a[i];
            j++;
            i++;
        }
        b[j]='\0';
        if(b[0]>='A' && b[0]<='Z'){
            puts(b);
        }
    }
}
*/

/*

#include <iostream>
#include<cstring>
using namespace std;
int main() {
    char a[1000],b[1000];
    cin.getline(a,1000,'$');
    for(int i=0;i<strlen(a);i++){
        strcpy(b," ");
        int j=0;
        while(a[i]!=' ' && i<strlen(a)){
            b[j]=a[i];
            j++;
            i++;
        }
        b[j]='\0';
        cout<<b[0]<<". ";
    }
}
*/


/*
#include <iostream>
#include<cstring>
using namespace std;
int main() {
    char a[1000],b[1000],lar[1000];
    strcpy(lar," ");
    cin.getline(a,1000,'$');
    for(int i=0;i<strlen(a);i++){
        strcpy(b," ");
        int k= strlen(lar);
        int j=0;
        while(a[i]!=' ' && i<strlen(a)){
            b[j]=a[i];
            j++;
            i++;
        }
        b[j]='\0';
       if(strlen(b)>k){
           strcpy(lar,b);
       }
    }
    cout<<lar;
    return 0;
}
*/
/*
#include <iostream>
#include<cstring>
using namespace std;
int main() {
    char a[1000],b[1000];
    int n,m,j;
    cin>>n;
    cin>>m;
    j=0;
    cin.getline(a,1000,'$');
    for(int i=n;i<m+1;i++){
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    puts(b);
        return 0;
}
*/

/*
#include <iostream>
#include<cstring>
using namespace std;
int main() {
    char a[1000],b[1000],c[100];
    int count=0;
    cin.getline(a,1000,'$');
    cin>>c;
    for(int i=0;i<strlen(a);i++){
        strcpy(b," ");
        int j=0;
        while(a[i]!=' ' && i<strlen(a)){
            b[j]=a[i];
            j++;
            i++;
        }
        b[j]='\0';
        if(strcmp(b,c)==0){
            count++;
        }
    }
    cout<<count;
}
*/

/*
#include <iostream>
#include<cstring>
using namespace std;
int main() {
    char a[1000],b[1000],c[100];
    cin.getline(a,1000,'$');
    cin>>c;
    for(int i=0;i<strlen(a);i++){
        strcpy(b," ");
        int j=0;
        while(a[i]!=' ' && i<strlen(a)){
            b[j]=a[i];
            j++;
            i++;
        }
        b[j]='\0';
        if(strcmp(b,c)==0){
           puts(b);
        }
    }
}
*/

#include <iostream>
#include<cstring>
using namespace std;
int main() {
    char a[1000];
    cin.getline(a,1000,'$');
    for(int i=0;i<strlen(a);i++){
        if(a[i]==' '){
            a[i] = a[i+1];
            i++;
        }
        cout<<a[i];
    }
        return 0;
}