// Remove all duplicates from a given string 
// Approach : Store the string into an unordered set then convert it into a string and give output .
// Printing repeated chars : https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/

#include <bits/stdc++.h>
using namespace std;

void solve();
string removeDuplicates(string str);

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
    cout << removeDuplicates(s);
}

string removeDuplicates(string str)
{
    unordered_set<char> s(str.begin(), str.end());
    str.clear();
    for (auto it =s.begin(); it != s.end(); ++it)
        str.push_back(*it);
    reverse(str.begin(),str.end());
    return str;
}