class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        mp = {}

        n = len(nums)

        for i in range(n):
            mp[nums[i]] = mp.get(nums[i], 0) + 1

        for key, val in mp.items():
            if val > n // 2:
                return key

        return 0
