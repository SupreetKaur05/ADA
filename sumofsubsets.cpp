#include <bits/stdc++.h>
using namespace std;
bool flag = 0;
void PrintSubsetSum(int i, int n, int set[], int targetSum, vector<int>& subset) {
    if (targetSum == 0) {
        flag = 1;
        cout << "[ ";
        for (int j = 0; j < subset.size(); j++) cout << subset[j] << " ";
        cout << "] ";
        return;
    }
    if (i == n) return;
    PrintSubsetSum(i + 1, n, set, targetSum, subset);
    if (set[i] <= targetSum) {
        subset.push_back(set[i]);
        PrintSubsetSum(i + 1, n, set, targetSum - set[i], subset);
        subset.pop_back();
    }
}
int main() {
    int n, sum;
    cout << "Enter number of elements: ";
    cin >> n;
    int set[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> set[i];
    cout << "Enter target sum: ";
    cin >> sum;
    vector<int> subset;
    cout << "Subsets with sum " << sum << ": ";
    PrintSubsetSum(0, n, set, sum, subset);
    if (!flag) cout << "There is no such subset";
    cout << endl;
    return 0;
}

