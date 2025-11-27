
#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n=5;
    int arr[5] = {1,2,3,4,5};
    for(int st = 0 ;st<n;st++){
        for(int end = st ; end<n;end++){
            for(int i =st;i<=end;i++){
                cout<<arr[i];
            }
            cout<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}

//MAXIMUM SUBARRAY SUM 

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n=5;
    int arr[5] = {1,2,3,4,5};
     int max_sum = INT_MIN; 
    for(int st = 0 ;st<n;st++){
        int currsum = 0; 
        
        for(int end = st ; end<n;end++){
            currsum = currsum + arr[end];
            max_sum =  max(currsum , max_sum);
            
            
        }
    }
    cout<<max_sum;
    return 0;
}

//KADANE'S ALGORITHM 

