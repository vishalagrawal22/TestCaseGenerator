#include <bits/stdc++.h>

#define endl "\n"
#define int long long
#define double long double
#define precise \
    fixed << setprecision(12)
#define debug(var) \
    if (debugging) \
    cerr << (#var) << ": " << var << endl

const bool debugging = 1;
const int mod = 1e9 + 7;

using namespace std;

template <class T>
ostream &operator<<(ostream &os, vector<T> V)
{
    for (auto v : V)
    {
        os << v << " ";
    }
    return os << "";
}

template <class T>
ostream &operator<<(ostream &os, vector<vector<T>> V)
{
    for (int i = 0; i < V.size(); i++)
    {
        for (int j = 0; j < V[i].size(); j++)
        {
            os << V[i][j] << " ";
        }
        os << endl;
    }
    return os << "";
}

template <class T>
ostream &operator<<(ostream &os, set<T> S)
{
    for (auto s : S)
    {
        os << s << " ";
    }
    return os << "";
}

template <class L, class R>
ostream &operator<<(ostream &os, pair<L, R> P)
{
    return os << P.first << " " << P.second;
}

template <class L, class R>
ostream &operator<<(ostream &os, map<L, R> M)
{
    os << endl;
    for (auto m : M)
    {
        os << m << endl;
    }
    return os << "";
}

void solve()
{
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int no_of_testcases;
    cin >> no_of_testcases;
    while (no_of_testcases-- > 0)
    {
        solve();
    }
    return 0;
}