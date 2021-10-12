/*
	https://practice.geeksforgeeks.org/problems/sorted-matrix2333/1
	010821
	Done
*/

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        int i,j;
        vector<int> vec(N*N);
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                vec[N*i+j]=Mat[i][j];
            }
        }
        sort(vec.begin(),vec.end());
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                Mat[i][j]=vec[N*i+j];
            }
        }
        return Mat;
    }
};