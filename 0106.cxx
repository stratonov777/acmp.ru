#include <iostream>
#include <algorithm>
using namespace std;
int j,n,a,b;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>n;
for (int i=0;i<n;i++){
cin>>j;
if (j==0){a++;}
if (j==1){b++;}
}
cout<<min(a,b);
return 0;
}
