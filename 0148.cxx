#include <iostream>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int a,b;
cin>>a>>b;
while(a!=b){
    if (a>b){a=a-b;}
    else {b=b-a;}
}
cout<<a;
return 0;
}