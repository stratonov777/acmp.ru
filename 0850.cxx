#include<iostream>
#include<algorithm>
using namespace std;
int a,b,mx,mn;
int main()
{
    cin>>a>>b;
    mx=max(a,b)-(max(a,b)-min(a,b));
    if(max(a,b)%2==0){mn=max(a,b)/2;}
    else{mn=max(a,b)/2+1;}
    cout<<mn<<" "<<mx;
    return 0;
}