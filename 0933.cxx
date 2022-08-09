#include <iostream>
#include <algorithm>
using namespace std;
int main() {
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int a,b,c,t;
cin>>a>>b>>c>>t;
if (a<=t){cout<<a*b+(t-a)*c;}
else {cout<<b*t;}
return 0;
}