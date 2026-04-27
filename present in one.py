#EXPERIMENT 3
#PROGRAMMER:S.RITHIKHA
#8.CHARACTER PRESENT IN ONE STRING BUT NOT IN OTHER
s1=input("enter first string")
s2=input("enter second string")
res=set(s1)-set(s2)
print("characters only in first string:",res)
