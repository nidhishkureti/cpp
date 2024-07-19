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
//     ll n;
//     char s1;
//     cin >> n >> s1;
//     string s;
//     cin>>s;
//     ll ans,maxi=0;
    
//     string sn=s+s;
//     if(s1=='g') cout<<0<<endl;
//     for(int i=0;i<sn.length();i++){
//       if(sn[i]==s1 && s1!='g'){
//         for(int j=i+1;j<2*n;j++){
//             if(sn[j]=='g'){
//                 ans=j-i;
//                break;
//             }
//         }
//         maxi=max(ans,maxi);
//       }
//     }
// if(s1!='g')cout<<maxi<<endl;

int n;
char letter;
string s;
cin>>n>>letter>>s;
int l=-1,r=-1;
int maxi=0;
s=s+s;
// cout<<s<<endl;
if(letter=='g'){
    cout<<0<<endl;
    return;
}
for(int i=0;i<2*n;i++){
    if(l==-1){
        if(s[i]==letter) l=i;
    }
    else{
        if(s[i]=='g'){ r=i;
        maxi=max(maxi,r-l);
        l=-1;
        r=-1;
        }
    }
}
cout<<maxi<<endl;
    

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