#include<iostream>

using namespace std;
int chess[8][8]={
    {0,1,0,1,0,1,0,1},
    {1,0,1,0,1,0,1,0},
    {0,1,0,1,0,1,0,1},
    {1,0,1,0,1,0,1,0},
    {0,1,0,1,0,1,0,1},
    {1,0,1,0,1,0,1,0},
    {0,1,0,1,0,1,0,1},
    {1,0,1,0,1,0,1,0}
};
int x1,x2;
int z1,z2;
int main()
{
    cin>>x1>>z1>>x2>>z2;
    x1--;z1--;x2--;z2--;
    if (chess[x1][z1]==chess[x2][z2]){
        cout<<"YES";}
    else {cout<<"NO";}
    return 0;
}