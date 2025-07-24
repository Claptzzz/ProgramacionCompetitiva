//https://codeforces.com/group/TY5qlgX1RN/contest/624645/problem/I

#include <bits/stdc++.h>
using namespace std;

void rellenar(vector<long long>& problems) {
    for(int i=0; i<problems.size(); i++) {
        cin>>problems[i];
    }
}

void bubble(vector<long long> v) {

    int n = v.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
        }
    }
}

int main() {
    
    long long n,l,r,x;
    cin>>n>>l>>r>>x;

    vector<long long> problems(n);

    rellenar(problems);

    bubble(problems);

    

    return 0;
}