
// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/A

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     int n, m, q; cin >> n >> m >> q;
//
//     vector<vector<char>> ans(n, vector<char>(m, '.'));
//
//     int r1, c1, r2, c2; char x;
//
//     while (q--) {
//         cin >> r1 >> c1 >> r2 >> c2 >> x;
//         r1--, c1--; r2--; c2--;
//
//         int mn_r = min(r1, r2);
//         int mn_c = min(c1, c2);
//         int mx_r = max(r1, r2);
//         int mx_c = max(c1, c2);
//
//         for (int i = mn_r; i <= mx_r; ++i) {
//             for (int j = mn_c; j <= mx_c; ++j) {
//                 ans[i][j] = x;
//             }
//         }
//     }
//
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < m; ++j) {
//             if (ans[i][j]) cout << ans[i][j];
//         }
//         if (i != n-1) cout << endl;
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/B

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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
//     if (n == 0) {
//         cout << 1 << endl;
//         return 0;
//     }
//
//     // Last 8 -> 8^1=8, 8^2=64, 8^3=512, 8^4=4096, 8^5=32768, 8^6=262144 -> Repeats Itself
//
//     vector<int> cycle {6, 8, 4, 2};
//
//     cout << cycle[n % 4] << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/C

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//     int s, n; cin >> s >> n;
//
//     vector<pair<int, int>> dragon(n);
//     for (int i = 0; i < n; ++i) {
//         cin >> dragon[i].first >> dragon[i].second;
//     }
//
//     sort(All(dragon));
//
//     for (int i = 0; i < n; ++i) {
//         int x = dragon[i].first;
//         int y = dragon[i].second;
//
//         if (s <= x) {
//             cout << "NO";
//             return 0;
//         }
//         s += y;
//     }
//
//     cout << "YES";
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/D

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/E

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/F

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/G

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/H

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/I

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/J

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/K

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/L

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/M

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/N

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/O

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/P

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/Q

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/R

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/S

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/T

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/U

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/V

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/W

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/X

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/Y

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223207/problem/Z

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//
// using namespace std;
//
//
// int main()
// {
//     shwa
//
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------
