//wrong output

#include<bits/stdc++.h>
using namespace std;


int main() {
    int n, i, j, flag, order;
    int x[20], y[20];
    cin>>n;
    
    for(i = 0; i < n; i++) {
        cin>>order;
        order--;
        
        x[order] = i;
    }
    while(1) {
        flag = 0;
        for(i = 0; i < n; i++) {
            if (!(cin >> order))
                {flag = 1;break;}
            order--;
            y[order] = i;
        }
        if(flag)    break;
        int dp[25][25] = {};
        for(i = 1; i <= n; i++) {
            for(j = 1; j <= n; j++) {
                if(x[i-1] == y[j-1])
                    dp[i][j] = dp[i-1][j-1]+1;
                else
                    dp[i][j] = dp[i-1][j] > dp[i][j-1] ?
                        dp[i-1][j] : dp[i][j-1];
            }
        }
        cout << dp[n][n] << endl;

    }
    return 0;
}
