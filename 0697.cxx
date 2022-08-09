#include <iostream>
using namespace std;
int l,w,h;
int main() {
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>l>>w>>h;
if ((l*h+w*h)%8==0){cout<<(l*h+w*h)/8;}
else{cout<<(l*h+w*h)/8+1;}
return 0;
}