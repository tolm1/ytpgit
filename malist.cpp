#include <iostream>
using namespace std;

int max_in_list(int* a,int n) {
    int ma = -100000000;
    for (int i = 0; i < n; i++) {
        if (a[i] > ma) {
            ma = a[i];
        }
    }

    return ma;
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << max_in_list(arr, n);
}