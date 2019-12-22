    #include <bits/stdc++.h>

    using namespace std;
// 2D array problem on HackerRank
    // Complete the hourglassSum function below.
    int hourglassSum(vector<vector<int>> arr) {
        int row=arr.size();
        int col=arr[0].size();
        int temp=0;
        int max=INT_MIN;
        for(int i=0;i<row-2;i++){
            for(int j=0;j<col-2;j++){
                temp=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
                if(temp>=max){
                    max=temp;
                }
            }
        }
        return max;

    }