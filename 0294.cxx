#include<iostream>
#include<cmath>
using namespace std;
int k1,l1,m1,k2,l2,m2;
int main()
{
    cin>>k1>>l1>>m1>>k2>>l2>>m2;
    if(k1*(100-l1)/100-k2*(100-l2)/100>0){
    cout<<(k1*l1/100*m1+k2*l2/100*m2)+abs(k1*(100-l1)/100-k2*(100-l2)/100)*m1;}
    else{ cout<<(k1*l1/100*m1+k2*l2/100*m2)+abs(k1*(100-l1)/100-k2*(100-l2)/100)*m2;}
    return 0;
}