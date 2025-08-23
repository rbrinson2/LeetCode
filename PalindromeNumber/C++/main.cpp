#include <vector>
#include <iostream>

class Solution {
public:
    bool isPalindrome(int x) {
        
        std::vector<int> arr;

        if (x < 0) return false;

        while (x > 0){
            int temp = x % 10;
            arr.push_back(temp);            
            x /= 10;
        }
        
        for (int i = 0; i < arr.size() / 2; i++){
            if (arr.at(i) != arr.at(arr.size() - 1 - i)) return false;
        }

        return true;
    }
};


int main (int argc, char *argv[]) {

    Solution sol;

    std::cout << sol.isPalindrome(121) << std::endl;
    
    return 0;
}
