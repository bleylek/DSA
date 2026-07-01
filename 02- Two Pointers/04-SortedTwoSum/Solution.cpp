#include <iostream>
#include <vector>
using namespace std;


bool sortedTwoSum(const vector<int>&arr, int target){
    
    int left = 0;
    int right = arr.size()-1;
    
    while(left<right)
    {
        int sum = arr[left] + arr[right];
        
        if(sum == target)
        {
            return true;
        }
        else if (sum < target)
        {
            left++;
        }
        else if (sum > target)
        {
            right--;
        }
    }
    return false;
}


int main(){
    
    vector<int>array = {1, 2, 4, 7, 11, 15};
    int target = 15;
    
    if(sortedTwoSum(array,target))
    {
        cout << "true";
    }
    else{
        cout << "false";
    }
    
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)