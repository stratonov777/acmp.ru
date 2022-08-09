#include <iostream>
#include <algorithm>
using namespace std;
int w,h,r;
int main(){
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout);
cin>>w>>h>>r;
if (w>0 && h>0 && r>0)  
{if (min(w,h)>=2*r){cout<<"YES";}
else {cout<<"NO";}
} else  {cout<<"NO";}
 return 0;
}