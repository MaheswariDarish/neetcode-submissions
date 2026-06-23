class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
         d=Counter(nums)
         for i in d:
            if d[i]>1:
                return True
         else:
            return False