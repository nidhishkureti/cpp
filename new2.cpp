// #include <bits/stdc++.h>

// using namespace std;

// const string subseqs[] = { "00", "25", "50", "75" };

// const int INF = 100;

// int solve(string& s, string& t)
// {
// 	int sptr = s.length() - 1;

// 	int ans = 0;
// 	while (sptr >= 0 && s[sptr] != t[1])
// 	{
// 		sptr--;
// 		ans++;
// 	}

// 	if (sptr < 0) return INF;

// 	sptr--;

// 	while (sptr >= 0 && s[sptr] != t[0])
// 	{
// 		sptr--;
// 		ans++;
// 	}

// 	return sptr < 0 ? INF : ans;
// }

// int main()
// {
// 	int t;
// 	cin >> t;

// 	while (t--)
// 	{
// 		string n;
// 		cin >> n;
		
// 		int ans = INF;
// 		for (auto e : subseqs)
// 			ans = min(ans, solve(n, e));

// 		cout << ans << '\n';
// 	}

// 	return 0;
// }

//
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int t;
//    cin>>t;
//    while(t--){
//   long long int n,k;
//    cin>>n>>k;
//  long long  int a[n*k];
//    for(int i=0;i<n*k;i++){
//       cin>>a[i];
//    }
//  long long  int count=0;
//    vector<int>vec;
//    for(int i=n*k-1-n/2;i>=0;i-=(1+n/2)){
//       if(count==k) break;
//       vec.push_back(a[i]);
//       count++;
//    }
// long long int total_sum = 0;
    
   
//     for(int num : vec) {
//         total_sum += num;
//     }
//     cout<<total_sum<<endl;
// }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int t;
//    cin>>t;
//    while(t--){
//       int n;
//       cin>>n;
//       int a[n];
//       for(int i=0;i<n;i++){
//          cin>>a[i];
//    }
//    if(n%2==0){
//       cout<<2<<endl;
//       cout<<1<<" "<<n<<endl;
//       cout<<1<<" "<<n<<endl;
//    }  
//    else{
//       cout<<4<<endl;
//       cout<<1<<" "<<n-1<<endl;
//       cout<<1<<" "<<n-1<<endl;
//       cout<<n-1<<" "<<n<<endl;
//        cout<<n-1<<" "<<n<<endl;
//    }
// }
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int t;
//    cin>>t;
//    while(t--){
//       int n;
//       cin>>n;
//       int count2=0,count3=0;
//        while(n%2==0){
//          n/=2;
//          count2++;
//        }
//        while(n%3==0){
//          n/=3;
//          count3++;
//        }
//        if(n==1 && count2<=count3){
//          cout<<2*count3-count2<<endl;
//        }
//        else{
//          cout<<-1<<endl;
//        }
       

      
      
//    }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long n;
//         cin >> n;

//         if (n % 2 != 0) {
            
//             cout << "YES" << endl;
//         } else {
            
//             while (n % 2 == 0) {
//                 n /= 2;
//             }
//             if (n == 1) {
//                 cout << "NO" << endl;
//             } else {
//                 cout << "YES" << endl;
//             }
//         }
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         int count0 = 0, count1 = 0;
//         bool inZeroSequence = false;
//         bool inNonZeroSequence = false;

//         for (int i = 0; i < n; i++) {
//             if (a[i] == 0) {
//                 if (!inZeroSequence) {
//                     count0++;
//                     inZeroSequence = true;
//                 }
//                 inNonZeroSequence = false;
//             } else {
//                 if (!inNonZeroSequence) {
//                     count1++;
//                     inNonZeroSequence = true;
//                 }
//                 inZeroSequence = false;
//             }
//         }
//       if(count1==1 && count0==0) cout<<1<<endl;
//       else if(count0<count1) cout<<count0<<endl;
//        else cout<<count1<<endl;
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//       long long  int a[n];
//         for(int i=0;i<n;i++){
//             cin>>a[i];
//     }
    
//     for(int i=0;i<n-1;i++){
//         if(a[i]==1) {
//             a[i]++;
//             i=-1;
//         }
//          else if(a[i+1]%a[i]==0) a[i+1]++;
            
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// }
// #include<bits/stdc++.h>
// using namespace std ;
// int gcd(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }
// int gcd_of_vector(const vector<int>& v) {
//     int result = v[0];
//     for (size_t i = 1; i < v.size(); ++i) {
//         result = gcd(result, v[i]);
//     }
//     return result;
// }
// int main(){
//     int t ;
//     cin>>t ;
//     while(t--){
//         int n;
//         cin>>n;
//         int a[n];
//         vector<int>v(n);
//         for(int i=0;i<n;i++){
//              cin>>a[i];
//              v.push_back(a[i]-(i+1));

//         }
//          int result = gcd_of_vector(v);
//         cout<<abs(result)<<endl;

       
//     }


// }
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,x;
//         cin>>n>>x;
//         int a[n];
//         vector<int>v(n);
//         for(int i=0;i<n;i++){
//             cin>>a[i];
           
//         }
//         int max=0;
//         for(int i=0;i<n;i++){
//             if(a[i]%x==0){
//                 max=max+a[i]/x;
//             }
//             else{
//                 max=max+((a[i]/x)+1);
//             }
//         }
//         int sum=0;
//         for(int i=0;i<n;i++){
//              sum=sum+a[i];
//         }
//         if(sum%x==0)  cout<<sum/x<<" "<<max<<endl;
//         else{
//              cout<<(sum/x)+1<<" "<<max<<endl;
//         }
       
//      }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<long long> a(n);
//         int count0 = 0, count1 = 0;

//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//             if (a[i] == 0) count0++;
//             else if (a[i] == 1) count1++;
//         }
//         long long result = count1+ count1 * (pow(4, count0) / ( ((pow(3, count0)-1 )/ 2)-1));
//          if(count0==0){
//             cout<<count1<<endl;
//          }
//          else{
//         cout << result << endl; 
//          } 
//     }
// } 

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long int n;
//         cin >> n;
//         int c4 = 0, c6 = 0;
//         int n2 = n;
        
//         if (n % 2 != 0) {
//             cout << -1 << endl;
//         } else {
//             if (n == 4) {
//                 cout << 1 << " " << 1 << endl;
//             } else if (n == 6) {
//                 cout << 1 << " " << 1 << endl;
//             } else if (n % 4 == 0 && n % 6 == 0) {
//                 cout << n / 6 << " " << n / 4 << endl;
//             } else if (n % 4 == 0 && n % 6 != 0) {
//                 c4 = n / 4;
//                 while (n % 6 != 0) {
//                     n = n - 4;
//                 }
//                 if (n % 6 == 0) {
//                     cout << n / 6 << " " << c4 << endl;
//                 } else {
//                     cout << c4 << " " << c4 << endl;
//                 }
//             } else if (n % 4 != 0 && n % 6 == 0) {
//                 c6 = n / 6;
//                 while (n % 4 != 0) {
//                     n = n - 6;
//                 }
//                 if (n % 4 == 0) {
//                     cout << c6 << " " << n / 4 << endl;
//                 } else {
//                     cout << c6 << " " << c6 << endl;
//                 }
//             } else {
//                 int c41 = 0, c61 = 0;
//                 while (n % 6 != 0) {
//                     n = n - 4;
//                     c4++;
//                     if (n % 6 == 0) {
//                         c6 = n / 6;
//                     }
//                 }
//                 while (n2 % 4 != 0) {
//                     n2 = n2 - 6;
//                     c61++;
//                     if (n2 % 4 == 0) {
//                         c41 = n2 / 4;
//                     }
//                 }
//                 cout << c61 + c41 << " " << c4 + c6 << endl;
//             } 
//         }
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//       long long  int x,n;
//         cin>>x>>n;
//         if(x%2==0 && n%2==0) cout<<x-pow((n/2),2)+n/2*(n/2+1)<<endl;
//         else if(x%2==0 && n%2!=0) cout<<x-pow(((n/2)+1),2)+n/2*(n/2-1)<<endl;
//         else if(x%2!=0 && n%2==0)  cout<<x-n/2*(n/2+1)+pow((n/2),2);
//         else cout<<x-n/2*(n/2-1)+pow((n/2)+1,2)<<endl;
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//          int n;
//          cin>>n;
//          int a[n];
//          for(int i=0;i<n;i++){
//             cin>>a[i];
//          }
//          int count=0;
//         for(int i=n-2;i>=0;i--){
//              while(a[i+1]<a[i]) {
//                 a[i]/=2;
//                 count++;
//              }
//         }
//         int o=0;
//         for(int i=0;i<n-1;i++){
//             if(a[i]<a[i+1]) o++;
//         }
//        if(o==n) cout<<count<<endl;
//        else cout<<-1<<endl;
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         int count = 0;
//         bool possible = true;

//         for (int i = n - 2; i >= 0 && possible; i--) {
//             while (a[i] >= a[i + 1] && possible) {
//                 if (a[i] == 0) {
//                     possible = false;
//                     break;
//                 }
//                 a[i] /= 2;
//                 count++;
//             }
//         }

//         if (possible) {
//             bool strictlyIncreasing = true;
//             for (int i = 0; i < n - 1; i++) {
//                 if (a[i] >= a[i + 1]) {
//                     strictlyIncreasing = false;
//                     break;
//                 }
//             }

//             if (strictlyIncreasing) {
//                 cout << count << endl;
//             } else {
//                 cout << -1 << endl;
//             }
//         } else {
//             cout << -1 << endl;
//         }
//     }
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         long long int n, x, k;
//         cin >> n >> k >> x;
        
     
//         long long int sum = k * n - (k * (k - 1)) / 2;
        
      
//         long long int sum2 = (k * (k + 1)) / 2;

//         if (x <= sum && x >= sum2) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }
//  #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int a,b, n;
//         cin >>a>>b>>n;
//         vector<int> c(n);
//         int sum=0;
//         for (int i = 0; i < n; i++) {
//             cin >> c[i];
//             if(c[i]>a) c[i]=a;
//             sum+=c[i];
//         }
//         cout<<sum-1+b<<endl;
//     }
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int a, b, c;
//         cin >> a >> b >> c;
        
//         if (2 * b == a + c) {
//             cout << "YES" << endl;
//             continue;
//         }
       
//         if ((2 * b - c > 0 && (2 * b - c) % a == 0) ||
//             (a + c > 0 && (a + c) % (2 * b) == 0) || 
//             (2 * b - a > 0 && (2 * b - a) % c == 0)) { 
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

//1 2 4
//1 2 6
// #include<bits/stdtr1c++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         int a[2*n];
//         vector<int>v(n),v2(n);
//         for(int i=0;i<2*n;i++){
//             cin>>a[i];
//             if(i<n) v.push_back(a[i]);
//             else v2.push_back(a[i]);
//         }
//         sort(v.begin(),v.end());
//         sort(v2.begin(),v2.end());
//          vector<int>v3(2*k),v4(2*k),v5(n);
//          int count=0;
//          for(int i=0;i<n;i++){
//                if(v[i]==v[i+1] ){
//                    v3.push_back(v[i]);
//                    v3.push_back(v[i+1]);
//                }
//                else if(v2[i]==v2[i+1]){
//                 v4.push_back(v2[i]);
//                 v4.push_back(v2[i+1]);
//                }
//                else{
//                  v5.push_back(v[i]);
//                  v5.push_back(v2[i]);
//                }
//          }
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);

//     int T;
//     cin >> T;
//     while (T--) {
//         int n;
//         cin >> n;
//         map<int, int> freq;
//         set<int> unique_elements; // To keep track of unique elements
//         for (int i = 0; i < n; ++i) {
//             int x;
//             cin >> x;
//             ++freq[x];
//             unique_elements.insert(x);
//         }

//         int maxFreq = 0;
//         for (const auto &pair : freq) {
//             maxFreq = max(maxFreq, pair.second);
//         }

//         if (maxFreq == 1 && unique_elements.size() == 1) {
//             cout << 0 << endl;
//         } else {
//             int ans = n - maxFreq;
//             int currentMax = maxFreq;
//             while (currentMax < n) {
//                 ans++;
//                 currentMax *= 2;
//             }
//             cout << ans << endl;
//         }
//     }

//     return 0;
// }
