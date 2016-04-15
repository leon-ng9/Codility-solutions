def solution(S):
    bracketMap = {
        '}': '{',
        ']': '[',
        ')': '('
    }
    
    stack = []
    
    for char in S:
        if char == '{' or char == '[' or char == '(':
            stack.append(char)
        else:
            while len(stack) > 0 and stack[-1] != bracketMap[char]:
                stack.pop()
            
            if len(stack) == 0:
                return 0 # no opening bracket found
            else:
                stack.pop()
    
    return 1 if len(stack) == 0 else 0