#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;
bool wane(int a, int b) {return (a>b);}
int n;
int arr[1000];
int main(){
// freopen ("input.txt","r",stdin);
// freopen ("output.txt","w",stdout);
// cin>>n;
n=9;
srand(time(NULL));
for (int i=0;i<n;i++){
arr[i]=rand() % 2001 -1000;
}
vector <int> vec(arr,arr+n);
sort(vec.begin(),vec.end(),wane);
for (int i=0;i<n;i++){
cout<<vec[i]<<" ";
}
return 0;
}