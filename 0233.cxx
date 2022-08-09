#include <iostream>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n;
int a[10001];
cin>>n;
for(int i=1;i<=n;i++){
cin>>a[i];
if(a[i]<=437){cout<<"Crash "<<i;
n=-1;
break;}
}
if (n!=-1){cout<<"No crash";}
return 0;
}