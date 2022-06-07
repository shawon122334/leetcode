class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        prod_of_digits = 1
        sum_of_digits = 0
        
        while n!=0:
            last_digit = n%10
            prod_of_digits = prod_of_digits * last_digit
            sum_of_digits = sum_of_digits + last_digit
            n = n/10
            
        result = prod_of_digits - sum_of_digits
        return result
