#include <iostream>
using namespace std;
int a;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","r",stdin);
cin>>a;
switch (a) {
case 12:
cout<<"Winter";
break;
case 1:
cout<<"Winter";
break;
case 2:
cout<<"Winter";
break;
case 3:
cout<<"Spring";
break;
case 4:
cout<<"Spring";
break;
case 5:
cout<<"Spring";
break;
case 6:
cout<<"Summer";
break;
case 7:
cout<<"Summer";
break;
case 8:
cout<<"Summer";
break;
case 9:
cout<<"Autumn";
break;
case 10:
cout<<"Autumn";
break;
case 11:
cout<<"Autumn";
break;
default:
cout<<"Error";
}
return 0;
}