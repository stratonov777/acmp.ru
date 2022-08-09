#include <iostream>
using namespace std;
int a;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>a;
if (a<1 || a>12) {cout<<"Error";}
else{
if (a==12 || a==1 || a==2) {cout<<"Winter";}
if (a==3 || a==4 || a==5) {cout<<"Spring";}
if (a==6 || a==7 || a==8) {cout<<"Summer";}
if (a==9 || a==10 || a==11) {cout<<"Autumn";}
}
return 0;
}