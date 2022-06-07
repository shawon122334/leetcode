class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum =0;
        
        while(n!=0){
            int digit = n%10;
            prod = prod * digit;
            sum = sum + digit;
            
            n = n/10;
        }
        int result = prod - sum;
        return result;
        
    }
};

/*
    n = 234   we have to take 2 3 4 individually 
    if we do n%10 => 4. Found the last digit 
    if we do n/10 => 23 
        Again : 23%10 => 3  Found second digit
                23/10 => 2  Found first digit 
                    Again: 2%10 => 2 
                           2/10 => 0 if n=0 program stops
        
    step 1 : find last digit n%10 
    step 2 : multiply digit with prod 
    step 3 : add digit with sum
    step 4 : divide n by 10:  n= n/10 

    Finally : subtract sum from prod 

*/