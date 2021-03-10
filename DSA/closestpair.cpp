#include <bits/stdc++.h>
using namespace std;
int distance(int a,int b)
{
    float d = sqrt((b.first-a.first)*(b.first-a.first) + (b.second - a.second)*(b.second - a.second));
    return d;
}
int main() {
    int n;
    cin>>n;
    int pair<int,int> p[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i].first;
        cin>>p[i].second;
    }
    float d=0,min=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(p[i]!=p[j])
            {
                d = distance(p[i],[j]);
            }
            if(d<min)
            {
                min = d;
            }
        }
    }
    cout<<d<<endl;
}
