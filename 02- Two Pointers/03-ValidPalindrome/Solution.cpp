#include <iostream>
#include <string>
using namespace std;


bool isPalindrome(const string&s)
{
    int left =0;
    int right = s.size()-1;
    
    while(left<right)
    {
        if(s[left] != s[right])
        {
            return false;
        }
        else{
            left++;
            right--;
        }
    }
    return true;
}

int main(){
    
    string str = "racecar";
    if(isPalindrome(str))
        cout << "true";
    else
        cout << "false";
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)