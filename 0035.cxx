#include <iostream>
using namespace std;
int n, a, b;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n;
    for (int i=1;i <= n;i++) {
        cin >> a >> b;
        cout << 19 * b + (a + 239) * (a + 366) / 2;
    }
}