#include <iostream>
using namespace std;

void countSort(int* a, int n) {
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max) max = a[i];

    int count[max + 1], out[n];
    for (int i = 0; i <= max; i++) 
        count[i] = 0;
    for (int i = 0; i < n; i++) 
        count[a[i]]++;
    for (int i = 1; i <= max; i++) 
        count[i] += count[i - 1];
    
    for (int i = n - 1; i >= 0; i--) {
        out[count[a[i]] - 1] = a[i];
        count[a[i]]--;
    }
    for (int i = 0; i < n; i++) 
        a[i] = out[i];
}

void radixCountSort(int* a, int n, int exp) {
    int out[n], count[10] = {0};
    for (int i = 0; i < n; i++) count[(a[i] / exp) % 10]++;
    for (int i = 1; i < 10; i++) count[i] += count[i - 1];
    for (int i = n - 1; i >= 0; i--) {
        out[count[(a[i] / exp) % 10] - 1] = a[i];
        count[(a[i] / exp) % 10]--;
    }
    for (int i = 0; i < n; i++) a[i] = out[i];
}

void radixSort(int* a, int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) if (a[i] > max) max = a[i];
    for (int exp = 1; max / exp > 0; exp *= 10)
        radixCountSort(a, n, exp);
}

void bucketSort(int* a, int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) if (a[i] > max) max = a[i];

    int count[max + 1];
    for (int i = 0; i <= max; i++) count[i] = 0;
    for (int i = 0; i < n; i++) count[a[i]]++;

    int k = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i]-- > 0) a[k++] = i;
    }
}

int main() {
    int n, c;
    cout << "Enter size: "; cin >> n;
    int a[n], b[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    while (true) {
        cout << "\n1.Count 2.Radix 3.Bucket 4.Exit: ";
        cin >> c;
        if (c == 4) break;

        for (int i = 0; i < n; i++) b[i] = a[i]; 

        switch (c) {
            case 1: countSort(b, n); break;
            case 2: radixSort(b, n); break;
            case 3: bucketSort(b, n); break; 
            default: cout << "Invalid!"; continue;
        }

        cout << "Sorted: ";
        for (int i = 0; i < n; i++) cout << b[i] << " ";
    }
    return 0;
}