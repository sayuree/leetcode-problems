//O(n) time and O(n) space;
// Making elements of vector as a key of a new map and if we encounter it again we increment the value of a map for a corresponding key
//then we compare whether it is repeating N times as it was stated in the problems description: Array is 2N and element is repeated  N times

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
    map<int, int> container;
        for(int item:A){
            container[item]++;
            if(container[item]==A.size()/2){
                return item;
            }
        }
        return -1;
    }
};
//O(NlogN) time and O(1) space
//no use of maps, but of sort() built in function, which is O(nlogn)
//Use the property of N times repeated element in 2N array: 
//it means that first element either should be equal to the element at
//the center or the answer would be the one next to the central element

class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
    sort(A.begin(),A.end());
        if(A[0]==A[A.size()/2-1]){
            return A[0];
        }else{
            return A[A.size()/2];
        }
    }       
};