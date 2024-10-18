#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define ull unsigned long long
#define pll pair<ll, ll>
#define f(n) for (ll i = 0; i < n; i++)
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
const ll MOD = 1e9 + 7;
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
void solve()
{
    ll n;
    cin >> n;
    vll v(n),a(n);
    f(n) cin >> v[i];
    a[0]=v[0];
    for(ll i=1;i<n;i++){
        if(v[i]>a[i-1] and v[i]!=0)  a[i]=v[i]+a[i-1];
        else if(v[i]==0) a[i]=a[i-1];
        else{
            cout<<-1<<endl;
            return;
        }
    }
    for(auto &e:a){
        cout<<e<<" ";
    }
    cout<<endl;

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll tt ;
cin >> tt;
while (tt--)
{
solve();
}
return 0;
}