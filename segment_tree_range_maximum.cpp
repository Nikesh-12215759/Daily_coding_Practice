#include <iostream>
#include<climits>
#include<vector>
using namespace std;

vector<long long> arr;
vector<long long> seg;

void max_build(int idx, int low, int high) {
    if (low == high) {
        seg[idx] = arr[low];
        return;
    }
    int mid = (low + high) / 2;
    build(2 * idx + 1, low, mid);
    build(2 * idx + 2, mid + 1, high);
    seg[idx] = max(seg[2 * idx + 1], seg[2 * idx + 2]);
}
long long MAX_QUERY(int idx, int low, int high, int l, int r) {
    
    if (high < l || low > r) return LLONG_MIN;

    if (low >= l && high <= r) return seg[idx];

    int mid = (low + high) / 2;
    long long left = MAX_QUERY(2 * idx + 1, low, mid, l, r);
    long long right = MAX_QUERY(2 * idx + 2, mid + 1, high, l, r);
    return max(left, right);
}
int main() {
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;

    arr.resize(n);
    seg.resize(4 * n);
    
    cout<<"Enter the values of array: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    max_build(0, 0, n - 1);

    cout << "Enter the number of queries: " << endl;
    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cout << "Enter value of l and r: " << endl;
        cin >> l >> r;
        cout << "MAXIMUM value in range "<<l<<" to "<<r<<" is: "<<MAX_QUERY(0, 0, n - 1, l, r) << endl;
    }
    return 0;
}
