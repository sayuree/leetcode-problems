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