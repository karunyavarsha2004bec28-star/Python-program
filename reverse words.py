 #EXPERIMENT 3
#PROGRAMMER:S.RITHIKHA
#5.reverse word in sentence
s=input("enter a sentence")
words=s.split()
rw=[]
for w in words:
    rw.append(w[::-1])
print("".join(rw))
