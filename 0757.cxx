#include <iostream>
#include <algorithm>
using namespace std;
long long int a,b,c;
int main() {
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
    cin>>a>>b>>c;
    cout << min(a/2,min(b/6,c));
    return 0;
}