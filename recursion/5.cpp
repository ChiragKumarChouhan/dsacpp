
//chaeck is array is sorted or not

#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> arr, int n) {
    if (n == 1 || n == 0) {
        return true;
    } else {
        return (arr[n - 1] >= arr[n - 2]) && isSorted(arr, n - 1);
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    if (isSorted(arr, arr.size())) {
        cout << "Array is sorted";
    } else {
        cout << "Array is not sorted";
    }

    return 0;
}
