#include <iostream>
#include <vector>
using namespace std;


class Solution{
public:

    bool isSafe(vector<string> &board,int row, int col,int n){
        
        //checking horizontally
        for(int j=0;j<n;j++){
            if(board[row][j]=='Q'){
                return false;
            }
        }

        //checking vetically
        for(int i=0;i<n;i++){
            if(board[i][col]=='Q'){
                return false;
            }
        }


        //checking left diagonal
        for(int i=row,j=col; i>=0 && j>=0; i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }

        //checking right diagonal
        for(int i=row,j=col; i>=0 && j<n; i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }


        return true;
    }

    void nQueens(vector<string> &board,int row, int n, vector<vector<string>> &ans){

        if(row == n){
            ans.push_back({board});   
            return;
        }


        for(int j =0;j<n;j++){
            if(isSafe(board,row,j,n)){
                board[row][j] = 'Q';
                nQueens(board,row+1,n,ans);
                board[row][j] = '.';
            }
        }
    }

    vector<vector<string>> solveQueens(int n){
        vector<string> board(n, string(n,'.')); 
        vector<vector<string>> ans;
        nQueens(board,0,n,ans);
        return ans;
    }

};

int main() {
    Solution obj;
    int n = 4;
    vector<vector<string>> ans = obj.solveQueens(n);
    vector<vector<int>> ans1; // Stores column positions of queens

    // Iterating through all solutions
    for (const auto& solution : ans) {
        vector<int> temp; // Reset for each solution
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (solution[i][j] == 'Q') {
                    temp.push_back(j + 1); // Convert to 1-based index
                }
            }
        }
        ans1.push_back(temp);
    }

    // Printing the integer representation of solutions
    for (const auto& sol : ans1) {
        for (int num : sol) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}