#Aaditya Paithane @aadityamp01
# Problem Link- https://www.hackerrank.com/challenges/compare-the-triplets/problem

# Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a 
# scale from 1 to 100 for three categories: problem clarity, originality, and difficulty. ..

#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the compareTriplets function below.
def compareTriplets(a, b):
    a_score, b_score = 0, 0
    for i in range(3):
        a_score += a[i] > b[i]
        b_score += b[i] > a[i]
    return [a_score, b_score]

if __name__ == '__main__': #ignore this below code if you are beginner
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = list(map(int, input().rstrip().split()))

    b = list(map(int, input().rstrip().split()))

    result = compareTriplets(a, b)

    fptr.write(' '.join(map(str, result)))
    fptr.write('\n')

    fptr.close()


'''
Sample Input 1

17 28 30
99 16 8

Sample Output 1

2 1
'''



