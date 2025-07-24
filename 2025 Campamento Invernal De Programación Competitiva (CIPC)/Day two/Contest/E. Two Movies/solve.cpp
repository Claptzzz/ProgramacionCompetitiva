//https://codeforces.com/group/TY5qlgX1RN/contest/624645/problem/E
 
#include <bits/stdc++.h>
using namespace std;  
 
int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        vector<vector<int>> reviews(N);
        for (int i = 0; i < N; i++) {
            int r;
            cin >> r;
            vector <int> aux(2);
            aux[0] = r;
            reviews[i] = aux;
        }
        for (int i = 0; i < N; i++) {
            int r;
            cin >> r;
            reviews[i][1] = r;
        }
        
        int rating1 = 0, rating2 = 0, minus = 0, plus = 0;
 
        for (int idx = 0; idx < N; idx++) {
            int type = reviews[idx][0] + reviews[idx][1];
 
            if (reviews[idx][0] == 0 and reviews[idx][1] == 0); //handle 0 0
            else if (type == 2) {plus++;} //handle 1 1
            else if (type == -2) {minus++;} //handle -1 -1
            else if (reviews[idx][0] > reviews[idx][1]) {rating1 += reviews[idx][0];} //handle 1 0, 1 -1, 0 -1
            else {rating2 += reviews[idx][1];} //handle 0 1, -1 1, -1 0
 
            // cout << "test: " << rating1 << " " << rating2 << " " << type << " " << plus << " " << minus << endl;
        }
        
        if (abs(rating1-rating2) > plus+minus) {
            cout << (min({rating1, rating2})+plus) << endl;
        } else {
            cout << floor((rating1+rating2+plus-minus)/2.0) << endl;
        }
    }
}