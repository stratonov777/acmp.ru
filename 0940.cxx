#include <iostream>
#include <string>
using namespace std;
string s;
int n;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>n>>s;
cout<<s.erase(n-1,1);
return 0;
}
