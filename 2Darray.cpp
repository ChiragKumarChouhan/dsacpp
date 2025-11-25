#include<iostream>
using namespace std;

int main(){
    int matrix[4][3];
    int rows = 4;
    int column = 3;

    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cin >> matrix[i][j];
        }
    }

    int arr[3] = {1,2,3};

    cout << matrix << endl;
    cout << arr << endl;
    cout << matrix[2][1] << endl;
    matrix[2][1] = 91;
    cout << matrix[2][1] << endl;

    for(int i=0;i<rows;i++){
        for(int j=0;j<column;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


// linear search in 2D array

#include<iostream>
using namespace std;

bool linearsearch(int mat[][3],int raw,int column,int key){
    for(int i=0;i<raw;i++){
        for(int j=0;j<column;j++){
            if(mat[i][j]==key){
                return true;
            }
        }
    }
}


int main(){
    int mat[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int raw=4;
    int column=3;
    int key;
    cout<<"enter the key for search:";
    cin>>key;
    cout<<linearsearch(mat,raw,column,key)<<endl;

}


//MAXRAW SUM
#include<iostream>
#include<climits> // for INT_MIN
using namespace std;

int maxraw(int mat[][3], int raw, int column) {
    int maxrawsum = INT_MIN;
    for(int i = 0; i < raw; i++) { // for max column sum make j th loop as a upper loop and i th loop lower loop

        int rawsum = 0;
        for(int j = 0; j < column; j++) {
            rawsum += mat[i][j];
        }
        maxrawsum = max(maxrawsum, rawsum);
    }
    return maxrawsum;
}

int main() {
    int mat[4][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
        {10,11,12}
    };
    int raw = 4, column = 3;

    cout << maxraw(mat, raw, column) << endl;
    return 0;
}


// diagonal sum


 #include<iostream>
 using namespace std;

int diasum(int mat[][4],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=mat[i][j];
            }else if(j==n-1-i){
                sum+=mat[i][j];
            }
        }

    } return sum;
}

 int main(){

    int mat[4][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6},{5,6,7,8}};
    int n=4;

    cout<<diasum(mat,n)<<endl;
        return 0;
 }
// search in 2d matrix leetcode

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {

        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==target){
                    return true;
                }
            }
        }
        return false;
    }
};
