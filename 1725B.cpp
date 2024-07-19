#include <bits/stdc++.h>
using namespace std;
#define pb emplace_back
#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define ull unsigned long long
#define ui unsigned int
#define vp(a, b) vector<pair<(a), (b)>>
#define mems(a, x) memset((a), (x), sizeof(a))
#define fo(n, i, start) for (ll i = start; i <= n; i++)
#define f(n) for (ll i = 0; i < n; i++)
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
const ll MOD = 1e9 + 7;
void solve()
{
ll n,d;
cin>>n>>d;
int a[n];
f(n)  cin>>a[i];
int pla=n;
int count=0;
sort(a,a+n, greater<int>());
for(int i=0;i<n;i++){
    if(pla<=0) break;
    else{
        pla=pla-ceil(d+1/a[i]);
        
        count++;
    }
}
cout<<count<<endl;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
// ll tt ;
// cin >> tt;
// while (tt--)
// {
solve();
// }
return 0;
}