#include <iostream>
using namespace std;
int n,m,k;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>n>>m>>k;
if (n*m>=k){cout<<"YES";}
else {cout<<"NO";}
return 0;
}