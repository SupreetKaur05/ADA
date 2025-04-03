de <iostream>
#include <vector>
#include <climits>
using namespace std;

int numberofstages(const vector<vector<int>>& graph) {
    int n = graph.size();
    vector<int> dp(n, INT_MAX);
    dp[n - 1] = 0;

    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j < n; ++j) {
            if (graph[i][j] == 1 && dp[j] != INT_MAX) {
                dp[i] = min(dp[i], dp[j] + 1);
            }
        }
    }

    return dp[0] == INT_MAX ? 0 : dp[0]; // If dp[0] is still INT_MAX, there is no path
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;
    
    vector<vector<int>> graph(n, vector<int>(n));
    cout << "Enter the adjacency matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> graph[i][j];
        }
    }

    int stages = numberofstages(graph);
    cout << "Number of stages: " << stages << endl;

    return 0;
}
