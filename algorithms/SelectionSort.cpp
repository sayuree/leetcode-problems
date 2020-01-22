/*
 * @type of arr: integer array
 * @return type: integer array
 */
 
class Solution {
public:
	vector<int> selectionSort(vector<int>& arr) {
		// write your awesome code here
        int min_index=0;
        int temp=0;
        for(int i=0;i<arr.size()-1;++i){
            min_index=i;
            for(int j=i+1;j<arr.size();++j){
                if(arr[j]<arr[min_index]){
                    min_index=j;}
            }
        temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
        }
        return arr;
    }
};