#include <bits/stdc++.h>
using namespace std;
bool isValidColoring(vector<int> adj[], vector<int> color) {
    int n = color.size();
    for (int i = 0; i < n; i++) {
        for (auto neighbor : adj[i]) {
            if (i != neighbor && color[i] == color[neighbor]) 
                return false;
        }
    }
    return true;
}
bool generateColoring(int i, vector<int> color, int m, vector<int> adj[]) {
    int n = color.size();
    if (i >= n) {
        return isValidColoring(adj, color);
    }

    for (int c = 0; c < m; c++) {
        color[i] = c;
        if (generateColoring(i + 1, color, m, adj)) 
            return true;
        color[i] = -1;
    }
    return false;
}

bool graphColoring(int V, vector<vector<int>> &edges, int m) {
    vector<int> adj[V];
    for (auto edge : edges) {
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }

    vector<int> color(V, -1);
    return generateColoring(0, color, m, adj);
}

int main() {
    int V, E, m;
    cout << "Enter number of vertices: ";
    cin >> V;

    cout << "Enter number of edges: ";
    cin >> E;

    vector<vector<int>> edges;
    cout << "Enter edges (u v pairs, 0-based index):\n";
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        edges.push_back({u, v});
    }

    cout << "Enter number of colors: ";
    cin >> m;

    bool canColor = graphColoring(V, edges, m);
    cout << (canColor ? "true" : "false") << endl;

    return 0;
}
