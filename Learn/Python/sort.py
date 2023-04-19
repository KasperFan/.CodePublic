k, n, m = map(int, input().split())
num = [int(i) for i in input().split()]
num.sort()
while num:
    for i in range(n):
        if not num:
            break
        for j in range(m):
            if not num:
                break
            if j != m-1:
                print(num.pop(0), end=' ')
            else:
                print(num.pop(0))
