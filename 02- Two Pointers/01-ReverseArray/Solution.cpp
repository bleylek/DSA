#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>&arr)
{
    int left = 0;
    int right = arr.size()-1;
    
    while(left<right)
    {
        int temp;
        
        temp = arr[right];
        arr[right] = arr[left];
        arr[left] = temp;
        
        left++;
        right--;
    }
    
    for(int i =0;i<arr.size();i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    vector<int> array = {1,2,3,4,5};
    reverseArray(array);
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)