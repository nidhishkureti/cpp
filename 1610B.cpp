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
// ll n;
// cin>>n;
// vll a(n);
// f(n)
// {
//     cin>>a[i];
// }
// a


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
# include <bits/stdc++.h>
 
using namespace std;
 
typedef long long                                        ll;
typedef long double                                      ld;
typedef pair <int, int>                                  pii;
typedef pair <pii, int>                                  ppi;
typedef pair <int, pii>                                  pip;
typedef pair <pii, pii>                                  ppp;
typedef pair <ll, ll>                                    pll;
 
# define A                                               first
# define B                                               second
# define endl                                            '\n'
# define sep                                             ' '
# define all(x)                                          x.begin(), x.end()
# define kill(x)                                         return cout << x << endl, 0
# define SZ(x)                                           int(x.size())
# define lc                                              id << 1
# define rc                                              id << 1 | 1
# define fast_io                                         ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
 
ll power(ll a, ll b, ll md) {return (!b ? 1 : (b & 1 ? a * power(a * a % md, b / 2, md) % md : power(a * a % md, b / 2, md) % md));}
 
const int xn = 2e5 + 10;
const int xm = - 20 + 10;
const int sq = 320;
const int inf = 1e9 + 10;
const ll INF = 1e18 + 10;
const ld eps = 1e-15;
const int mod = 998244353;
const int base = 257;
 
int qq, n, m, a[xn], b[xn];
bool ans;
 
void check(int x){
	m = 0;
	for (int i = 1; i <= n; ++ i)
		if (a[i] != x)
			b[++ m] = a[i];
	for (int i = 1; i <= m; ++ i)
		if (b[i] != b[m + 1 - i])
			return;
	ans = true;
}
 
int main(){
	fast_io;
 
	cin >> qq;
	while (qq --){
		cin >> n, ans = true;
		for (int i = 1; i <= n; ++ i)
			cin >> a[i];
		for (int i = 1; i <= n/2; ++ i){
			if (a[i] != a[n + 1 - i]){
				ans = false;
				check(a[i]);
				check(a[n + 1 - i]);
				break;
				
			}
		}
		if (ans)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
 
	return 0;
}