#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;

void solve()
{   
   ll n;
    cin >> n;
    while (true) {
    cout << n << " ";
    if (n == 1) 
        break;
    if (n%2 == 0)
        n /= 2;
    else 
    n = n*3+1;
}
cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    
   solve();
    return 0;
}