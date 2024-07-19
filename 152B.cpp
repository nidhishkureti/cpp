#include <bits/stdc++.h>
using namespace std;

#define pb emplace_back
#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define ull unsigned long long
#define ui unsigned int
#define vp(a, b) vector<pair<a, b>>
#define mems(a, x) memset((a), (x), sizeof(a))
#define fo(n, i, start) for (ll i = start; i < n; i++)
#define f(n) for (ll i = 0; i < n; i++)
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()

const ll MOD = 1e9 + 7;

void solve()
{
    // int n, k;
    // cin >> n >> k;
    // vll a(n);
    // vector<pair<int, int>> b(n);  // Initialize vector `b` with size `n`

    // f(n) {
    //     cin >> a[i];
    //     if(a[i]%k!=0){
    //     b[i] = {a[i] % k, i};
    //     }
    //     else b[i]={k,i};
    // }

    // // Sort the vector b based on the first element in decreasing order
    // sort(allr(b), [](const pair<int, int>& p1, const pair<int, int>& p2) {
    //     return p1.first > p2.first;
    // });

    // // Print the indices of the original array in the order of decreasing value
    // for (const auto& p : b) {
    //     cout << p.second+1 << " ";
    // }

    // cout << endl;
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &x : a) {
      cin >> x;
      x %= k;
      if (!x) x = k;
    }
    vector<int> ord(n);
    iota(ord.begin(), ord.end(), 0);
    stable_sort(ord.begin(), ord.end(), [&](int i, int j) {
      return a[i] > a[j];
    });
    for (auto &x : ord) cout << x + 1 << ' ';
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }

    return 0;
}
