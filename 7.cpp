class Solution {
public:
    int reverse(int x) {
        int result = 0;
        
        while(x!=0){
            int reminder = x%10;
            if((result > INT_MAX/10) || (result < INT_MIN/10)){
                return 0;
            }
            result = (result * 10) + reminder;
            x = x/10;
        }
        return result;
        
    }
};

/*
    first we take the reminder 
    then make the condition if the result is bigger than int_max or smaller than int_min then return 0 
    we make the formula to reverse a number 
    then dividing the number to get rest of the digits (12)


    - dividing INT_MAX by 10 because in result multiplying by 10
*/