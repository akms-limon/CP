/**
 *    author: A K M S Limon
 *    created: 25-February-2023  15:59:57
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
#define PI 3.14159
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
            int n, a; cin>>n;
            vector<int>v;
            v.push_back(0);
            for(int i = 0; i<n; i++){
                cin>>a;
                v.push_back(a);
            }
            v.push_back(1440);
            int cnt = 0;
            if(abs(v[1])>=120) cnt+=v[0]/120;
            for (int i = 0; i < v.size()-1; i++)
            {
                if(v[i+1]-v[i]>=240) cnt+=2;
                else if(v[i+1]-v[i]>=120) cnt++;
                if(cnt>=2) break;
            }
            if(cnt>=2) yes;
            else no;
            
        }
    return 0;
}