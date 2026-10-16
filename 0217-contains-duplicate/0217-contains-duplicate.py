class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        sett = set()

        n = len(nums)
        for i in range(n):
            if nums[i] in sett:
                return True
            else:
                sett.add(nums[i])
        

        return False
        