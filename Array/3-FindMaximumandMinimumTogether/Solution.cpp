#include <iostream>
#include <vector>
using namespace std;

void maxMinTogether(const vector<int> &myArray){
    int minElement = myArray[0];
    int maxElement = myArray[0];
    
    for(int i=0; i < myArray.size();i++)
    {
        if(myArray[i] > maxElement)
        {
            maxElement = myArray[i];
        }
        if(myArray[i] < minElement)
        {
            minElement = myArray[i];
        }
    }
    
    cout << "Maximum: " << maxElement << endl;
    cout << "Minimum: " << minElement;
}


int main(){
    
    vector<int>myVector = {4,7,-2,15,0,9};
    maxMinTogether(myVector);
    
    return 0;
}

// Time Complexity: O(n) where n is the size of the input array
// Space Complexity: O(1)