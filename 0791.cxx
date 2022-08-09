#include<iostream>

using namespace std;
int i,a=0,b=0,c=0,d=0;
int main()
{
    cin>>i;
    if(i-8>0){a=i-8;};
    if(i+8<=64){d=i+8;}
    if((i!=1)&&(i!=9)&&(i!=17)&&(i!=25)&&(i!=33)&&(i!=41)&&(i!=49)&&(i!=57)){b=i-1;}
    if((i!=8)&&(i!=16)&&(i!=24)&&(i!=32)&&(i!=40)&&(i!=48)&&(i!=56)&&(i!=64)){c=i+1;}
    if(a!=0){cout<<a<<" ";}
    if(b!=0){cout<<b<<" ";}
    if(c!=0){cout<<c<<" ";}
    if(d!=0){cout<<d;}
    return 0;
}