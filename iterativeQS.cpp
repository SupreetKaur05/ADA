#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int Partition(vector<int>& a, int p, int q) {
    int pivot = a[q];
    int i = p - 1;

    for (int j = p; j <= q - 1; j++) {
        if (a[j] <= pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[q]);
    return i + 1;
}

void IterativeQuickSort(vector<int>& a, int p, int q) {
    stack<int> s;
    s.push(p);
    s.push(q);

    while (!s.empty()) {
        q = s.top(); s.pop();
        p = s.top(); s.pop();

        if (p < q) {
            int j = Partition(a, p, q);

            if (j - 1 > p) {
                s.push(p);
                s.push(j - 1);
            }

            if (j + 1 < q) {
                s.push(j + 1);
                s.push(q);
            }
        }
    }
}

int main() {
    vector<int> a = {10, 7, 8, 9, 1, 5};
    int n = a.size();

    cout << "Original array: ";
    for (int i : a) cout << i << " ";
    cout << endl;

    IterativeQuickSort(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i : a) cout << i << " ";
    cout << endl;

    return 0;
}
