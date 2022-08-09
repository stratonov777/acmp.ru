#include <iostream>
using namespace std;
long long int a,b,c;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>a>>b>>c;
cout<<2*a*b+2*a*c+2*b*c<<" "<<a*b*c;
return 0;
}