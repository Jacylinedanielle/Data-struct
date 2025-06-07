#include <bits/stdc++.h>
#define MAX_LEN 10000

using namespace std;

int findProductDigitNum(int N, string &Q);
void reverse(string &str);

int main()
{
    int N, T;
    string Q;

    cin >> T;
    while (T--)
    {
        cin >> N;
        if (findProductDigitNum(N, Q))
            cout << Q << endl;
        else
            cout << "-1" << endl;
    }

    return 0;
}

/* Find a number Q such that the product of digits in Q equals N
 *
 * The function returns 1 if such Q exists. Otherwise, it returns 0
 */
int findProductDigitNum(int N, string &Q)
{
    /* Special case */
    if (N < 10)
    {
        Q = to_string(N);
        return 1;
    }

    Q.clear();
    int digit = 9;

    while (digit > 1 && N > 1)
    {
        while (N % digit == 0)
        {
            Q += (char)(digit + '0');
            N /= digit;
        }
        digit--;
    }

    if (N > 1)
        return 0;

    reverse(Q);
    return 1;
}

void reverse(string &str)
{
    reverse(str.begin(), str.end());
}

