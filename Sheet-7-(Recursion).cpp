// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// void R_Fun (int i, int N) {
//     if (i > N) return;
//
//     cout << "I love Recursion\n";
//     R_Fun(i+1, N);
// }
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//
//     R_Fun(1, N);
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// void R_From_1_To_N (int i, int N) {
//     if (i > N) return;
//
//     cout << i << endl;
//
//     R_From_1_To_N (i+1, N);
// }
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//
//     R_From_1_To_N (1, N);
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// void R_From_N_To_1 (int N, int i) {
//     if (N < i) return;
//
//     cout << N;
//     if (N > i) cout << " ";
//
//     R_From_N_To_1 (N-1, i);
// }
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//
//     R_From_N_To_1(N, 1);
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// void R_Print (int i, string S) {
//     if (i >= S.size()) return;
//
//     cout << S[i] << " ";
//
//     R_Print(i+1, S);
// }
//
// int main()
// {
//     shwa
//
//     int T; cin >> T;
//     while (T--) {
//         int N; cin >> N;
//         string N_str =  to_string(N);
//         R_Print(0, N_str);
//         cout << endl;
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/E

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// void R_Binary (int i, int N) {
//     if (i >= N) return;
//
//     R_Binary(i, N / 2);
//
//     cout << N % 2;
// }
//
//
// int main()
// {
//     shwa
//
//     int T; cin >> T;
//     while (T--) {
//         int N; cin >> N;
//         R_Binary(0, N);
//         cout << endl;
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// void R_Even (int i, int N, vector<int>&A) {
//     if (i >= N) return;
//
//     R_Even(i+1, N, A);
//
//     if (i % 2 == 0) cout << A[i] << " ";
// }
//
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//     vector<int> A(N);
//     for (auto &Ai: A) cin >> Ai;
//
//     R_Even(0, N, A);
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/G

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// void R_Spaces (int N) {
//     if (N == 0) return;
//     cout << " ";
//     R_Spaces (N-1);
// }
//
// void R_Stars (int N) {
//     if (N == 0) return;
//     cout << "*";
//     R_Stars (N-1);
// }
//
// void R_Pyramid (int  i, int N) {
//     if (i > N) return;
//
//     R_Spaces(N - i);
//     R_Stars(2 * i - 1);
//     cout << endl;
//
//     R_Pyramid(i+1, N);
// }
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//
//     R_Pyramid(1, N);
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/H

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// void R_Spaces (int N) {
//     if (N == 0) return;
//     cout << " ";
//     R_Spaces (N-1);
// }
//
// void R_Stars (int N) {
//     if (N == 0) return;
//     cout << "*";
//     R_Stars (N-1);
// }
//
// void R_Pyramid (int  i, int N) {
//     if (i == 0) return;
//
//     R_Spaces(N - i);
//     R_Stars(2 * i - 1);
//     cout << endl;
//
//     R_Pyramid(i-1, N);
// }
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//
//     R_Pyramid(N, N);
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// vector<char> Vowels {'a', 'e', 'i', 'o', 'u'};
//
// int R_Vowels (int i, const string &S) {
//     if (i >= (int)S.size()) return 0;
//
//     int cnt = (find(All(Vowels), tolower(S[i])) != Vowels.end()) ? 1 : 0;
//
//     return cnt + R_Vowels(i+1, S);
// }
//
//
// int main()
// {
//     shwa
//
//     string S; getline(cin, S);
//
//     cout << R_Vowels(0, S) << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
//
// ll R_Factorial (int N) {
//     if (N == 0) return 1;
//
//     return N * R_Factorial(N - 1);
// }
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//
//     cout << R_Factorial(N) << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// int R_Max (int i, int N, vector<int> &A) {
//     if (i == N-1) return A[i];
//
//     return max(A[i], R_Max(i+1, N, A));
// }
//
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//     vector<int> A(N);
//     for (auto &Ai: A) cin >> Ai;
//
//     cout << R_Max(0, N, A) << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// ll R_Sum (int i, int N, vector<int>&A) {
//     if (i >= N) return 0;
//
//     return A[i] + R_Sum(i+1, N, A);
// }
//
// int main()
// {
//     shwa
//
//     int N; cin >> N;
//     vector<int> A(N);
//     for (auto &Ai: A) cin >> Ai;
//
//     cout << R_Sum(0, N, A) << endl;
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/M

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// ll R_Suffix(int i, int M, vector<int>&A) {
//     if (i >= M) return 0;
//
//     return A[i] + R_Suffix(i+1, M, A);
// }
//
// int main()
// {
//     shwa
//
//     int N, M; cin >> N >> M;
//     vector<int> A(N);
//     for (auto &Ai: A) cin >> Ai;
//     reverse(All(A));
//
//     cout << R_Suffix(0, M, A);
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N

// #include <bits/stdc++.h>
// #define ll long long
// #define All(v) v.begin(),v.end()
// #define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);
//
// using namespace std;
//
// vector<vector<int>> v1, v2, ans;
//
// void R_Matrix (int i, int j, int R, int C) {
//     if (i == R) return;
//
//     if (j == C) {
//         R_Matrix(i+1, 0, R, C);
//         return;
//     }
//
//     ans[i][j] = v1[i][j] + v2[i][j];
//
//     R_Matrix(i, j+1, R, C);
// }
//
//
// int main() {
//     shwa
//
//     int R, C; cin >> R >> C;
//
//     v1.assign(R, vector<int>(C));
//     v2.assign(R, vector<int>(C));
//     ans.assign(R, vector<int>(C));
//
//     for (int i = 0; i < R; ++i)
//         for (int j = 0; j < C; ++j)
//             cin >> v1[i][j];
//
//     for (int i = 0; i < R; ++i)
//         for (int j = 0; j < C; ++j)
//             cin >> v2[i][j];
//
//     R_Matrix(0, 0, R, C);
//
//     for (int i = 0; i < R; ++i) {
//         for (int j = 0; j < C; ++j) {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }
//
//     return 0;
// }

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/O

#include <bits/stdc++.h>
#define ll long long
#define All(v) v.begin(),v.end()
#define shwa ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

ll R_Fibonacci(ll N) {
    if (N == 1) return 0;
    if (N == 2) return 1;
    return R_Fibonacci(N - 2) + R_Fibonacci(N - 1);
}

int main()
{
    shwa

    int N; cin >> N;

    cout << R_Fibonacci(N) << endl;

    return 0;
}

// -------------------------------------------------------------------------------------------

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P

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

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Q

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

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R

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

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/S

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

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/T

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

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U

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

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/V

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

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W

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

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X

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

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y

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

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Z

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

