/**
 *    author: A K M S Limon
 *    created: 25-May-2023  21:17:47
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

int isSubstring(string s, string sub) {
    if (s.find(sub) != string::npos)
       return s.find(sub);
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    tc{
        string s; cin>>s;
        int n = s.size();
        for (int i = 1; i < n-1; i++) {
            if(s[i]=='?') {
                if(s[i-1]=='1' || s[i+1]=='1') s[i]='1';
                else s[i]='0';
            }
        }
        if(s[0]=='?'){
            if(s[1]=='1') s[0]='1';
            else s[0]='0';
        }
        if(s[n-1]=='?'){
            if(s[n-2]=='1') s[n-1]='1';
            else s[n-1]='0';
        }
        cout<<s<<endl;
    }
    return 0;
}