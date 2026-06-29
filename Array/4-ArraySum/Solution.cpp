#include <iostream>
#include <vector>
using namespace std;

int sumArray(const vector<int> &array){
    int total = 0;
    for(int i = 0; i < array.size();i++)
    {
        total += array[i];
    }
    return total;
}


int main(){
    vector<int> myArray = {1,2,3,4};
    int output = sumArray(myArray);
    cout << output;
    return 0;
}