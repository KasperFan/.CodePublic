ans = []
m = int(input())
listm = [int(i) for i in input().split()]
n = int(input())
listn = [int(i) for i in input().split()]
while listm and listn:
    if listm[0] < listn[0]:
        ans.append(listm.pop(0))
    else:
        ans.append(listn.pop(0))
while listm:
    ans.append(listm.pop(0))
while listn:
    ans.append(listn.pop(0))

for i in ans:
    print(i, end=" ")
