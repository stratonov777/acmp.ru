#include <iostream>
using namespace std;
int ten_to_two(int a){
int n=0;
while (a>=1){
n=n+a%2;
a=a/2;
cout<<a<<" "<<n<<endl;
}
return n;
}
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int p;
cin>>p;
cout<<p+ten_to_two(p);
return 0;
}