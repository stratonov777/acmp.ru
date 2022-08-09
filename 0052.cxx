#include <iostream>
using namespace std;
int summ(int a){
return a/100+a%10+a/10%10;
}
int main() {
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int a,b;
cin>>a;
b=a%1000;
a=a/1000;
if (summ(a)==summ(b)){cout<<"YES";}
else{cout<<"NO";}
return 0;
}