import sys
for s in sys.stdin:
    for c in s:
        print(chr(ord(c)-7),end = '')
    print()
