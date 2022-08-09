#include <iostream>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int a1,an,n;
cin>>a1>>an>>n;
n=a1+(an-a1)*(n-1);
cout<<n;
return 0;
}