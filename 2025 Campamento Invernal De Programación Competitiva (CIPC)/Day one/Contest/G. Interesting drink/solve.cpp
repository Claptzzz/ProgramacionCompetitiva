//https://codeforces.com/group/TY5qlgX1RN/contest/624447/problem/G

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int shops;
    cin >> shops;
    vector <int> prices(shops);
    for (int i = 0; i < shops; i++) {
        int p = 0;
        cin >> p;
        prices[i] = p;
    }
    int days;
    cin >> days;
    vector <int> money(days);
    for (int i = 0; i < days; i++) {
        int m = 0;
        cin >> m;
        money[i] = m;
    }
 
    sort(prices.begin(), prices.end());
    
 
    for (int i = 0; i < days; i++) {
        cout <<  distance(prices.begin(), upper_bound(prices.begin(), prices.end(), money[i])) << endl;
    }
    return 0;
}