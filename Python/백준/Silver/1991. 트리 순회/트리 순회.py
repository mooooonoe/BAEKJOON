n = int(input().strip())
tree = {}

for _ in range(n):
    root, left, right = input().split()
    tree[root] = (left, right)

# 전위 순회 (Pre-order)
def preorder(node):
    if node == '.':
        return
    print(node, end='')
    preorder(tree[node][0])
    preorder(tree[node][1])

# 중위 순회 (In-order)
def inorder(node):
    if node == '.':
        return
    inorder(tree[node][0])
    print(node, end='')
    inorder(tree[node][1])

# 후위 순회 (Post-order)
def postorder(node):
    if node == '.':
        return
    postorder(tree[node][0])
    postorder(tree[node][1])
    print(node, end='')

# 결과 출력
preorder('A')
print()
inorder('A')
print()
postorder('A')
