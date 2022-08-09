#include<iostream>
#include<cmath>
using namespace std;
long long int a,b;
long double z;
int main()
{
    cin>>a>>b;
    z=sqrt(a*b);
    if(remainder(z,1)==0){cout<<(long long int)sqrt(a*b);}
    else{cout<<0;}
    return 0;
}