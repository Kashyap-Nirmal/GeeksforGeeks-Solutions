/*
	https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1
	040621
	Must do new
	Hint:
		VIII-8
		VIIII-9 is incorrect.
		9-IX i.e. 1 less than 10.
*/
int romanToDecimal(string &str) {
    int temp=0,temp1=0,temp2=0;
    for(int i=0;i<str.length();i++)
    {
        switch (str.at(i))
        {
            case 'I':
                temp1=1;
                break;
            case 'V':
                temp1=5;
                break;
            case 'X':
                temp1=10;
                break;
            case 'L':
                temp1=50;
                break;
            case 'C':
                temp1=100;
                break;
            case 'D':
                temp1=500;
                break;
            case 'M':
                temp1=1000;
                break;    
        }
        if(temp1>temp2)
            temp=temp+temp1-2*temp2;
        else
            temp=temp+temp1;
        temp2=temp1;
    }
    return temp;
}