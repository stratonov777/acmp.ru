#include <iostream>
using namespace std;
int n,m,a,b;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
for(int i=0;i<4;i++){
cin>>n>>m;
a=a+n;
b=b+m;
}
if (a>b) {cout<<1;}
if (a<b) {cout<<2;}
if (a==b) {cout<<"DRAW";}
return 0;
}