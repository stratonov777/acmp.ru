#include <iostream>
using namespace std;
long long int a,b,c;
int main() {
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>a>>b>>c;
if (a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)){cout<<"YES";}
else{cout<<"NO";}
return 0;
}