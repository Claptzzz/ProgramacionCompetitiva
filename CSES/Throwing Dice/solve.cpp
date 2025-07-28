//https://cses.fi/problemset/task/1096

#include <bits/stdc++.h>
using namespace std;
typedef long long  ll;

ll solve(ll N)
{
    ll mod = 1e9 + 7;

    vector<ll> dp(N + 1, 0);
    
    dp[0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= 6 && j <= i; j++) {
            dp[i] = (dp[i] + (dp[i - j])) % mod;
        }
    }
    return dp[N];
}
int main()
{
    ll n; cin>>n;

    cout << solve(n);
}