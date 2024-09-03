arr = input()
bumb = input()

stack = []
bumb_len = len(bumb)

for elem in arr:
    stack.append(elem)
    # 스택의 마지막 문자가 bumb와 일치하는지 확인
    if len(stack) >= bumb_len and ''.join(stack[-bumb_len:]) == bumb:
        # 스택에서 bumb만큼 제거
        del stack[-bumb_len:]

# 스택이 비어 있으면 "FRULA" 출력
if not stack:
    print("FRULA")
else:
    # 스택에 남아있는 문자들을 합쳐서 출력
    print(''.join(stack))
