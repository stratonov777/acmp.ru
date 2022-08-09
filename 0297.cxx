#include<iostream>
#include<string>
using namespace std;
string s;
int n,p=0;
int main()
{
    cin>>s;
    n=s.length();
    for(int i=0;i<=n;i++){
        if (s[i]=='6'||s[i]=='9'||s[i]=='0'){p+=1;}
        if (s[i]=='8'){p+=2;}
    }
    cout<<p;
    return 0;
}