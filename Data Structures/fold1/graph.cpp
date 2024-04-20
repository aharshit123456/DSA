/*#include <iostream>
#include <vector>
using namespace std;

const int N = 1e3 + 10;
int graph1[N][N];
vector<int> graph2[N];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i)
    {
        int v1, v2;
        cin >> v1 >> v2;
        graph1[v1][v2] = 1;
        // graph1[v1][v2] = 1;

        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", graph1[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", graph2[i][j]);
        }
        printf("\n");
    }
}
*/

#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;

class graph
{

public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction)
    {
        // direction = 0 -> undirected
        // direction = 1 -> directed graph

        // create an edge from u to v
        adj[u].push_back(v);

        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cout << "Enter the number of nodes: " << endl;
    cin >> n;

    int m;
    cout << "Enter the number of edges: " << endl;
    cin >> m;

    graph g;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        // creating an undirected graph
        g.addEdge(u, v, 0);
    }

    // printing graph
    g.printAdjList();

    return 0;
}