#EXPERIMENT 3
#PROGRAMMER:S.RITHIKHA
#3.TO REMOVE DUPLICATE FROM THE GIVEN STRING
s=input("enter the string:")
a=""
for i in s:
    if i not in a:
        a+=i
print("after removing duplicates:",a)
