#include <iostream>
using namespace std;
int x,y,z;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>x>>y>>z;
if (x+y<z){cout<<"Impossible";}
else {cout<<x+y-z;}
return 0;
}