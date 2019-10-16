numbers=[]
count=0
sum=0
mean=0
while True:
    i=input("enter a number or enter to finish:")
    if not i:
        break

    b=int(i)
    numbers.append(b)
    count+=1
    sum+=b
    mean=sum/count

print (count,sum,max(numbers),min(numbers),mean)
