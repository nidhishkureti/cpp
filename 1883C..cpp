#include <bits/stdc++.h>
using namespace std;
#define pb emplace_back
#define vi vector<int>
#define ll long long
#define vll vector<ll>
#define ull unsigned long long
#define ui unsigned int
#define mems(a, x) memset((a), (x), sizeof(a))
#define fo(n, i, start) for (ll i = start; i <= n; i++)
#define f(n) for (ll i = 0; i < n; i++)
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
const ll MOD = 1e9 + 7;

void solve() {
    ll n, k;
    cin >> n >> k;
    vll a(n);
    ll count2 = 0, count5 = 0, count3 = 0,count4=0;
    vi a5(n), a2(n), a3(n),a4(n);

    f(n) {
        cin >> a[i];
        if (a[i] % 2 == 0) count2++;
        if (a[i] % 5 == 0) count5++;
        if (a[i] % 3 == 0) count3++;
        if(a[i]%4==0) count4++;
        a5[i] = a[i] % 5;
        a2[i] = a[i] % 2;
        a3[i] = a[i] % 3;
        a4[i] = a[i]%4;

    }

    sort(all(a2));
    sort(all(a3));
    sort(all(a5));
    sort(all(a4));

    if (k == 2) {
        cout << a2[0] << endl;
    } else if (k == 5) {
        if(count5>0) cout<<0<<endl;
       else cout << 5 - a5[n - 1] << endl;
    } else if (k == 3) {
        if(count3>0) cout<<0<<endl;
       else cout << 3 - a3[n - 1] << endl;
    } else {
        if(count4>0) cout<<0<<endl;
       else if (count2 >= 2) cout << 0 << endl;
        else if (count2 == 1) cout << 1 << endl;
        else if ((4-a4[n-1])<2)cout << 1 << endl;
        else cout<<2<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}