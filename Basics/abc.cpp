#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

#define C continue;
#define R return
#define int long long
#define D double
#define I insert
#define ull unsigned long long
#define ui unsigned int
#define ld long double

#define pb push_back
#define pf push_front
#define F first
#define S second
#define mp make_pair

#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vd vector<D>
#define vull vector<ull>
#define vld vector<ld>
#define vpld vector<pld>
#define vpii vector<pii>
#define vpDD vector<pDD>

#define all(v) v.begin(), v.end()
#define allcomp(v) v.begin(), v.end(), comp

#define pii pair<int, int>
#define pld pair<ld, ld>
#define pDD pair<D, D>

#define m(x, y) map<x, y>
#define um(x, y) unordered_map<x, y>
#define max_heap priority_queue<int>
#define min_heap priority_queue<int, vector<int>, greater<int>>
#define max_heap_pairs priority_queue<pair<int, int>>
#define min_heap_pairs priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>

const ld pie = 3.1415926535897932384626;
const int special_prime = 982451653l; // The 50,000,000th prime number
const int mod = 1e9 + 7;              // Prime Number
const int inf = 2e18;
const int N = 3e5;

//MATHEMATICAL FUNCTIONS
int GCD(int a, int b)
{
    if (!b)
        return a;
    return GCD(b, a % b);
}

int LCM(int a, int b)
{
    return (a * b) / GCD(a, b);
}

int getSmallestDivisor(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return i;
    }
    return n;
}

int fastPower(int a, int b, int m = inf)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
            res = (res % m * a % m) % m;
        a = (a % m * a % m) % m;
        b = b >> 1;
    }
    return res;
}
bool comp(int a, int b)
{
    return a > b;
}

int min(int a, int b) { return (a < b) ? a : b; }
int ncr(int n, int k)
{
    int a[n + 1][k + 1];
    int i, j;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            // Base Cases
            if (j == 0 || j == i)
                a[i][j] = 1;

            else
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    return a[n][k];
}
//power function with mod(p)
int power(long long x, unsigned int y, int p)
{
    int res = 1; // Initialize result

    x = x % p; // Update x if it is more than or
               // equal to p

    if (x == 0)
        return 0; // In case x is divisible by p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}
long double powlogn(int x, int n)
{ // n is already long long
    long double ans = 1.0;
    int N = n;
    if (N < 0)
        N = -1 * N;
    while (N)
    {
        if (N & 1) // n is odd
        {
            ans = ans * x;
            N = N - 1;
        }
        else // n is even
        {
            x = x * x;
            N = N / 2;
        }
    }
    if (n < 0)
        ans = double(1.0) / double(ans);
    return ans;
}
unsigned int rm_setbit_pos(int n)
{
    return log2(n & -n);
}
bool mark[1000001] = {0};
void SievePrime(int n = 1000000)
{ // non-prime -> 0 , prime -> 1
    // initailly let all are non prime
    mark[2] = 1;
    for (int i = 3; i <= n; i += 2) // mark all odd no's as prime initially
        mark[i] = 1;
    // thus evens are remains non-prime
    // 1. optimisation is to iterate over only odd no's (2 and its evens(multiples) are already 0)
    for (int i = 3; i <= sqrt(n); i += 2)       // skipping even no's
    {                                           // mark all the multiples of i as non-prime
        for (int j = i * i; j <= n; j += 2 * i) // multiples of i before i^2 are already marked and only iterating over multiples if i that are odd no's
        {
            mark[j] = 0;
        }
    }
}
void solve()
{
    int how;
    cin >> how;
    int cnt = 0, i = 2;
    while (cnt < how && i < 1000001)
    {
        if (mark[i] == 1)
        {
            cnt++;
            cout << i << " ";
        }
        i++;
    }
    cout << endl;
}

int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fast 
    int t;
    cin >> t;
    SievePrime();
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}