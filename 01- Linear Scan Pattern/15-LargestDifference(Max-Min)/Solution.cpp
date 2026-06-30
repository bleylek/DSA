#include <iostream>
#include<vector>
#include<climits>
using namespace std;


int differenceMaxMin(const vector<int>&arr){
    
    if(arr.size() == 1)
    {
        return 0;
    }
    
    int minValue = INT_MAX;
    int maxValue = INT_MIN;
    
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i] < minValue)
        {
            minValue = arr[i];
        }
        
        if(arr[i] > maxValue)
        {
            maxValue = arr[i];
        }
    }
    
    return maxValue - minValue;
}

int main(){
    
    vector<int> myVector = {4, 7, -2, 15, 0, 9};
    cout <<differenceMaxMin(myVector);
    
    return 0;
}

// Time Complexity: O(n), where n is the number of elements in the input array
// Space Complexity: O(1)