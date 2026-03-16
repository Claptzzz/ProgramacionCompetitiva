//https://acm.timus.ru/problem.aspx?space=1&num=1409

#include <bits/stdc++.h>
using namespace std;

int main() {

    int h,l;cin>>h>>l;
    int total = h+l-1;

    cout << total-h << " " << total-l << endl;

    return 0;
}