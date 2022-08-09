#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int k5,k3,k1,i,n,chet;
int arr[10];
int main(){
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
cin>>n;
for (int i=0;i<n;i++){
cin>>arr[i];
}
i=0;chet=0;k5=0;
while (k5<=300 && i<n){
chet=chet+arr[i];
k5=k5+chet;
i++;
}

i=n;chet=0;k3=0;
while (k3<=300 && i>=0){
chet=chet+arr[i];
k3=k3+chet;
i--;
}

vector<int> sort_int_vector(arr,arr+n);
sort (sort_int_vector.begin(), sort_int_vector.end());
i=0;chet=0;k1=0;
while (k1<=300 && i<n){
chet=chet+sort_int_vector[i];
k1=k1+chet;
i++;
}

int min;
if (k1<k3){
min=k1;
} else { min=k3;}
if (k5<min) {min=k5;}
if (min==k1){cout<<1;}
else if(min==k3){cout<<3;}
else {cout<<5;}
return 0;
}