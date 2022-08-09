#include <iostream>
using namespace std;
int k;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>k;
k=k*100+90+9-k;
cout<<k;
return 0;
}
