#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    cout<<abs(((x1-x3)*(y2-y3)-(x2-x3)*(y1-y3))/2);
    return 0;
}
