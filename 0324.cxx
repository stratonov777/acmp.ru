#include <iostream>
using namespace std;
long long int a,b;
int main() {
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>a;
b=a%10*1000+a%100/10*100+a/100%10*10+a/1000;	
if (a==b){cout<<"YES";}
else {cout<<"NO";}
return 0;
}