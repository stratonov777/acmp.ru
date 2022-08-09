#include <iostream>
#include <cstring>
using namespace std;
int main (){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
char ch[10001];
int n;
cin>>ch;
n=strlen(ch);
for (int i=0;i<n;i++){
if (ch[i]=='0'){
    n=-1;
    cout<<"NO";
    break;}
}
if (n!=-1){cout<<"YES";}
return 0;
}