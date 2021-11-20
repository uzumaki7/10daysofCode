count=0
print("Enter Number")
num=input()
print("Enter key digit")
key=input()
for i in num:
    if i==key:
        count+=1
print(count)
