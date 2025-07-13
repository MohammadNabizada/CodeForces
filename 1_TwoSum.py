def twoSum(self, nums: list[int], target: int) -> list[int]:
    pair = {}

    for i, num in enumerate(nums): 
        if target - num in pair: 
            return [i, pair[target-num]] 
        pair[num] = i