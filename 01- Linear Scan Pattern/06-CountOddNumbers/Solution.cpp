#include <iostream>
#include <vector>
using namespace std;


int oddNumbers(const vector<int> &myArray){
    
    int result = 0;
    
    for(int i =0; i< myArray.size();i++)
    {
        if(myArray[i] %2 !=0)
        {
            result++;
        }
    }
    
    return result;
}

int main(){
    
    vector<int> myVector = {1,2,4,7,8,9};
    cout << oddNumbers(myVector);
    
    return 0;
}

// Time Complexity: O(n) where n is the size of the input array
// Space Complexity: O(1)