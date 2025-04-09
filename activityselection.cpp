#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct activity {
    int start, end;
};

void solve(int n, vector<activity> actvty) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for (auto act : actvty) {
        pq.push({act.end, act.start});  // (end, start)
    }

    cout << "\nThe activities selected in the following order:\n";

    if (pq.empty()) {
        cout << "No activities provided.\n";
        return;
    }

    auto current = pq.top();
    int start = current.second;
    int end = current.first;
    pq.pop();

    cout << "{" << start << "," << end << "} ";

    while (!pq.empty()) {
        current = pq.top();
        pq.pop();

        if (current.second >= end) {
            start = current.second;
            end = current.first;
            cout << "{" << start << "," << end << "} ";
        }
    }

    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of activities: ";
    cin >> n;

    vector<activity> actvty(n);

    cout << "Enter start and end time for each activity:\n";
    for (int i = 0; i < n; i++) {
        cout << "Activity " << i + 1 << " - Start: ";
        cin >> actvty[i].start;
        cout << "Activity " << i + 1 << " - End: ";
        cin >> actvty[i].end;
    }

    solve(n, actvty);

    return 0;
}

