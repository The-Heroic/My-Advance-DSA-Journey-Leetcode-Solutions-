#include <iostream>
using namespace std;

void q(int* a, int l, int r) {
    if (l >= r) return;
    int p = a[r], i = l;
    for (int j = l; j < r; j++) 
        if (a[j] < p) { int t = a[i]; a[i] = a[j]; a[j] = t; i++; }
    int t = a[i]; a[i] = a[r]; a[r] = t;
    q(a, l, i - 1); q(a, i + 1, r);
}

void m(int* a, int l, int r) {
    if (l >= r) return;
    int mid = l + (r - l) / 2;
    m(a, l, mid); m(a, mid + 1, r);
    int i = l, j = mid + 1, k = 0, n = r - l + 1, t[n];
    while (i <= mid && j <= r) t[k++] = (a[i] < a[j]) ? a[i++] : a[j++];
    while (i <= mid) t[k++] = a[i++];
    while (j <= r) t[k++] = a[j++];
    for (i = 0; i < n; i++) a[l + i] = t[i];
}

void hify(int* a, int n, int i) {
    int max = i, l = 2 * i + 1, r = 2 * i + 2;
    if (l < n && a[l] > a[max]) max = l;
    if (r < n && a[r] > a[max]) max = r;
    if (max != i) {
        int t = a[i]; a[i] = a[max]; a[max] = t;
        hify(a, n, max);
    }
}

void hsort(int* a, int n) {
    for (int i = n / 2 - 1; i >= 0; i--) hify(a, n, i);
    for (int i = n - 1; i > 0; i--) {
        int t = a[0]; a[0] = a[i]; a[i] = t;
        hify(a, i, 0);
    }
}

int main() {
    int n, c;
    cout << "Size: "; cin >> n;
    int a[n], b[n];
    cout << "Elements: "; for (int i = 0; i < n; i++) cin >> a[i];

    while (cout << "\n1.Quick 2.Merge 3.Heap 4.Exit: " && cin >> c && c != 4) {
        for (int i = 0; i < n; i++) b[i] = a[i];
        switch (c) {
            case 1: q(b, 0, n - 1); break;
            case 2: m(b, 0, n - 1); break;
            case 3: hsort(b, n); break;
            default: cout << "Invalid choice!"; continue;
        }
        for (int i = 0; i < n; i++) cout << b[i] << " ";
    }
    return 0;
}