// #include <bits/stdc++.h>
// using namespace std;
// #define pb emplace_back
// #define vi vector<int>
// #define ll long long
// #define vll vector<ll>
// #define ull unsigned long long
// #define ui unsigned int
// #define vp(a, b) vector<pair<(a), (b)>>
// #define mems(a, x) memset((a), (x), sizeof(a))
// #define fo(n, i, start) for (ll i = start; i <= n; i++)
// #define f(n) for (ll i = 0; i < n; i++)
// #define all(a) a.begin(), a.end()
// #define allr(a) a.rbegin(), a.rend()
// const ll MOD = 1e9 + 7;
// void solve()
// {
// int n,q;
// cin>>n>>q;

// vi a(n),p(n),newp(q);
// vi b(q);
// f(n){
//     cin>>a[i];
//     p[i]=i+1;
// }
// f(q){
//     cin>>b[i];
// }
// for(int j=0;j<q;j++){
//     f(n){
//         if(a[i]==b[j]){
//           newp[j]=p[i];
//           break;
//         }
//         else{
//            p[i]=p[i]+1;
//         }
    

//     }
// }

// for(int i=0;i<q;i++){
//     cout<<newp[i]<<" ";
    
// }
// cout<<endl;



// }
// int main()
// {
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);
// ll tt ;
// cin >> tt;
// while (tt--)
// {
// solve();
// }
// return 0;
// }
#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, q;
  cin>>n>>q;
  vector<int> a(n);
  for (int& x : a) cin>>x;
  while (q--) {
    int x;
    cin>>x;
    int p = find(a.begin(), a.end(), x) - a.begin();
    cout<<p+1<<" ";
    rotate(a.begin(), a.begin() + p, a.begin() + p + 1);
  }
}