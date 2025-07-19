//https://codeforces.com/gym/105321/problem/J

#include <iostream>
#include <vector>
using namespace std;

//incompleto

int main() {
    int n, x, temp;
    cin >> n >> x;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n-1; i++) {
            if (arr[i] + arr[i+1] == x) {
                temp = arr[i];
                arr[i] = arr[n-1];
                arr[n-1] = temp;

                temp = arr[n-1];
                arr[n-1] = arr[n-2];
                arr[n-2] = temp;
            }
        
    }
    for (int i = 0; i < n-1; i++) {
            if (arr[i] + arr[i+1] == x) {
                cout << "*" << endl;
                return 0;
            }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}