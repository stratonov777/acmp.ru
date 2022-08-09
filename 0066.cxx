#include <iostream>
#include <string>
using namespace std;
string s="qwertyuiopasdfghjklzxcvbnmq",e;
int main() {
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>e;
cout<<s[s.find(e)+1];
return 0;
}