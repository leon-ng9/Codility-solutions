def solution(A):
    h = {}
    for i in A:
        if i not in h:
            h[i] = 1;
        else:
            h[i] += 1;
    for i in h:
        if h[i]%2 != 0:
            return i;