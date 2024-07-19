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

// // Function to convert an integer to a binary string
// string toBinary(int num) {
//     if (num == 0) return "0";  // Special case for 0

//     string binary = "";
//     while (num > 0) {
//         binary = to_string(num % 2) + binary;  // Prepend remainder to the binary string
//         num /= 2;  // Divide the number by 2
//     }
//     return binary;
// }

// void solve() {
//     ll n, k;
//     cin >> n >> k;
//     string binary = toBinary(k);

   
//     vector<int> binaryArray;
//     for (char bit : binary) {
//         binaryArray.push_back(bit - '0'); 
//     }

//     // Convert binaryArray to a decimal number using n as the base
//     ll ans = 0;
//     ll size = binaryArray.size();
//     for (int i = 0; i < size; i++) {
//         ans += pow(n, size - 1 - i) * binaryArray[i]; // Correct power calculation
//     }

//     cout << ans%MOD << endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ll tt;
//     cin >> tt;
//     while (tt--) {
//         solve();
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long int
#define MOD 1000000007
// power funtion is used because while coming to big numbers pow gives wrong ans
ull power(ull base, ull exponent, ull mod) {
    ull result = 1;
    while (exponent > 0) {
        if (exponent & 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exponent >>= 1;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ull n, k;
        cin >> n >> k;
        
        vector<int> v;
        ull original_k = k;
        while (k > 0) {
            v.push_back(k & 1);
            k >>= 1;
        }

        ull sum = 0;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == 1) {
                sum = (sum + power(n, i, MOD)) % MOD;
            }
        }

        cout << sum << endl;
    }

    return 0;
}