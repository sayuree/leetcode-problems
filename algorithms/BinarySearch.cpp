/**
* @input arr : Integer array
* @input l: left most index of array
* @input l: right most index of array
* @input target: element to be searched
* @output: index of the target(0 based)
*/
class Solution {
public:
	int binarySearch(int arr[], int l, int r, int target) {
		// write your awesome code here
// comparison of r and l is important!
        if(r>=l){
        int guess=(l+r)/2;
        if(arr[guess]==target){
            return guess;}
       if(arr[guess]<target){
           return binarySearch(arr,guess+1,r,target);
       }
        return binarySearch(arr,l,guess-1,target);
        }
        return -1;
	}
};
