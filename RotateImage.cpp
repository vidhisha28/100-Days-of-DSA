class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //finding transpose
        int c=matrix[0].size();
        for(int i = 0 ; i < matrix.size(); i++){
           
            for(int j = i ; j < matrix[i].size();j++){
                if(i!=j){
                int temp = matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
    }
        //swapping elements
    
        for(int i = 0 ; i < matrix.size();i++){
            for(int j = 0 ; j < c/2 ; j++ ){
                int temp = matrix[i][j];
               matrix[i][j]=matrix[i][c-j-1];
                matrix[i][c-j-1]=temp;
            }
        }
            
    }     
    
};
