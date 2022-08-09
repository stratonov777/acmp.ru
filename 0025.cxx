#include <iostream>
using namespace std;
int a,b;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>a>>b;
if (a>b) {
cout<<">";}
if (a<b) {
cout<<"<";}
if (a==b) {
cout<<"=";}
return 0;
}
