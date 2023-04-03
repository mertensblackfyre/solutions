class Solution(object):
    def isHappy(self, n):
        S = set(())
        if n == 1:
            return True
        
        while n != 1:
            n = sum([int(i) ** 2 for i in str(n)])
            if n == 1:
                return True
            if n in S:
                return False

            S.add(n)
        