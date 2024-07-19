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
// // void solve()
// // {
// // ll n,m;
// // cin>>n>>m;
// // ll count=0,rowc=0,maxi=0;
// // char a[n][m];
// // ll k,z;
// // for(int i=1;i<=n;i++){
// //     for(int j=1;j<=m;j++ ){
// //         cin>>a[i][j];
// //         if(a[i][j]=='#'){
// //          if(count==0)
// //          {
// //              k=j;
// //              z=i;
// //             count++;
// //             rowc++;
// //          }
// //          else{
// //           rowc++;
// //         count++;
// //          }
// //         }

// //     }
// //     maxi=max(rowc,maxi);
// //     rowc=0;

// // }

// // if(count==1) cout<<z<<" "<<k<<endl;
// // else{
// //     cout<<z+(maxi/2)<<" "<<k<<endl;
// // }






// // }
// // int main()
// // {
// // ios_base::sync_with_stdio(false);
// // cin.tie(NULL);
// // cout.tie(NULL);
// // ll tt ;
// // cin >> tt;
// // while (tt--)
// // {
// // solve();
// // }
// // return 0;
// // }



// void solve() {
//     ll n, m;
//     cin >> n >> m;

//     ll totalCount = 0;
//     ll rowSum = 0, colSum = 0;
//     ll firstRow = -1, firstCol = -1;

//     for (ll i = 0; i < n; ++i) {
//         string row;
//         cin >> row;
//         for (ll j = 0; j < m; ++j) {
//             if (row[j] == '#') {
//                 if (totalCount == 0) {
//                     firstRow = i;
//                     firstCol = j;
//                 }
//                 rowSum += i;
//                 colSum += j;
//                 ++totalCount;
//             }
//         }
//     }

//     if (totalCount == 1) {
//         // Output the only '#' position (1-based indexing)
//         cout << firstRow + 1 << " " << firstCol + 1 << endl;
//     } else {
//         // Calculate the center position (1-based indexing)
//         ll centerRow = rowSum / totalCount;
//         ll centerCol = colSum / totalCount;
//         cout << centerRow + 1 << " " << centerCol + 1 << endl;
//     }
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     ll tt;
//     cin >> tt;
//     while (tt--) {
//         solve();
//     }

//     return 0;
// }
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
    ll n, m;
    cin >> n >> m;
    ll count = 0, rowc = 0, maxi = 0;
    char a[n][m];
    ll k, z;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == '#') {
                if (count == 0) {
                    k = j;
                    z = i;
                    count++;
                    rowc++;
                } else {
                    rowc++;
                    count++;
                }
            }
        }
        maxi = max(rowc, maxi);
        rowc = 0;
    }

    if (count == 1) cout << z + 1 << " " << k + 1 << endl;
    else {
        cout << z + (maxi / 2) + 1 << " " << k + 1 << endl;
    }
}

int main()
{
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