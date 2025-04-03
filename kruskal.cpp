#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int src, dest, weight;
};

struct DisjointSet {
    vector<int> parent, rank;

    DisjointSet(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] != x)
            parent[x] = find(parent[x]);
        return parent[x];
    }

    void unionSet(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            } else if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            } else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
        }
    }
};

bool compare(Edge a, Edge b) {
    return a.weight < b.weight;
}

void kruskalMST(int V, vector<Edge>& edges) {
    DisjointSet ds(V);

    sort(edges.begin(), edges.end(), compare);

    vector<Edge> result; // To store the resulting MST

    for (auto edge : edges) {
        int x = ds.find(edge.src);
        int y = ds.find(edge.dest);

        if (x != y) {
            result.push_back(edge);
            ds.unionSet(x, y);
        }
    }

    cout << "Edge \tWeight\n";
    for (auto edge : result) {
        cout << edge.src << " - " << edge.dest << "\t" << edge.weight << endl;
    }
}

int main() {
    int V = 4; // Number of vertices
    vector<Edge> edges = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };

    kruskalMST(V, edges);

    return 0;
}
