# Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

# You may assume that each input would have exactly one solution, and you may not use the same element twice.

# You can return the answer in any order.

 

# Example 1:

# Input: nums = [2,7,11,15], target = 9
# Output: [0,1]
# Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
#--------------
# solution : G0Lang
#--------------
from msvcrt import kbhit
from re import I

func twoSum(nums []int, target int) []int {
    for i:=0;i<len(nums)-1;i++{
        for j:= i+1;j<len(nums)-1;j++{
            if nums[i] + nums[j] == target{
                return []int {i,j}
            }
        }
    }
    return []int{}
}  
#-----------------
#solution 1 : Python

#-----------------
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        a=len(nums)
        for i in range (0,a-1):
            for j in range (1,a-1):
                if nums[i]+nums[j]==target:
                    return [i,j]

#now this solution is fine but the problem here is, complexity of this program is O(n^2)
#because there is two loop. we have to reduce the code complexity 

#another solution is given below with O(n) complexity

#-----------------------
#solution 2 : python (complexity 0(n))

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        a = len(nums)
        hashmap={}
        for i in range (a-1):
            k= target - nums[i]
            if k in hashmap:
                return [i,hashmap[k]]
            hashmap[nums[i]] = i


#in this program our hashmap would be {value:index} {2:0,7:1,11:2,15:3} because we have to return the index
#we are doing minus here because if we find the value then we understand we have found the pair (value + value = target)
 
#1. first we define a hashmap
#2. we run a map to len-1 
#3. now if target - value is available then pair is here
#4. if k is available then return i( index) and 
#5. if not , 0 index is visited we have to store it 
#------------------------------------------------------------------------------------
# hashmap ={}
# a=4

# i       k
# 0       7   here, k=7, 7 is not in hashmap so we store the index in num[i] hashmap [nums[i]] = i ; {2:0} 
# 1       2   here, 2 is in hashmap, so we return it , [i,hashmap[k]]  that means [1,0]
#s
#------------------------------------------------------------------------------------
