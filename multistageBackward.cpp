#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int shortestPathBackward(const vector<vector<int>>& graph, int source, int sink) {
    int n = graph.size();
    vector<int> dp(n, INT_MAX);
    dp[sink] = 0;

    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j < n; ++j) {
            if (graph[i][j] == 1 && dp[j] != INT_MAX) {
                dp[i] = min(dp[i], dp[j] + 1);
            }
        }
    }

    return dp[source] == INT_MAX ? -1 : dp[source];
}

int main() {
    int n, source, sink;
    cout << "Enter the number of nodes: ";
    cin >> n;

    vector<vector<int>> graph(n, vector<int>(n));
    cout << "Enter the adjacency matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> graph[i][j];
        }
    }

    cout << "Enter the source node: ";
    cin >> source;
    cout << "Enter the sink node: ";
    cin >> sink;

    int stages = shortestPathBackward(graph, source, sink);
    cout << "Number of stages from source to sink: " << stages << endl;

    return 0;
}
