#include <iostream>
using namespace std;
long long int a,b;
int main() {
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>a>>b;
if (a>b){cout<<12-(a-b);}
else{cout<<b-a;}
return 0;
}