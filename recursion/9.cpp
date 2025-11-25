// n queens


 class Solution
 {
 public:
bool issafe(vector<string>&board,int row,int col ,int n){ // time complexity = O(n)
   //horizontal
   for(int j=0;j<n;j++){
      if(board[row][j]=='Q'){
         return false;
      }
   }

   // verticle
   for(int i=0;i<n;i++){
      if(board[i][col]=='Q'){
         return false;
      }
   }

   //diagonlly
   // left diagonal

   for(int i=row;int j=col;i>=0&&j>=0;i--;j--){
      if(board[i][j]=='Q'){
         return false;
      }
   }

   //right diagonal

   for(int i=row;j=col;i>=0&&j<n;i--;j++){
      if(board[i][j]=="Q"){
         return false;
      }
   }
}


    void queens(vector<string> &board, int row, int n, vector<vector<string>> &ans)
    {
       if (n == row)
          ans.push_back(board) return; // base case

          for(int j=0;j<n;j++){
            if(issafe(board,raw,j,n)){// is queen safe {this function check is queen safe at the place board[row][j]='Q'}
               board[row][j]='Q';//queen placed
               queens(board,row+1,n,ans);
               board.[row][j]=".";//backtracking

            }
          }
    }
    vector<vector<string>> solveNQueens(int n)
    {
      vector<string>board(n,string(n,"."));
      vector<vector<string>>ans;
      queens(board,0,n,ans);
    }
 };


