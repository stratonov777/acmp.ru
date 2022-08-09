#include <iostream>
using namespace std;
int kollatco(int a,int n){
if (a==2){return n;}
else{
if(a%2==0){
a=a/2;
n++;
kollatco(a,n);
}
else{
a=a*3+1;
n++;
kollatco(a,n);
}
}
}
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int p,k;
cin>>p>>k;
int summ=0;
for (int i=p;i<=k;i++){
summ=summ+kollatco(i,0);
}
cout<<summ;
return 0;
}