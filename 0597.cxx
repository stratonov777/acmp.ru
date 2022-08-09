#include <iostream>
#include <algorithm>
using namespace std;
int a,b,c;
int main(){
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout);
cin>>a>>b>>c;
if (2*c+2*b<=2*a){cout<<"YES";}
else{cout<<"NO";}
return 0;
}