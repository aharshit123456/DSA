#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
#include <queue>

using namespace std;

class graph
{

public:
    unordered_map<int, bool> visited;
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

/*
// Self Implementation - Incorrect behaviour
    void dfs(vector<bool> visited, int start_node){
        if(visited[start_node]) return;
        visited[start_node] = true;
        printf("%d ", start_node);
        cout << visited[start_node] << endl;

        vector<int> neighbours = adj[start_node];
        for(int i = 0; i<neighbours.size(); i++){
            dfs(visited,neighbours[i]);
        }
    }

*/


    void dfs(int v){
        visited[v] = true;
        cout << v << " " ;

        list<int>::iterator i;
        for(i = adj[v].begin(); i != adj[v].end(); ++i)
            if(!visited[*i]){
                dfs(*i);
            }

    }

    void findComponents(int n){
        int count = 0;
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                dfs(i);
                count++;
                printf("\n");
            }
        }
        printf("Total number of components are %d.", count);
    }


    /*void shortestPath(int s, int e){
        
        // Do a BFS starting at node s
        vector<int> prev = bfs(s);

        // Return reconstructed path from s -> e
        vector<int> path;
        for(int i = e; e != NULL; i = prev[i]){
            path.push_back(i);
        }
        
        path.reverse();

        if(path[0] == s) return path;
        return [];
    }*/

    vector<int> bfs (int v){
        queue<int> q;
        vector<int> prev;

        visited[v] = true;
        q.push(v);

        while(!q.empty()){
            int currentNode = q.front();
            q.pop();
            cout << currentNode << " ";
            prev.push_back(currentNode);

            for (int neighbor: adj[currentNode])
            {
                if(!visited[neighbor]){
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        return prev;
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

    /*
    int start_node = 0;
    vector<bool> visited ;

    for(int i = 0; i<n; i++){
        visited.push_back(false);
    }

    printf("%d", visited.size());

    for (int i = 0; i < n; i++)
    {
        cout << visited[i] << endl;
    }
    
    g.dfs(visited, 0);
    */

    // g.dfs(2);
    // g.findComponents(n);
    g.bfs(3);
    return 0;
}