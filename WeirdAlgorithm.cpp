//https://cses.fi/problemset/task/1068
#include <iostream>
using namespace std;
typedef long long ll;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin >> n;
    cout << n << " ";
    while (n!=1){
        if (n%2==0)n/=2;
        else n=3*n+1;
        cout << n << " ";
    }
}
