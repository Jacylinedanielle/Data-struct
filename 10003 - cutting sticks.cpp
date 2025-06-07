#include <bits/stdc++.h>
using namespace std;

int main() {
    int L, n;
    while (cin >> L && L) {
        cin >> n;
        vector<int> A(n + 2);
        vector<vector<int> > DP(n + 2, vector<int>(n + 2, 0));

        for (int a = 1; a <= n; a++) {
            cin >> A[a];
        }
        A[++n] = L;

        for (int a = 2; a <= n; a++) {
            for (int b = 0, c = a + b; c <= n; b++, c++) {
                int minCut = INT_MAX;
                for (int d = b + 1; d < c; d++) {
                    int temp = DP[b][d] + DP[d][c] + A[c] - A[b];
                    minCut = min(minCut, temp);
                }
                DP[b][c] = minCut;
            }
        }

        cout << "The minimum cutting is " << DP[0][n] << "." << endl;
    }

    return 0;
}

