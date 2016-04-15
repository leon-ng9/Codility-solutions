def solution(A):
    leader = []
    for n in A:
        leader.append(n)
        if len(leader) >= 2 and leader[-1] != leader[-2]:
            leader.pop()
            leader.pop()
    
    if len(leader) == 0:
        return -1

    candidate = leader[0]
    numOccurences = 0
    for i in xrange(len(A)):
        if A[i] == candidate:
            numOccurences += 1
            candidateIndex = i
    

    return candidateIndex if numOccurences > len(A)/2 else -1