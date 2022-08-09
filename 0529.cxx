#include <iostream>
#include <cmath>
using namespace std;
int main(){
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout);
double x1,x2,y1,y2;

cin>>x1>>y1>>x2>>y2;

cout.precision(5);
cout<<fixed<<sqrt(pow(x2-x1,2)+pow(y2-y1,2));

return 0;

}