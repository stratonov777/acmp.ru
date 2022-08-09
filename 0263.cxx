#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int p,m,n,c;

int main()
{
    cin>>p>>m>>n;
    c=abs(m-n)-1;
    p=p-max(m,n)-1+min(m,n);
    cout<<min(c,p);
    return 0;
}