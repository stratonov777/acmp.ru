#include <iostream>
using namespace std;
int a,b,c;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>a>>b>>c;
if (a>=94 && a<=727 && b>=94 && b<=727 && c>=94 && c<=727){
if (b>a) {a=b;}
if (c>a) {a=c;}
cout<<a;
} else cout<<"Error";
 
return 0;
}