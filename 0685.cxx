#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int arr1[3];
int arr2[3];
int c=0;
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
for (int i=0;i<3;i++){
cin>>arr1[i];
}
for (int i=0;i<3;i++){
cin>>arr2[i];
}
vector <int> vec1(arr1,arr1+3);
vector <int> vec2(arr2,arr2+3);
sort(vec1.begin(),vec1.end());
sort(vec2.begin(),vec2.end());
for (int i=0;i<3;i++){
arr1[i]=vec1[i];
}
for (int i=0;i<3;i++){
arr2[i]=vec2[i];
}
for(int i=0;i<3;i++){
c=c+arr1[i]*arr2[i];
}
cout<<c;
return 0;
}