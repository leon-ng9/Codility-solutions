from __future__ import division
import sys

def solution(A):
    N = len(A)
    
    bestSlices = [] # holds tuples (startIndex, totalSum, numElemsInSlice)
    bestSlices.append((N-2, A[N-2] + A[N-1], 2))

    for i in xrange(N-3, -1, -1):
        start, totalSum, numElems = bestSlices[-1]
        if (totalSum + A[i])/(numElems + 1) < (A[i] + A[i+1])/2:
            bestSlices.append((i, totalSum + A[i], numElems + 1))
        else:
            bestSlices.append((i, A[i] + A[i+1], 2))
          
    minIndex = None
    minAvg = sys.maxint
    for start, totalSum, numElems in bestSlices:
        tmpAvg = totalSum / numElems
        if tmpAvg <= minAvg:
            minIndex = start
            minAvg = tmpAvg
            
    return minIndex 