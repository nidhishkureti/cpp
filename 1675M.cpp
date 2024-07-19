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

if(n%2==0) cout<<n/2<<" "<<n/2<<endl;
else{
 ll largest_divisor = 1;
    for (ll i = 1; i * i <= n; i++) {
       if (n % i == 0) {
                if (i < n && i > largest_divisor) {
                    largest_divisor = i;
                }
                if (n / i < n && n / i > largest_divisor) {
                    largest_divisor = n / i;
                }
            }
        }
        cout << largest_divisor << " " << n - largest_divisor << endl;
    
}


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