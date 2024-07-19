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
   ll n; cin>>n;
   vll a(n),b(n);
   for(int i=0;i<n;i++){
        cin>>a[i];
   }
   for(int i=0;i<n;i++){
    cin>>b[i];
   }
   ll m; cin>>m;
   vll c(m);
   for(int i=0;i<m;i++){
    cin>>c[i];
   }
   map<int,int>cnt1,cnt2;
   for(int i=0;i<n;i++){
    if(a[i]!=b[i]) cnt1[b[i]]++;
   }
   int f=1;
   for(const auto&pair : cnt1){
  if(cnt2[pair.first]<pair.second) f=0;
}
   if(count(b.begin(),b.end(),c[m-1])==0) f=0;
   if(f=0) cout<<"no"<<endl;
   else{
    cout<<"yes"<<endl;
   }



}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll tt = 1;
cin >> tt;
while (tt--)
{
solve();
}
return 0;
}