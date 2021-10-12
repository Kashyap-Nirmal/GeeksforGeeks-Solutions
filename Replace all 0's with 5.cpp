/*
	https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1/?company[]=Amazon&company[]=Amazon&problemType=functional&page=5&sortBy=submissions&query=company[]AmazonproblemTypefunctionalpage5sortBysubmissionscompany[]Amazon#
	010821
	Amazon
	Done
*/
/*you are required to complete this method*/
int convertFive(int n) {
    string num = to_string(n);
    int i=0;
    for(i=0;i<num.length();i++)
    {
        if(num[i]=='0')
            num[i]='5';
    }
    n=stoi(num);
    return n;
}