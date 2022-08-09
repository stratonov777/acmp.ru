#include <iostream>
using namespace std;
int k,n;
int main(){
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
cin>>k>>n;
if (n<k){cout<<"1 "<<n;}
else{if (n%k==0){cout<<n/k<<" "<<k;}
    else{cout<<(n/k)+1<<" "<<n-n/k*k;}
}
return 0;
}