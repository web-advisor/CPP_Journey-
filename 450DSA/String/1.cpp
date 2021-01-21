// Check whether a String is Palindrome or not
// Approach : Access the first (int)n/2 characters of the string . If (i)th element from the front is not equal to (i)th element from behind ... then -> return 0 at that  very mmoment  .. else i.e. for every (i)th there is a same (i)th from behind throughout the half string then return 1

#include <bits/stdc++.h>
using namespace std;

void solve();
int isPalindrome(string);

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
}

void solve()
{
    string s;
    cin >> s;
    cout << isPalindrome(s);
}

int isPalindrome(string S)
{
    int n = S.length();
    for (int i = 0; i < (n / 2); i++)
    {
        if (S[i] != S[n - i - 1])
        {
            return 0;
        }
    }
    return 1;
}