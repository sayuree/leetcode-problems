# Runtime: 28 ms, faster than 73.70 % of Python3 online submissions for Defanging an IP Address.
# Memory Usage: 13.9 MB, less than 22.87 % of Python3 online submissions for Defanging an IP Address.


class Solution:
    def defangIPaddr(self, address: str) -> str:
        result = ""
        if not address:
            return result
        for item in address:
            if item == ".":
                result += "[.]"
            else:
                result += item
        return result
