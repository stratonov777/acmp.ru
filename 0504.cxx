#include <iostream>
using namespace std;
int a;
int main() {
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>a;
while(a>0){
a=a-3;
}
if (a==-2){cout<<"VGC";}
if (a==-1){cout<<"CVG";}
if (a==0){cout<<"GCV";}
return 0;
}