# Runtime: 40 ms, faster than 81.48% of Python3 online submissions for Fizz Buzz.
# Memory Usage: 14.9 MB, less than 27.11% of Python3 online submissions for Fizz Buzz.


class Solution:
    def fizzBuzz(self, n: int) -> List[str]:
        count = 1
        res = []

        while count <= n:
            if(count % 3 == 0 and count % 5 == 0):
                res.append("FizzBuzz")
            elif(count % 3 == 0):
                res.append("Fizz")
            elif(count % 5 == 0):
                res.append("Buzz")
            else:
                res.append(str(count))

            count += 1
        return res
