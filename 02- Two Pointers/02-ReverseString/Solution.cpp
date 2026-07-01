#include <iostream>
#include <string>
using namespace std;

void reverseString(string&str){
    
    int left =0;
    int right = str.size()-1;
    
    while(left<right)
    {
        char temp;
        
        temp = str[right];
        str[right] = str[left];
        str[left] = temp;
        
        left++;
        right--;
    }
    
    for(int i=0;i<str.size();i++){
        cout << str[i];
    }
    
}


int main(){
    
    string str ="hello";
    reverseString(str);
    
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)