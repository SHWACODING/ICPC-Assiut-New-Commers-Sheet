
// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/A

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     string S; cin >> S;
//
//     int N = S.size();
//
//     for (int i = 0; i < N / 2; ++i) {
//         int j = N - 1 - i;
//
//         if (S[i] != S[j]) {
//             if (S[i] == '?') S[i] = S[j];
//             else if (S[j] == '?') S[j] = S[i];
//             else { cout << -1 << endl; return 0; }
//         } else if (S[i] == '?' && S[j] == '?') {
//             S[i] = S[j] = 'a';
//         }
//     }
//
//     if ((N & 1) && S[N/2] == '?') S[N/2] = 'a';
//
//     cout << S << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/B

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     int W; cin >> W;
//
//     if (!(W & 1) && W > 2) cout << "YES\n";
//     else cout << "NO\n";
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/C

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     int n, m; cin >> n >> m;
//
//     ll sumA=0, sumB=0;
//
//     for (int i = 0; i < n; i++) {
//         int x; cin >> x;
//         sumA += x;
//     }
//     for (int i = 0; i < m; i++) {
//         int x; cin >> x;
//         sumB += x;
//     }
//
//     if (sumA == sumB) cout << "Yes\n";
//     else cout << "No\n";
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/D

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     int a, b; cin >> a >> b;
//
//     int years=0;
//
//     while (a <= b) {
//         a*=3; b*=2;
//         years++;
//     }
//
//     cout << years;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/E

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     int n; cin >> n;
//
//     int cnt=0;
//
//     while (n--) {
//         int p, q; cin >> p >> q;
//
//         if (q - p >= 2) cnt++;
//     }
//
//     cout << cnt;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/F

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     int n, m; cin >> n >> m;
//
//     for (int i = 1; i <= n; ++i) {
//         if (i % 2 == 1) cout << string(m, '#');
//         else if (i % 4 == 2) cout << string(m-1, '.') << '#';
//         else if (i % 4 == 0) cout << '#' << string(m-1, '.');
//         cout << endl;
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/G

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     int n; cin >> n;
//
//     vector<string>s(n+1);
//
//     for(int i = 0; i < n; i++) {
//         cin >> s[i];
//     }
//
//     int c=0;
//
//     for(int i = 1; i <= n; i++) {
//         if (s[i] != s[i-1]) c++;
//     }
//
//     cout << c;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/H

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     int n; cin >> n;
//
//     vector<int> a(n+1), p(n+1);
//
//     for (int i = 1; i <= n; i++) {
//         cin >> a[i];
//         p[a[i]] = i;
//     }
//
//     for (int i = 1; i <= n; i++) {
//         cout << p[i] << " ";
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/I

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     string S, T; cin >> S >> T;
//
//     int i=0;
//     for (auto &C : T) {
//         if (S[i] == C) i++;
//     }
//
//     cout << i+1;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/J

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/K

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/L

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/M

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/N

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/O

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/P

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/Q

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/R

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/S

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/T

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/U

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/V

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/W

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/X

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/Y

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/Z

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------