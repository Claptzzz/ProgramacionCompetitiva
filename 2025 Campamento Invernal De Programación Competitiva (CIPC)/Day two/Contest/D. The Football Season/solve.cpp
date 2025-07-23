//https://codeforces.com/group/TY5qlgX1RN/contest/624645/problem/D
 
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    long long n,p,w,d;
    long long x,y,z;
 
    cin >>n>>p>>w>>d;
 
    long long maxScore = n*w;
 
    if (maxScore < p) {
        cout << "-1";
    } else if (p==0) {
        cout << "0" << " "<< "0"<< " " << n;
    } else if (n == 0) {
        cout <<"0"<<" "<<"0"<<" "<<"0";
    } else if (p%w==0 && p/w <= n){
        x = p/w;
        y = 0;
        z = -x-y+n;
        cout <<x<<" "<<y<<" "<<z;
    } else if (p%d==0 && p/d <= n) {
        x=0;
        y=p/d;
        z= -x-y+n;
        cout <<x<<" "<<y<<" "<<z;   
    } else {
 
        long long aux=0;
        bool auxb = false;
        long long aux2 = 0;
        long long p2 = p;
 
        for (int i=p; p>0; p-=d) {
            if (p%w==0) {
                x=p/w;
                y=aux;
                z = -x-y+n;
                cout <<x<<" "<<y<<" "<<z;
                auxb=true;
                break;
            }
            aux++;
        }
        if(!auxb) {
            cout<<"-1";
        }
        
    }
 
    return 0;
}