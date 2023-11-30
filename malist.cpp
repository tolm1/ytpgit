#include <iostream>
using namespace std;

int max_in_list(int* a,int n) {
    int ma = 100000000;
    for (int i = 0; i < n; i++) {
        if (a[i] < ma) {
            ma = a[i];
        }
    }

    return ma;
}

int mait(){
    return 0;
}