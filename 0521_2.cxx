#include <iostream>
using namespace std;
int kol(int a){
int k=0;
while (a!=2){
k++;
if (a%2==0){a=a/2;}
else{a=a*3+1;}
}
return k;
}
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int p,k,s=0;
cin>>p>>k;
for (int i=p;i<=k;i++){
s=s+kol(i);
}
cout<<s<<endl;
return 0;
}