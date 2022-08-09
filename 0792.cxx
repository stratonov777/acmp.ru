#include <iostream>
using namespace std;
int n1,n2,p1,p2;
int mod(int a, int b){
int n=0;
if (a==0){cout<<0;}
else{
do{
n=n+a%b;
a=a/b;
}
while(a>=1);
}
return n;
}
int main(){
cin>>n1>>p1>>n2>>p2;
if (mod(n1,p1)==mod(n2,p2)){cout<<mod(n1,p1);}
else{cout<<0;}
return 0;
}