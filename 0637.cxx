#include<iostream>

using namespace std;
int k,n,l=0;
int arr[10001];
int main()
{
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   cin>>k;
  for (int i=0;i<k;i++){
      for(int j=0;j<n;j++){
          if (arr[j]!=0){l++;arr[j]--;}
      }
  }
   cout<<l;
    return 0;
}