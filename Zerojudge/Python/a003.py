import sys
for s in sys.stdin:
  m,d = map(int, s.split())
  s = (m*2 + d) % 3
  if s==0:
    print("普通")
  elif s==1:
    print("吉")
  else:
    print("大吉")
