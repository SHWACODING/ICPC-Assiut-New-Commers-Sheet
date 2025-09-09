// #include <bits/stdc++.h>
//
// typedef long long ll;
//
// using namespace std;
//
// int main()
// {
// // https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/A
//
// //    int T;
// //    cin >> T;
// //
// //    while (T--) {
// //        int width, height;
// //        cin >> width >> height;
// //
// //        if (width == height)
// //            cout << "Square\n";
// //        else
// //            cout << "Rectangle\n";
// //    }
//
// // ----------------------------------------------------------------------------------------------------
//
// // https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/B
//
// //    int n;
// //    cin >> n;
// //
// //    vector<int> a(n);
// //
// //    for (int &x : a)
// //        cin >> x;
// //
// //    for (int i = 0; i < n; ++i) {
// //        if (a[i] == 0)
// //            reverse(a.begin(), a.begin() + i);
// //    }
// //
// //    for (int &x : a)
// //        cout << x << " ";
//
// // OR
//
// //// Using Arrays ?
//
// //    const int sz = 1e2 + 5;
// //    int A[sz];
// //
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 0; i < N; ++i)
// //        cin >> A[i];
// //
// //    for (int i = 0; i < N; ++i) {
// //        if (A[i] == 0) {
// //            // Swap From 0 To i - 1 ??????
// //            for (int L = 0, R = i - 1; L < R; ++L, --R)
// //                swap(A[L], A[R]);
// //        }
// //    }
// //
// //    for (int i = 0; i < N; ++i)
// //        cout << A[i] << " ";
//
// // ----------------------------------------------------------------------------------------------------
//
// // https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C
//
// //    const int sz = 1e3 + 5;
// //    ll A[sz];
// //
// //    int N, K;
// //    cin >> N >> K;
// //
// //    for (int i = 0; i < N; ++i)
// //        cin >> A[i];
// //
// ////    Why greater<long long>() ?
// ////
// ////    Normally sort(a, a+n) sorts increasing (smallest first).
// ////    But we want decreasing (largest first).
// ////    greater<long long>() tells it: "Sort descending!"
// //
// //    sort(A, A + N, greater<ll>());
// //
// //    ll sum = 0;
// //
// //    for (int i = 0; i < K; ++i)
// //    // Do The Summation Only If A[i] Is Positive ??
// //        if (A[i] > 0)
// //            sum += A[i];
// //
// //    cout << sum << endl;
//
//
// // ----------------------------------------------------------------------------------------------------
//
// // https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
//
// //    const int sz = 1e3 + 5;
// //    int A[sz];
// //
// //    // We Will Use Frequency Array To Mark If Any Number Exist More Than One
// //    // and It Must Must Be Initialized With 0 ???
// //    int freq[sz] = {0};
// //
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 0; i < N; ++i) {
// //        cin >> A[i];
// //        freq[A[i]]++;
// //    }
// //
// //    int cnt = 0;
// //
// //    for (int i = 0; i < N; ++i) {
// //        if (freq[A[i] + 1] > 0)
// //            cnt++;
// //    }
// //
// //    cout << cnt << endl;
//
// // ----------------------------------------------------------------------------------------------------
//
// // https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/E
//
// //    const int sz = 1e5 + 5;
// //    int A[sz];
// //
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 0; i < N; ++i)
// //        cin >> A[i];
// //
// //    int positive_start = 0, negative_start = 0;
// //
// //    for (int i = 0; i < N; ++i) {
// //        // In The Two Cases I Perform My Flips From Positive To Negative and Vice Versa ??
// //        // and I Take The Minimum Number Of Flips Done ??
// //
// //        // Summary : One Time Make The All Numbers (+, -, +, -, ...)
// //        //         : Another Time Make The All Numbers (-, +, -, +, ...)
// //
// //        if (i % 2 == 0) {
// //            // Even And Negative At The Same Time ??
// //            if (A[i] < 0) { positive_start++; }
// //        } else {
// //            // Odd And Positive At The Same Time ??
// //            if (A[i] > 0) { positive_start++; }
// //        }
// //
// //        if (i % 2 == 0) {
// //            // Even And Positive At The Same Time ??
// //            if (A[i] > 0) { negative_start++; }
// //        } else {
// //            // Odd And Negative At The Same Time ??
// //            if (A[i] < 0) { negative_start++; }
// //        }
// //    }
// //
// //    cout << min(positive_start, negative_start) << endl;
//
// // ----------------------------------------------------------------------------------------------------
//
// // https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F
//
// //    const int sz = 1e5 + 5;
// //    int A[sz];
// //
// //    int N;
// //    cin >> N;
// //
// //    for (int i = 0; i < N; ++i)
// //        cin >> A[i];
// //
// //    int L = 0, R = N - 1;
// //
// //    while (L <= R) {
// //        cout << A[L++] << " ";
// //
// //        // This Only To Handle Odd Number OF ELements in Array ??
// //        if (L <= R)
// //            cout << A[R--] << " ";
// //    }
//
// // ----------------------------------------------------------------------------------------------------
//
// // https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G
//
// //    const int sz = 1e5 + 10;
// //    int A[sz];
// //
// //    int T;
// //    cin >> T;
// //
// //    while (T--) {
// //        int N;
// //        cin >> N;
// //
// //        for (int i = 0; i < N; ++i)
// //            cin >> A[i];
// //
// //        int num_even = 0, num_odd = 0, odd_cnt = 0;
// //
// //        for (int i = 0; i < N; ++i) {
// //            if (A[i] % 2 == 0)
// //                num_even++;
// //            else
// //                num_odd++;
// //        }
// //
// //        if (N % 2 != 0)
// //            cout << -1 << endl;
// //        else {
// //            if (num_even == num_odd) {
// //                cout << 0 << endl;
// //            }
// //            else {
// //                // Minimum Operations => (Number of The Extra num_even or num_odd) Given By
// //                // Subtracting Them, Then divided by 2
// //                cout << abs(num_even - num_odd) / 2 << endl;
// //            }
// //        }
// //    }
//
// // ----------------------------------------------------------------------------------------------------
//
//     return 0;
// }
