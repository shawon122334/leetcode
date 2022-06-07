class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count =0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n = n>>1;
        }
        return count;
        
    }
};

/*
    step 1 : we check last bit is whether zero or one 
    step 2 : if last bit is 0, right shift by 1
    step 3 : if last bit is 1, count ++ and right shift by 1
    
    // if all bits are 0 , program stops
    // n&1 : binary +1 

*/