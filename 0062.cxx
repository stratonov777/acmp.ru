#include <iostream>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
char a,b;
int a_i,b_i;
cin>>a>>b;
a_i=a-64;
b_i=b-48;
if(a_i%2!=0 && b_i%2!=0){cout<<"BLACK";}
if(a_i%2!=0 && b_i%2==0){cout<<"WHITE";}
if(a_i%2==0 && b_i%2!=0){cout<<"WHITE";}
if(a_i%2==0 && b_i%2==0){cout<<"BLACK";}
return 0;
}