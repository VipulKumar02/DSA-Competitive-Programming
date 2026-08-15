#include <iostream>
#include <vector>
#include <list>
using namespace std;

class Graph {
    int V;          // number of vertices
    list<int> *l;   // adjacency list

public:
    Graph(int V) {
        this->V = V;
        l = new list<int>[V];   // array of lists
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(u);  // undirected graph
    }

    // helper function for DFS
    void dfsHelper(int node, vector<bool> &visited) {
        visited[node] = true;
        cout << node << " ";

        for (int nbr : l[node]) {
            if (!visited[nbr]) {
                dfsHelper(nbr, visited);
            }
        }
    }

    // DFS Traversal
    void dfs(int src) {
        vector<bool> visited(V, false);
        cout << "DFS starting from node " << src << ": ";
        dfsHelper(src, visited);
        cout << endl;
    }
};

int main() {
    Graph g(5);

    // Same graph as your image: 0-1, 1-2, 1-3, 2-4
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);

    g.dfs(0);

    return 0;
}
