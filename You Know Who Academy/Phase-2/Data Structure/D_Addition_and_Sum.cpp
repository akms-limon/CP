/**
 *    author: A K M S Limon
 *    created: 28-April-2024  02:02:41
**/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int const N = 1e5;
ll a[N];
ll t[4 * N];
ll lazy[4 * N];

void build(ll n, ll b, ll e){
    lazy[n] = 0;
    if (b == e){
        t[n] = a[b];
        return;
    }
    ll l = n * 2, r = n * 2 + 1;
    ll mid = (b + e) / 2;
    build(l, b, mid), build(r, mid + 1, e);
    t[n] = t[l] + t[r];
}
 
void push(ll n, ll b, ll e){
    if(lazy[n] == 0) return;
    t[n] += lazy[n] * (e - b + 1);
    if(b != e){
        ll l = n * 2, r = n * 2 + 1;
        lazy[l] += lazy[n];
        lazy[r] += lazy[n];
    }
    lazy[n] = 0;
}

void upd(ll n, ll b, ll e, ll i, ll j, ll x){
    push(n, b, e);
    if(j < b || e < i) return;
    if(i <= b && e <= j){
        lazy[n] = x;
        push(n, b, e);
        return;
    }
    ll l = n * 2, r = n * 2 + 1;
    ll mid = (b + e) / 2; 
    upd(l, b, mid, i, j, x), upd(r, mid + 1, e, i, j, x);
    t[n] = t[l] + t[r];
}

ll query(ll n, ll b, ll e, ll i, ll j){
    push(n, b, e);
    if(i > e || b > j) return 0;
    if(i <= b && e <= j) return t[n];
    ll l = n * 2, r = n * 2 + 1;
    ll mid = (b + e) / 2; 
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, m; cin >> n >> m;
    build(1, 1, n);
    while(m--) {
        ll ck; cin >> ck;
        if (ck == 1) {
            ll l, r, v; cin >> l >> r >> v;
            l++;
            upd(1, 1, n, l, r, v);
        }
        else {
            ll l, r; cin >> l >> r;
            l++;
            cout << query(1, 1, n, l, r) << '\n';
        }
    }
    return 0;
}