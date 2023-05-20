def numJewelsInStones(jewels, stones):
    m = {}
    count = 0

    for i in range(len(jewels)):
        m[jewels[i]] = "J"


    for i in range(len(stones)):
        if stones[i] in m:
            count += 1

    return count

numJewelsInStones("z","ZZ")
