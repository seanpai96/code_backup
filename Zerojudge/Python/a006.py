import sys
import math
for s in sys.stdin:
    a,b,c = map(int,s.split())
    det = b*b - (4*a*c)
    if det > 0:
        ans1 = int((-b + int(math.sqrt(det))) / (2*a))
        ans2 = int((-b - int(math.sqrt(det))) / (2*a))
        print("Two different roots x1=",ans1," , x2=",ans2, sep = '')
    elif det == 0:
        ans = int(-b / (2*a))
        print("Two same roots x=",ans,sep = '')
    else:
        print("No real root")
