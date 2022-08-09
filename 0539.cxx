#include <iostream>
using namespace std;
int a;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>a;
if (a!=1){
if (!(a%2)){cout<<a/2;}
else {cout<<a;}}
else cout<<0;
return 0;
}