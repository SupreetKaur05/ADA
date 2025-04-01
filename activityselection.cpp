
#include <iostream>
using namespace std;

struct activity{

    int start, end;
};


void solve(int n, vector<activity> actvty){

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int x, y;
    for (auto x: actvty){
    
        // Since we sort by end time so we will insert
        //activities in priority queue with a finish and start time
        pq.push({x.end, x.start});
    }

    cout << "The activities are selected in following order: ";
    
    // We will always select the activity with least finish time
    x = 0;

    auto current = pq.top();
    auto start = current.second;
    auto end = current.first;

    pq.pop();

    cout << "{" << start << "," << end << "} ";

    while (!pq.empty()){
    
        current = pq.top();
        pq.pop();

      
        if (current.second >= end){
        
            start = current.second;
            end = current.first;

            cout << "{" << start << "," << end << "} ";
        }
    }
}
int main(){

    int n = 6;
    vector<activity> actvty = {{1, 2}, {4, 4}, {5, 10}, {9, 10}, {7, 8}, {2, 4}};
    solve(n, actvty);
}
