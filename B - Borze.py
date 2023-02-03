import sys
from os import path
from collections import defaultdict, Counter, deque
import heapq
import math

loop_test_cases = False

def solve():
	s = raw_input()
	ans = []
	i = 0

	while i < len(s):
		if s[i] == "." or i == len(s) - 1:
			ans.append("0")
			i += 1
		else:
			if s[i + 1] == ".":
				ans.append("1")
			else:
				ans.append("2")
			i += 2

	print("".join(ans))

if __name__ == "__main__":
	if path.exists('input.txt'):
		sys.stdin = open("input.txt", "r")
		sys.stdout = open("output.txt", "w")
		sys.stderr = open("error.txt", "w")

	n = 1
	if loop_test_cases:
		n = int(raw_input())
	while (n > 0):
		solve()
		n -= 1
