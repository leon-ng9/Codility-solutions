def solution(S):
    stack = [];
    
    for char in S:
        if char == '(':
            stack.append(char)
        elif char == ')':
            while len(stack) > 0 and stack[-1] != '(':
                stack.pop()
            
            if len(stack) == 0:
                return 0
            else:    
                stack.pop() # pop opening '('
    
    if len(stack) == 0:
        return 1
    else:
        return 0