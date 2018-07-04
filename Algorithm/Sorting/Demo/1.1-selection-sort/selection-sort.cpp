// selection_sort

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int A[1000], n;

void swap(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void selection_sort(int a[], int n) {
    for (int i = 0; i <= n-2; i++) {
        int idx_min_from_i = i;

        for (int j = i+1; j <= n-1; j++)
            if (a[j] < a[idx_min_from_i])
                idx_min_from_i = j;

        if (idx_min_from_i != i)
            swap(a[i], a[idx_min_from_i]);
    }
}

int main() {
    cin >> n;
    for (int i=0; i<n; i++) cin >> A[i];
    
    selection_sort(A, n);
    
    for (int i=0; i<n; i++) cout << A[i] << " "; cout << endl;
}
