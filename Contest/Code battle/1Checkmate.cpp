/*
	https://practice.geeksforgeeks.org/contest/code-battle/problems/#
	030721
	After contest ended.
*/
class Solution {
    public:
    bool checkmate(int a, int b, int x, int y){
        if(a==x | b==y | (b-a)==(y-x) | (b+a)==(y+x))
            return 0;
        else    
            return 1;
    }
};
