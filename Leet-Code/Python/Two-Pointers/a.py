def maxProfit(prices):
        l = 0
        r = 1
        maxp= 0

        while r < len(prices):
            if prices[l] < prices[r]:
                 p = prices[r] - prices[l]
                 maxp = max(maxp,p)
            else:
                  l = r
            
            r += 1
        print(maxp)

maxProfit([[7,1,5,3,6,4]])