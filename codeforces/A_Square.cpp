/**
 *    author: A K M S Limon
 *    created: 31-January-2024  23:51:49
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t; 
    while (t--) {
        int a, b, temp;
        cin >> a >> b;
        temp = a; 
        for (int i = 0; i < 3; i++) {
            cin >> a; 
            int x; cin >> x;
            if (a == temp) {
                cout << abs(x - b) * abs(x - b) << '\n';
            }
        }
    }
    return 0;
}