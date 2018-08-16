# ques 2
class Stack:
    # constructor creates a list
    def __init__(self):
        self.stack = list()

    # push data to stack
    def push(self,data):
        if data not in self.stack:
            self.stack.append(data)
            return True 
        return False

    # remove last element from stack
    def pop(self):
        if len(self.stack) <= 0:
            return ("Empty stack")
        return self.stack.pop()

    # checking for empty
    def isEmpty(self):
        if len(self.stack) == 0:
            return True
        return False

    # get top element
    def peek(self):
        return self.stack[len(self.stack)-1]

    # get size of stack
    def size(self):
        return len(self.stack)

def matched(s):
    stack = Stack() 
    for i in range(len(s)):
        #print('i :',s[i])
        if s[i] == '(':
            stack.push(s[i])
        if s[i] == ')':
            if not stack.isEmpty() and stack.peek() == '(':
                stack.pop()
        else:
            pass

    if stack.isEmpty():
        return True
    else:
        return False

s1 = "zb%78"
s2 = '((jkl)78(A)&l(8(dd(FJI:),):)?)'
ans = matched(s1)
print (ans)
print (matched(s2))