#include <iostream>
using namespace std;
int a,b,c;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>a>>b>>c;
if (a*b==c) {
cout<<"YES";
} else {
cout<<"NO";
}
return 0;
}
