#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondMaximum(const vector<int>&arr){
    
    int firstMaximum = INT_MIN;
    int secondMaximum = INT_MIN;
    
    for(int i =0; i< arr.size(); i++)
    {
        if(arr[i] > firstMaximum)
        {
            secondMaximum = firstMaximum;
            firstMaximum = arr[i];
        }
        else if(arr[i] < firstMaximum && arr[i] > secondMaximum) // arr[i] < firstMaximum --> avoid duplictions
        {
            secondMaximum = arr[i];
        }
    }
    if(secondMaximum == INT_MIN)
    {
        return -1;
    }
    return secondMaximum;
}


int main(){
    vector<int> myVector = {4, 7, 2, 15, 9};
    int result = secondMaximum(myVector);
    cout << result;
    return 0;
}

// Time Complexity: O(n) where n is the size of the array. We are traversing the array only once.
// Space Complexity: O(1)