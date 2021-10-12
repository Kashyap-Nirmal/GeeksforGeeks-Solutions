/*
	https://practice.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1
	030621
	Must do New
	Logic:		
		Check factorials from 1 to 20. And then from 1 to 100.
		https://www.mymathtables.com/numbers/100-factorial-tables-chart.html
		Hint: at 25 zeroes increases by 2 not 1.!!
*/
class Solution
{
public:
    int trailingZeroes(int N)
    {
        int sum=0,temp=1;
        for(int i=1;temp<N;i++){
            temp=pow(5,i);
            sum+=N/temp;
        }
        return sum;
    }
};
