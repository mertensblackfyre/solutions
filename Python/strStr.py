def strStr(haystack, needle):
    n = len(needle)
    count = 0

    if not needle:
        return 0

    while n + count <= len(haystack):
        if haystack[count:count+n] == needle:
           return count
        count += 1

    return -1 

x = strStr("mississippi","issi")

print(x)
