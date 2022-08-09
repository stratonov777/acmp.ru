#include <iostream>
using namespace std;
int main(){
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
long long int n,min,max;
cin>>n;
max=n*6;
min=n/6;
n=n%6;
switch(n){
case 5 : n=2; break;
case 4 : n=3; break;
case 3 : n=4; break;
case 2 : n=5; break;
case 1 : n=6; break;
defaut : n=0;
}
min=min+n;
cout<<min<<" "<<max;
return 0;
}