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
ll n;
cin>>n;
ll a[n],b[n];
f(n) cin>>a[i];
f(n) cin>>b[i];
unordered_map<int, int> freq;

for (int i = 0; i < n; i++) {
        freq[a[i]]++; 
        freq[b[i]]++;
    }
auto maxElement = std::max_element(
        freq.begin(), freq.end(),
        [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
            return a.second < b.second;
        }
    );
    cout << maxElement->second << endl;



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