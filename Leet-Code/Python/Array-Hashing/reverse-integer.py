class Solution:
    def reverse(self, x: int) -> int:
        empty = []
        val = 0
        string = str(x)
        for items in string[len(string)::-1]:
            if items != "-":
                empty.append(int(items))
            else:
                empty.insert(0,items)
        
        if x.bit_length() >= 31:
            return 0
    
        return int(''.join([str(elem) for elem in empty]))