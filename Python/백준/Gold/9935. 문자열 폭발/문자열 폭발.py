def check(ori, boom):
    stack = []
    boom_len = len(boom)

    for char in ori:
        stack.append(char)

        if ''.join(stack[-boom_len:]) == boom:
            del stack[-boom_len:]
        
    return ''.join(stack)


ori = input()
boom = input()

result = check(ori, boom)

if result:
    print(result)
else:
    print("FRULA")