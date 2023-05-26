def topKFrequent(nums, k):
        map = {}
        result = []
        if len(nums) == k:
            result = nums
        for i in range(len(nums)):
            if nums[i] in map:
                map[nums[i]] += 1
            else:
                map[nums[i]] = 1
        for key in map:
            if map[key] >= k:
                result.append(key)

        print(map)
        print(result)

        return result


x = topKFrequent([1,2],2)
