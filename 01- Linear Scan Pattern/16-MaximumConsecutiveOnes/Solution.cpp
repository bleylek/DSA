#include <iostream>
#include <vector>
using namespace std;


int maxConsecutiveOnes(const vector<int>&arr){
    
    int currentCount = 0;
    int maxCount = 0;
    
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i] == 1)
        {
            currentCount++;
            if(currentCount > maxCount)
            {
                maxCount = currentCount;
            }
        }
        else
        {
            currentCount = 0;
        }
    }
    return maxCount;
}

int main(){
    
    vector <int> myArray = {1, 1, 0, 1, 1, 1};
    cout << maxConsecutiveOnes(myArray);
    
    return 0;
}

// Time Complexity: O(n) where n is the number of elements in the input array
// Space Complexity: O(1)