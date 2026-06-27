class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        for char in s:
            temp=t.replace(char,'',1)
            if temp == t:
                return False
            t = temp
        return len(t) == 0

