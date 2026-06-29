#include <iostream>
#include <vector>
using namespace std;

void posNegNumber(const vector<int> & array){
    int negNum = 0, posNum = 0;
    
    for(int i =0;i<array.size();i++)
    {
        if(array[i] > 0){
            posNum++;
        }
        else if(array[i]<0)
        {
            negNum++;
        }
    }
    
    cout << "Positive: " << posNum << endl;
    cout << "Negative: " <<  negNum;
}


int main(){
    
    vector<int> myArray = {4, -2, 0, 7, -5, 3, -1};
    posNegNumber(myArray);
    return 0;
}

// Time Complexity: O(n) where n is the size of the array
// Space Complexity: O(1)