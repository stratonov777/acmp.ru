#include <iostream>
using namespace std;
int a;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>a;
if (a==1 || a==2 || a==4 || a==8 || a==16 || a==32 || a==64 || a==128 || 
    a==256 || a==512 || a==1024 || a==2048 || a==4096 || a==8192) {
cout<<"YES";
} else {cout<<"NO";}
return 0;
}