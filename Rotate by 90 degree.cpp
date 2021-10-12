/*
	https://practice.geeksforgeeks.org/problems/rotate-by-90-degree0356/1/?company[]=Amazon&company[]=Amazon&problemType=functional&page=14&sortBy=submissions&query=company[]AmazonproblemTypefunctionalpage14sortBysubmissionscompany[]Amazon
	Done
	010821
	Amazon
*/
void rotate(vector<vector<int> >& matrix)
{
    int i,j,size_;
    size_=matrix.size();
    vector<vector<int>> vec(size_);
    for(i=0;i<size_;i++)
        for(j=size_-1;j>-1;j--)
            vec[size_-j-1].push_back(matrix[i][j]);
    matrix=vec;
}