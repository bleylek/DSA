#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondSmallest(const vector<int>&array){
    
    int firstMinimum = INT_MAX;
    int secondMinimum = INT_MAX;
    
    for(int i=0;i<array.size();i++){
        if(array[i] < firstMinimum)
        {
            secondMinimum = firstMinimum;
            firstMinimum = array[i];
        }
        else if(array[i] > firstMinimum && array[i] < secondMinimum)
        {
            secondMinimum = array[i];
        }
    }
    if(secondMinimum == INT_MAX)
    {
        return -1;
    }
    return secondMinimum;
}

int main(){
    vector <int> myArray = {4, 7, 2, 15, 9};
    cout << secondSmallest(myArray);
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)