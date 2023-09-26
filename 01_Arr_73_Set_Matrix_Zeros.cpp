//Link: https://leetcode.com/problems/set-matrix-zeroes/description/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        queue<pair<int, int>>q;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == 0){
                    q.push({i, j});
                }
            }
        }

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int i=0; i<n; i++){
                matrix[row][i] = 0;
            }
            for(int i=0; i<m; i++){
                matrix[i][col] = 0;
            }
        }
    }
};