
class Solution:
    def reverseString(self, s: List[str]) -> None:
        count = 0
        if(len(s) == 0):
            return
        self.helper(count, s)

    def helper(self, count, s: List[str]) -> List[str]:
        """
        Do not return anything, modify s in-place instead.
        """
        if(count == len(s)//2):
            return s
        temp = s[count]
        s[count] = s[len(s)-count-1]
        s[len(s)-count-1] = temp
        count += 1
        self.helper(count, s)
