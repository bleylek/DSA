#include <iostream>
#include <vector>
using namespace std;

void maxElementIndex(const vector<int> &arr){
    
    int maxElement = arr[0];
    int maxIndex = 0;
    
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]>maxElement)
        {
            maxElement = arr[i];
            maxIndex = i;
        }
    }
    cout <<maxIndex;
}

int main(){
    
    vector<int> arr = {4, 7, -2, 15, 0, 9};
    maxElementIndex(arr);
    
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)