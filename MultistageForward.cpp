#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int multistageGraph(int n, vector<vector<int>>& graph) {
    vector<int> cost(n, INT_MAX);
    cost[n - 1] = 0;

    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            if (graph[i][j] != -1) {
                cost[i] = min(cost[i], graph[i][j] + cost[j]);
            }
        }
    }
    return cost[0];
}

int main() {
    int n = 6;
    vector<vector<int>> graph(n, vector<int>(n, -1));

    graph[0][1] = 10;
    graph[0][2] = 20;
    graph[1][3] = 30;
    graph[2][3] = 10;
    graph[2][4] = 50;
    graph[3][5] = 10;
    graph[4][5] = 30;

    int minCost = multistageGraph(n, graph);
    cout << "Minimum cost to reach destination: " << minCost << endl;

    return 0;
}
