#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
#define tc int t; cin>>t; while(t--)
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define cinx(array) { for (auto &x: array) cin >> x; }
#define coutx(array) { for (auto x : array) cout << x << " "; cout << endl; }
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc{
        int n, m; cin >> n >> m;
        string a, b; cin >> a >> b;
        int ans = 0;
        for (int i = 0, j = 0; i < a.size(); i++) {
            while (a[i] != b[j] && j < b.size()) {
                j++;
            }
            if (a[i] == b[j] && j < b.size()) {
                ans++;
                j++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}