#EXPERIMENT 3
#PROGRAMMER:S.RITHIKHA
#1.TO COUNT THE NO. OF VOWELS IN A STRING
s=input("enter a string:")
c=0
v=["a","e","i","o","u","A","E","I","O","U"]
for i in s:
    if i in v:
        c=c+1
print("the no. of vowels in the string is:",c)
