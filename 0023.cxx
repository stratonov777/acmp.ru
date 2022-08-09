#include <iostream>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int a=0,n;
cin>>n;
for(int i=1;i<=n;i++){
if (n%i==0){a=a+i;}
}
cout<<a;
return 0;
}
