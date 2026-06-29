#include <iostream>
#include <vector>
using namespace std;

int maxElement(const vector<int>&array)
{
    int currentMax = array[0];
    for(int i = 1; i < array.size(); i++)
    {
        if(array[i] > currentMax)
        {
            currentMax = array[i];
        }
    }
    return currentMax;
}

int main(){
    
    vector<int>arr = {4, 1, 9, 2, 7};
    cout << maxElement(arr);
    return 0;
}

// Time Complexity: O(n) where n is the size of the array
// Space Complexity: O(1)
