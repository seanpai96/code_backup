n = int(input())
for i in range(n):
    a,b,c,d = map(int,input().split())
    if b-a == d-c:
        print(a,b,c,d,(d+(b-a)))
    elif b/a == d/c:
        print(a,b,c,d,(d*(int(b/a))))
