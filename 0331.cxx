#include <iostream>
#include <string>
using namespace std;
int a_i,b_i,h,m;
string a_s,b_s,c_s;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>c_s;
a_s.append(c_s,0,2);
b_s.append(c_s,3,2);
a_i=stoi(a_s);
b_i=stoi(b_s);
cin>>h>>m;
b_i=b_i+m;
if (b_i>=60){
a_i=a_i+b_i/60;
b_i=b_i%60;
}
a_i=a_i+h;
if(a_i>=24){a_i=a_i%24;}
if(a_i<10){cout<<0;}
cout<<a_i<<":";
if(b_i<10){cout<<0;}
cout<<b_i;
return 0;
}


