#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr={11,2,44,3,6,77,38};
    //bubble sorting algorithm
    int temp=0;
    for(int i=0; i<arr.size()-1;i++){
        for(int j=0;j<arr.size()-1-i;j++){
            if (arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    //insertion sort
    vector<int> arr2={45,65,33,1,2,7,6,23};
    int key=0;
    int j=0;
    for(int i=1;i<arr2.size();i++){
        key=arr2[i];
        j=i-1;
        while(j>=0&&arr2[j]>key){
            arr2[j+1]=arr2[j];
            --j;
        }
        arr2[j+1]=key;
    }

    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
       return 0;
}

