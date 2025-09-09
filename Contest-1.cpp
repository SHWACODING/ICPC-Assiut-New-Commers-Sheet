// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// int main()
// {
// //// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A
//
// //    int X;
// //    long P;
// //    cin >> X >> P;
// //
// //    double discount = 100 - X;
// //    double original_discount = (P / discount) * X;
// //    double original_price = original_discount + P;
// //
// //    cout << fixed << setprecision(2) << original_price << endl;
//
// // ---------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B
//
// //    ll A, B, K;
// //    cin >> A >> B >> K;
// //
// //    if (A % K == 0 && B % K == 0)
// //        cout << "Both\n";
// //    else if (A % K == 0 && B % K != 0)
// //        cout << "Memo\n";
// //    else if (A % K != 0 && B % K == 0)
// //        cout << "Momo\n";
// //    else
// //        cout << "No One\n";
//
// // ---------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C
//
// //    char C;
// //    cin >> C;
// //
// //    if (C == 'z')
// //        cout << 'a' << endl;
// //    else
// //        cout << char(C + 1) << endl;
//
// // ---------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D
//
// //    ll A, B, C, D;
// //    cin >> A >> B >> C >> D;
// //
// //    if (A + B - C == D || A + B * C == D || A - B + C == D || A - B * C == D || A * B + C == D || A * B - C == D)
// //        cout << "YES\n";
// //    else
// //        cout << "NO\n";
//
// // ---------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E
//
// //    int A, B;
// //    cin >> A >> B;
// //
// //    if ((A == 0 && B == 0) || abs(A - B) >= 2)
// //        cout << "NO\n";
// //    else
// //        cout << "YES\n";
//
// // ---------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/F
//
// //    unsigned int A, B;
// //    cin >> A >> B;
// //
// //    unsigned int res = A ^ B;
// //
// //    cout << res << endl;
//
// // ---------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G
//
// //    ll eye, mouth, body;
// //	cin >> eye >> mouth >> body;
// //
// //	ll res = 0;
// //
// //	if (eye == 0 || body == 0)
// //		cout << 0 << endl;
// //	else {
// //		if ((mouth >= eye && mouth >= body) || (mouth >= body && mouth < eye) || (mouth < body && mouth >= eye)) {
// //			res = min(eye, body);
// //			cout << res << endl;
// //		} else if (mouth < body && mouth < eye) {
// //			res = mouth;
// //			eye -= mouth;
// //			body -= mouth;
// //			res += min(eye/2, body);
// //			cout << res << endl;
// //		}
// //	}
//
// // ---------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H
//
// //    double N, K, A;
// //    cin >> N >> K >> A;
// //
// //    double res = (N * K) / A;
// //    ll res_int_part = res;
// //    double res_double_part = res - res_int_part;
// //
// //    if (res_double_part > 0)
// //        cout << "double\n";
// //    else if (res <= 2147483647)
// //        cout << "int\n";
// //    else
// //        cout << "long long\n";
//
//
// // ---------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
//
//     int N;
//     cin >> N;
//
//     int second = N % 10;
//     int first = N / 10;
//
//     if (second % first == 0 || first % second == 0)
//         cout << "YES\n";
//     else
//         cout << "NO\n";
//
// // ---------------------------------------------------------------------------------------------------
//
//
//     return 0;
// }
