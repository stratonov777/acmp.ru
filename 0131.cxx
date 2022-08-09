#include<iostream>
using namespace std;
int main()
{
bool a;
int n,t,mx=0,j;
cin>>n;
for (int i=0;i<n;i++){
    cin>>t>>a;
    if (a==true && mx<t){mx=t;j=i+1;}
}
if (mx==0){j=-1;}
    cout<<j;
    return 0;
}
