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
        ll d, n; cin >> d >> n;
        ll a[n];
        ll ans = 0;
        map<ll, ll> mp;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (i != 0)
            a[i] += a[i - 1];
            a[i] %= d;
            mp[a[i]]++;
        }
        for (auto it : mp) {
            if (it.first == 0) ans += it.second; 
            ans += (it.second * (it.second - 1) / 2);
        }
        cout << ans << '\n';
    }
    return 0;
}