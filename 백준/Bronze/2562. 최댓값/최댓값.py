a=[0]*9

for i in range(9):
    a[i]=int(input())

max_int=a[0]
max_index=0

for i in range(9):
    if max_int < a[i]:
        max_int=a[i]
        max_index=i

print(max_int)
print(max_index+1)
