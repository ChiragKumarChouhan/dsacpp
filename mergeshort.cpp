#include <iostream>
#include <vector>

using namespace std;

// merging
void ms(vector<int> &arr, int st, int mid, int end) // FIXED: pass by reference
{
    vector<int> temp;
    int i = st, j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int idx = 0; idx < temp.size(); idx++) // FIXED: < instead of <=
    {
        arr[idx + st] = temp[idx];
    }
}

void merge(vector<int> &arr, int st, int end) // FIXED: pass by reference
{
    if (st >= end)
        return; // FIXED: base condition

    int mid = st + (end - st) / 2;

    merge(arr, st, mid);
    merge(arr, mid + 1, end);

    ms(arr, st, mid, end); // FIXED: call correct function
}

int main()
{
    vector<int> arr = {1, 3, 5, 2, 8, 7, 6};
    merge(arr, 0, arr.size() - 1);

    for (int val : arr)
    {
        cout << val << " ";
    }

    cout << endl;
    return 0;
}
