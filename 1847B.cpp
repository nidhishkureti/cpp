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
// ll n;
// cin>>n;
// ll a[n];
// int andd;
// f(n) {
//     cin>>a[i];
//     if(i==0) andd=a[i];
//     else andd&=a[i];
// }
// int str=a[0];
// if(n==1 && a[0]==0) cout<<1<<endl;
// else if(andd>0) cout<<"1"<<endl;
// else{
//     int cnt=0;
//     for(int i=1;i<n;i++){
//         str&=a[i];
//         if(str==0){
//             cnt++;
//             if(i<n-1){
//             str=a[i+1];
//             }
//         }
//     }
//     cout<<cnt<<endl;
// }
int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)cin >> arr[i];
	int cur = arr[0];
	int part = 1;
	for(int i = 0; i < n; i++){
		cur &= arr[i];
		if(cur == 0){
			if(i == n-1)break;
			part++;
			cur = arr[i + 1];
		}
	}
    if(cur!=0)part--;
    part=max(part,1);
cout << part << '\n';

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