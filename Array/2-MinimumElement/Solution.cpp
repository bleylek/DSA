#include <iostream>
#include <vector>
using namespace std;

int minElement(const vector<int> &arr){
    
    int sizeArr = arr.size();
    int currentMin = arr[0];
    
    for(int i = 1; i<sizeArr; i++)
    {
        if(arr[i] < currentMin)
        {
            currentMin = arr[i];
        }
    }
    
    return currentMin;
}

int main(){
    
    vector<int> array = {1,2,3,4};
    cout << minElement(array);
    
    return 0;
}

// Time Complexity: O(n) where n is the size of the array
// Space Complexity: O(1)