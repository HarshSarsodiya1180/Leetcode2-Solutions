class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int rowI=0,colI=col-1;

        while(rowI<row && colI>=0){
            int elem=matrix[rowI][colI];
            if(elem==target)
                return true;
            else if(elem<target)
                rowI++;
            else
                colI--;
        }
        return false;
    }
};