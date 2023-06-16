/**
 *    author: A K M S Limon
 *    created: 27-February-2023  21:25:11
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

bool isequal(double a[], int n){
    bool b = true;
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]!=a[i+1]) b=false;
    }
    return b;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        tc{
            int n, z=0, o=0; cin>>n;
            double a[n]; 
            for (int i = 0; i < n; i++)
            {
                cin>>a[i];
                if(a[i]==1) o=1;
                else z=1;
            }
            vector<int>v, v1;
            if(isequal(a, n)) cout<<0<<endl;
            else if(z && o) cout<<-1<<endl;
            else {
                while(!isequal(a, n)){
                    for (int i = 0; i < n-1; i++)
                    {
                        while(a[i]!=a[i+1]){
                            if(a[i]>a[i+1]){
                                v.push_back(i+1);
                                v1.push_back(i+2);
                                a[i]=ceil(a[i]/a[i+1]);
                            }
                            else{
                                v.push_back(i+2);
                                v1.push_back(i+1);
                                a[i+1]=ceil(a[i+1]/a[i]);
                            }
                        } 
                    }
                }
                cout<<v.size()<<endl;
                for (int i = 0; i < v.size(); i++)
                {
                    cout<<v[i]<<' '<<v1[i]<<endl;
                }
            }
        }
    return 0;
}