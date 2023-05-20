def canPlaceFlowers(flowerbed, n):
    count = 0
    if n > len(flowerbed) or n < 0:
            return False

    for i in range(len(flowerbed)):
        if flowerbed[i] == 0 and flowerbed[i-1] == 0 and  flowerbed[i+1] == 0:
            flowerbed[i] = 1
            count += 1
            return True

    print(flowerbed)
    
    
    


canPlaceFlowers([1,0,0,0,1],1)
