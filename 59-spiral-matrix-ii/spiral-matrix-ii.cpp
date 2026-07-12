class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> Matrix(n, vector<int>(n));
        int a=n-1;
        int b=n-1;
        int up=0;
        int down=a;
        int left=0;
        int right=a;
        int num=1;
        while(up<=down && left<=right){
            for(int i=left;i<=right;i++){
                Matrix[up][i]=num++;
            }
            up++;
            
        for(int i=up;i<=down;i++){
            Matrix[i][right]=num++;
        }
        right--;
        if(up<=down){
            for(int i=right;i>=left;i--){
                Matrix[down][i]=num++;
            }
            down--;
        }
        if(left<=right){
        for(int i=down;i>=up;i--){
            Matrix[i][left]=num++;
        }
        left++;
        }
    }
        return Matrix;
    }
};