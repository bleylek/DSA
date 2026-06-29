#include <iostream>
#include <vector>
using namespace std;

double averageArray(const vector<int> &myArray){
    
    int total = 0;
    
    for(int i=0;i<myArray.size();i++){
        total+= myArray[i];
    }
    
    double result = (double) total / myArray.size();
    return result;
}

int main(){
    
    vector<int> arr = {2, 4, 6, 8,3};
    cout << averageArray(arr);
    
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)