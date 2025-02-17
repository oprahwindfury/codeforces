#include <iostream>
#include <cmath>

class Solution {
public:
    bool isPalindrome(int x) {
        int num = 0;
        int l = 0;
        while(x>0){
            x = x/10;
            ++l;
        }
        for(int i = l-1; i>=0; --i){
            int r = x%10;
            num += r*pow(10, i);
        }
        if(num ==x ){
        return true;
        }else{
            return false;
        }

    }
};

int main(){
    Solution check;
    bool checkers = check.isPalindrome(121);
    std::cout << checkers << std::endl;
}