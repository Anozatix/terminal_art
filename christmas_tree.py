import time
import os
print(" \n \n \n \n")
def levels(start,end):
    width_enhancer=0
    level=[]
    for i in range(end):
        level.append((start*"*")+(width_enhancer*"*"))
        width_enhancer+=4
    return level
def pos(m,n):
    for i in range(m):
        n-=1
    return n
construct=[]
a,b=1,4
for i in range(4):
    construct.append(levels(a,b))
    a+=4
    b+=2
base=len(construct[len(construct)-1]
         [len(construct[len(construct)-1])-1])//2
for parts in construct:
    j,k=pos((len(parts[0])-1)//2,base),len(parts[0])
    for sub_parts in parts:
        print(j*" " + sub_parts)
        j-=2
for i in range(3):
    print((base-3)*" "+"*"*6)

print(" \n \n \n \n")
bright_colors=["A","B","C","D","E","F"]
while 1:
    for i in range(10):
        time.sleep(0.5)
        os.system(f"color {i}")
    for i in bright_colors:
        time.sleep(0.5)
        os.system(f"color {i}")
