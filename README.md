# Evan yan (by4nb)
# https://leetcode.com/problems/find-the-difference/

class Solution(object):
    """
    xor
    """
    def findTheDifference(self, s, t):
        code = 0
        for ch in s + t:
            code ^= ord(ch)
        return chr(code)
