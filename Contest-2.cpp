// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// int main()
// {
// //// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A
//
// //    int A, B;
// //    cin >> A >> B;
// //
// //    if (A - B >= 0)
// //        cout << A - B << endl;
// //    else
// //        cout << 0 << endl;
//
// // ------------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B
//
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 0; i < N; ++i) {
// //        for (int j = 0; j <N; ++j) {
// //            if (i == j) {
// //                if (i == ceil(N / 2))
// //                    cout << "X";
// //                else
// //                    cout << "\\";
// //            }
// //            else if (i == N - j - 1)
// //                cout << "/";
// //            else
// //                cout << "*";
// //        }
// //        cout << endl;
// //    }
//
// // ------------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C
//
// //    int N, K;
// //    cin >> N >> K;
// //
// //    int mn, flag = 1, cnt = 0;
// //
// //    for (int i = 1; i <= N; ++i) {
// //        int X;
// //        cin >> X;
// //
// //        if (flag) {
// //            mn = X;
// //            flag = 0;
// //        } else {
// //            if (X < mn)
// //                mn = X;
// //        }
// //
// //        cnt++;
// //
// //        if (cnt == K || i == N) {
// //            cout << mn << " ";
// //            cnt = 0;
// //            flag = 1;
// //        }
// //    }
//
// // ------------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D
//
//     // Time Limit ???
// //    int T;
// //    cin >> T;
// //
// //    ll sum = 0;
// //
// //    while (T--) {
// //        int L, R;
// //        cin >> L >> R;
// //
// //        for (int i = L; i <= R; ++i)
// //            sum += i;
// //
// //        cout << sum << endl;
// //        sum = 0;
// //    }
//
// // OR
//
// //    int T;
// //    cin >> T;
// //
// //    while (T--) {
// //        ll L, R;
// //        cin >> L >> R;
// //
// //        ll mn = min(L, R);
// //        mn--;
// //
// //        ll mx = max(L, R);
// //
// //        ll sum_mn = mn * (mn + 1) / 2;
// //        ll sum_mx = mx * (mx + 1) / 2;
// //
// //        cout << sum_mx - sum_mn << endl;
// //    }
//
// // ------------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/E
//
//     // جامده أوووووووي
// //    ll seet_id;
// //    cin >> seet_id;
// //
// //    ll row = seet_id / 4;
// //    ll col;
// //
// //    if (row % 2 == 0)
// //        col = seet_id % 4;
// //    else
// //        col = 3 - (seet_id % 4);
// //
// //    cout << row << " " << col;
//
// // ------------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F
//
// //    int N;
// //    cin >> N;
// //
// //    int res = 0;
// //
// //    while (N--) {
// //        ll X;
// //        cin >> X;
// //
// //        int cnt = 0;
// //
// //        if (X % 2 != 0)
// //            cnt = 0;
// //        else {
// //            while (X) {
// //                if (X % 2 != 0)
// //                    break;
// //                else {
// //                    cnt++;
// //                    X /= 2;
// //                }
// //            }
// //        }
// //
// //        if (cnt > res)
// //            res = cnt;
// //    }
// //
// //    cout << res << endl;
//
// // ------------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/G
//
// //    int T;
// //    cin >> T;
// //
// //    while (T--) {
// //        ll N, S;
// //        cin >> N >> S;
// //
// //        if ((N * (N + 1)) / 2 >= S) {
// //            while(S > 0) {
// //                if (S <= N) {
// //                    cout << S << endl;
// //                    break;
// //                }
// //                S -= N;
// //                cout << N << " ";
// //                N--;
// //            }
// //        } else
// //            cout << -1 << endl;
// //    }
//
// // ------------------------------------------------------------------------------------------------------
//
// //// https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/H
//
//     ll N;
//     cin >> N;
//
//     cout << "0 0" << endl;
//
// // ------------------------------------------------------------------------------------------------------
//
//     return 0;
// }
