# Objective
# Today, we are learning about an algorithmic concept called recursion. Check out the Tutorial tab for learning materials and an instructional video.

# Recursive Method for Calculating Factorial
# factorial (N)= {1                       N<=1     }
#                {N*factorial(N-1)        otherwise}
            
# Function Description
# Complete the factorial function in the editor below. Be sure to use recursion.

# factorial has the following paramter:
# int n: an integer

# Returns
# int: the factorial of n 
# Note: If you fail to use recursion or fail to name your recursive function factorial or Factorial, you will get a score of .

# Input Format

# A single integer, n (the argument to pass to factorial).

# Constraints
# 2<=n<=12
# Your submission must contain a recursive function named factorial.

# Sample Input
# 3

# Sample Output
# 6

# SUBMITTED CODE:

#!/bin/python3
import math
import os
import random
import re
import sys

def factorial(n):
    if n < 1:
        return None
    if n == 1:
        return 1
    return n*factorial(n-1)
  
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())
    result = factorial(n)
    
    fptr.write(str(result) + '\n')
    fptr.close()
