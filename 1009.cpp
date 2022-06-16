class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;
        
        if(n ==0 ) return 1;
        
        while(m!=0){
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        
        int ans = (~n) & mask;
        return ans;
    }
};

/*
    1. n is stored in m so we could make the mask 
    2. edge case if n is 0 
    3. loop stops if m is 0 
    4. making mask, mask is 0, left shift | 1 
    5. right shift m, when its 0, loop stops, meanwhile we will get the mask 
    6. ans = ~n & mask and return it 
*/
/*
--------------------------------------------
    5 -> 101 
    compliment of 101 -> 010 
    010's decimal is -> 2, is the answer 
    --------------------------------------
                      n = 5  ->    00000000000000000000000000000101
    compliment       `n = `5 ->    11111111111111111111111111111010 
    
    see, here we are getting 010 in the last which is 2. our expected output.
    if we could do such operation that make a mask 00000000000000000000000000000111 (last three 1 we will get because 5-> 101) and do & operation with ~n then it is done 

    `n & mask -> answer
    
    lets see how we create a mask,
    int mask =0

    n = 5     00000000000000000000000000000101
    mask      00000000000000000000000000000111

    we will do right shift n until n!=0,
      1st ->  00000000000000000000000000000010  -> !=0
      2nd ->  00000000000000000000000000000001  -> !=0 
      3rd ->  00000000000000000000000000000000  -> ==0 (program stops)

    we did right shift 3 times, we add three 1 in mask.How do we do that? we do left shift with or operation 

    mask = 0 , 00000000000000000000000000000000 | 1 (left shift)
    1st ->     00000000000000000000000000000001
    2nd ->     00000000000000000000000000000011
    3rd ->     00000000000000000000000000000111

    mask is created , lets just do & operation with `n




      


*/