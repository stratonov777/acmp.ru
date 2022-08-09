#include <iostream>
#include <algorithm>
using namespace std;
int a,b,c;
int main(){
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout);
cin>>a>>b>>c;
if (a+b==c || a+c==b || b+c==a){cout<<"YES";}
else {cout<<"NO";}
 return 0;
}