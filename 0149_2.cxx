#include <iostream>

using namespace std;

int n;
int arr[1000];
int main(){
freopen ("input.txt","r",stdin);
freopen ("output.txt","w",stdout);
cin>>n;

for (int i=n-1;i>=0;i--){
cin>>arr[i];
}

for (int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
return 0;
}