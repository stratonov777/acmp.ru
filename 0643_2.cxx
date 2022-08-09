#include <iostream>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int p,n=0,c;
cin>>p;
c=p;
while (p>=1){
n=n+p%2;
p=p/2;
}
cout<<c+n;
return 0;
}