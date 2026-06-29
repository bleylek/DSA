#include <iostream>
#include <vector>
using namespace std;

int sumEvenNumbers(const vector<int> &array)
{
    int output = 0;
    
    for(int i = 0; i<array.size();i++)
    {
        if(array[i] % 2 == 0)
        {
            output+=1;
        }
    }
    
    return output;
}

int main(){
    
    vector<int> myVector = {1, 2, 4, 7, 8, 9};
    cout << sumEvenNumbers(myVector);
    
    return 0;
}

// Time Complexity: O(n) where n is the size of the array
// Space Complexity: O(1)