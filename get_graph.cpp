#include <bits/stdc++.h>

using namespace std;

template <class T>
ostream &operator<<(ostream &os, set<T> S)
{
    for (auto s : S)
    {
        os << s << "";
    }
    return os << "";
}

template <class L, class R>
ostream &operator<<(ostream &os, pair<L, R> P)
{
    return os << P.first << " " << P.second << endl;
}

void GenRandomGraphs(int NOEdge, int NOVertex)
{
    int i, j, edge[NOEdge][2];
    i = 0;
    while (i < NOEdge)
    {
        edge[i][0] = rand() % NOVertex + 1;
        edge[i][1] = rand() % NOVertex + 1;
        if (edge[i][0] == edge[i][1])
            continue;
        else
        {
            for (j = 0; j < i; j++)
            {
                if ((edge[i][0] == edge[j][0] &&
                     edge[i][1] == edge[j][1]) ||
                    (edge[i][0] == edge[j][1] &&
                     edge[i][1] == edge[j][0]))
                    i--;
            }
        }
        i++;
    }

    set<pair<int, int>> ds;

    for (i = 0; i < NOVertex; i++)
    {
        for (j = 0; j < NOEdge; j++)
        {
            if (edge[j][0] == i + 1)
            {
                ds.insert({min(i + 1, edge[j][1]), max(i + 1, edge[j][1])});
            }
            else if (edge[j][1] == i + 1)
            {
                ds.insert({min(i + 1, edge[j][0]), max(i + 1, edge[j][0])});
            }
        }
    }

    cout << ds;
}

int main()
{
    srand(time(0));
    int min_nodes = 5;
    int max_diff = 5;
    int e, n;
    n = min_nodes + rand() % max_diff;
    e = rand() % ((n * (n - 1)) / 2);
    cout << n << " " << e << endl;
    GenRandomGraphs(e, n);
}