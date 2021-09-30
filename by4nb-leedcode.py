#Evan Yan (by4nb)
class Solution(object):
    """
    xor
    """
    def findTheDifference(self, s, t):
        code = 0
        for ch in s + t:
            code ^= ord(ch)
        return chr(code)
