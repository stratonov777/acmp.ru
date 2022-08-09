#include <iostream>
using namespace std;
int a,b,c,min,max;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>a>>b>>c;
if (a>=b) {
max=a;
min=b;
} else {
max=b;
min=a;
}
if (c<min) {min=c;}
if (c>max) {max=c;}
cout<<max-min;
return 0;
}
