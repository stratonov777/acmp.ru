#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string s1;
int a,b;
int main() {
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
cin>>a>>b;
cin>>s1;
if (s1=="freeze"){cout<<min(a,b);}
if (s1=="heat"){cout<<max(a,b);}
if (s1=="auto"){cout<<b;}
if (s1=="fan"){cout<<a;}
return 0;
}