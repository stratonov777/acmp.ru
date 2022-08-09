#include <iostream>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int a,b;
cin>>a>>b;
while(a!=b){
    if (a>b){a=a-a/b*b;}
    else {b=b-b/a*a;}
    if(a==0){a=b;}
    if(b==0){b=a;}
}
cout<<a;
return 0;
}