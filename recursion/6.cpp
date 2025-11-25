#include <iostream>
#include <vector>
using namespace std;

int binary(vector<int> arr, int target, int st, int end) {
// in recursive function order should be correct in everywhere

    if (st > end)
        return -1;

    int mid = st + (end - st) / 2;

    if (arr[mid] == target)
        return mid;

    else if (arr[mid] < target)
        return binary(arr, target, mid + 1, end);

    else
        return binary(arr, target, st, mid - 1);
}

int main(){

}
