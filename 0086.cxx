#include <iostream>
using namespace std;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int a;
cin>>a;
a=a*a-(a-1)*3-1;
cout<<a;
return 0;
}