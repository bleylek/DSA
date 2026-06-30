#include <iostream>
#include <vector>
using namespace std;

int numberOccurences(const vector<int>&arr, int target){
    
    int result = 0;
    
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i] == target)
        {
            result++;
        }
    }
    
    return result;
}


int main(){
    
    vector<int>array={1, 2, 3, 2, 4, 2, 5};
    int target = 2;
    cout  << numberOccurences(array, target);
    return 0;
}

// Time Complexity: O(n), where n is the number of elements in the input array
// Space Complexity: O(1)