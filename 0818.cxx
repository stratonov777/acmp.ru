#include <iostream>
using namespace std;
int a,b,n;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>a;
for(int i=0;i<a;i++){
cin>>b;
n=n+b-1;
}
cout<<n+1;
return 0;
}
