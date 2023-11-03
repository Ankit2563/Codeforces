
from heapq import *

def getServerIndex(n, ar, bt):
    ps = []
    av = list(range(1, n + 1))
    heapify(av)
    arr= len(ar)
    re = [0] * arr
    for a, i, b in sorted(zip(ar, list(range(arr)), bt)):


        while ps and ps[0][0] <= a:


            heappush(av, heappop(ps)[1])

        if av:

            c= heappop(av)

            re[i] = c

            heappush(ps, (a + b, c))
        else:
            re[i] = -1

    return re

n = 3
arrTime = [2, 4, 1, 8, 9]
butTime = [7, 9, 2, 4, 5]
print(getServerIndex(n, arrTime, butTime))