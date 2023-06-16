/**
 *    author: A K M S Limon
 *    created: 08-January-2023  20:52:38
**/
#include <bits/stdc++.h>
#define nl "\n"
#define nll cout<<"\n"
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define tc int t; cin>>t; while(t--)
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define rvs(v) reverse(v.begin(), v.end())
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pii pair<int,int>
#define dbg(x) cerr<<x<<"\n"
#define mp(x,y) make_pair(x,y)
#define yes cout<<"YES"<<"\n"
#define no cout<<"NO"<<"\n"
#define fl(i,a,b) for(int i = a; i <= b; i++)
#define fll(i,a,b) for(int i = a; i >= b; i--)
#define ff first
#define ss second
#define flit(v) for(auto it=v.begin(); it!=v.end(); it++)
#define cinx(array) { for (auto &x: array) cin >> x; }
#define coutx(array) { for (auto x : array) cout << x << " "; cout << endl; }
#define sumx(array,sum) { for (auto x: array) sum+=x;  }
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        tc{
            int n; cin>>n;
            int a[n]; cinx(a);
            bool p=1;
            sort(a, a+n, greater<int>());
            for (int i = 0; i < n-1; i++) {
                if(a[i]!=a[i+1]) p=0;
            }
            if(p) no;
            else {
                yes;
                cout<<a[0]<<" "<<a[n-1]<<" ";
                for (int i = 1; i < n-1; i++){
                    cout<<a[i]<<' ';
                }
                nll;
            }
        }
    return 0;
}