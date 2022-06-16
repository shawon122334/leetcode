class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int i =0; i<=30; i++){
            int ans = pow(2,i);
            if(ans == n) return true;
        }
        return false;
    }
};


/*
    we will loop through 2^0 to 2^31-1
    check if 2^i == n , if so return true 
    otherwise false 
*/