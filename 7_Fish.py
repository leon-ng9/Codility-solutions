def solution(A, B):
    stack = []
    
    for i in xrange(len(A)):
        stack.append((A[i], B[i]))
        
        while len(stack) >= 2 and stack[-2][1] == 1 and stack[-1][1] == 0:
            # a fish will be eaten
            smaller = -2 if stack[-2][0] < stack[-1][0] else -1
            stack.pop(smaller)
        
    return len(stack)