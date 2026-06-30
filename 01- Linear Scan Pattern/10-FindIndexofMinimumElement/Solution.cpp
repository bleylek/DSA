#include <iostream>
#include <vector>
using namespace std;

void minElementIndex(const vector<int> &arr){
    
    int minimum = arr[0];
    int minIndex = 0;
    
    for(int i =1;i<arr.size();i++)
    {
        if(minimum > arr[i])
        {
            minimum = arr[i];
            minIndex = i;
        }
    }
    
    cout << minIndex;
}

int main(){
    
    vector <int> array = {4, 7, -2, 15, 0, 9};
    minElementIndex(array);
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)