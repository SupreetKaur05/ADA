#include <iostream>
#include <climits>

using namespace std;

#define V 4

void dijkstra(int graph[V][V], int src) {
    int dist[V];
    bool sptSet[V];
    
    for (int i = 0; i < V; i++) {
        dist[i] = INT_MAX;
        sptSet[i] = false;
    }
    
    dist[src] = 0;

    for (int count = 0; count < V - 1; count++) {
        int min = INT_MAX, u;
        
        for (int v = 0; v < V; v++) {
            if (!sptSet[v] && dist[v] <= min) {
                min = dist[v];
                u = v;
            }
        }
        
        sptSet[u] = true;

        for (int v = 0; v < V; v++) {
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    for (int i = 0; i < V; i++) {
        cout << "Vertex " << i << " distance from source: " << dist[i] << endl;
    }
}

int main() {
    int graph[V][V] = {
        {0, 10, 0, 0},
        {10, 0, 5, 0},
        {0, 5, 0, 2},
        {0, 0, 2, 0}
    };

    dijkstra(graph, 0);

    return 0;
}
