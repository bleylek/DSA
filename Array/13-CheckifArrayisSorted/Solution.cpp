#include <iostream>
#include <vector>
using namespace std;

bool isOrdered(const vector<int>&array){
    
    for(int i = 0;i<array.size()-1;i++)
    {
        if(array[i] > array[i+1])
        {
            return false;
        }
    }
    return true;
}

int main(){
    
    vector<int> arr = {1,2,2,3,4,5};
    string output;
    
    if(isOrdered(arr))
        output = "true";
    else
        output = "false";
    
    cout << output;
    
    return 0;
}

// Time Complexity: O(n) where n is the size of the array
// Space Complexity: O(1) as we are not using any extra space