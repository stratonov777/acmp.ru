#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main (){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
int n,a;
vector <int> vec;
cin>>n;
for (int i=0;i<n;i++){
cin>>a;
vec.push_back(a);
}
sort(vec.begin(),vec.end());
cout<<vec[0]<<" "<<vec[n-1];
return 0;
}