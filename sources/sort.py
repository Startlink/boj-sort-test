import sys
import time
epoch = lambda: int(round(time.time() * 1000))
n = int(sys.stdin.readline())
a = list(map(int,sys.stdin.readline().split()))
start = epoch()
a.sort()
end = epoch()
print(end-start)
