/*
	https://practice.geeksforgeeks.org/problems/maximum-area-rectangle/1/?page=1&query=page1#
	Done
	Java
*/
static int calculate_Area(Rectangle arr[]){
	int area=1,i;
    for(i=0;i<arr.size();i++)
		area=max(area,arr[i]*arr[i+1]);
    return area;
}