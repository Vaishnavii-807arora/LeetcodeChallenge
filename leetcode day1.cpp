// Day 1
//Power of two
class Solution{
    public:
    bool isPowerOfTwo(int n) {
        if(n<1)
        return false;
        else if(n == 1)
        return true;
        else{
            while(n % 2 == 0) //giving the remainder
            n = n/2;
        }
        if(n == 1)
        return true;
        else
        return false;
    }
};

//Palidrome of a Number
class Solution {
public:
    bool isPalindrome(int x) {
        int n = x;
        if(n<0){
            return false;
        }
        int revNumber = 0;
        while(n>0){
            int remainder = n%10;
            revNumber = revNumber * 10 + remainder;
            n = n/10;
        }

        if (x == revNumber)
        return true;
        else return false;
    }
};

