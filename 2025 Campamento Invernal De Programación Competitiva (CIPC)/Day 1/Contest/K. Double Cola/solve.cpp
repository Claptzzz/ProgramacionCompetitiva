//https://codeforces.com/group/TY5qlgX1RN/contest/624447/problem/K

#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main()
{
    vector<string> names = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    long long n =0;
    cin >> n;
    n--;
    long long m = floor((log(n/5 +1))/log(2))-1; 
 
    long long t = n - 5*(pow(2,m+1)-1);
 
    int aux = floor((t)/pow(2,m+1));
 
    cout << names[aux];
 
    return 0;  
}