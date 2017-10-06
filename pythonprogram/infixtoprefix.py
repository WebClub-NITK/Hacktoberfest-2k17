s='A + B * C / F + D'
s=s.split(" ")
y=s[::-1]
dic = {'+':1,'-':1,'*':2,'/':2}
res=""
l=list()
for i in y:
    if i !='+' and i!='-' and i!='*' and i!='/':
        res=i+res
    elif i=='+' or i=='-' or i=='*' or i=='/':
        if len(l)==0:
            l.append(i)
        else:
            temp = l.pop()
            if dic[temp]<=dic[i]:
                l.append(temp)
                l.append(i)
            elif dic[temp] > dic[i]:
                res = temp + res
                t = len(l) + len(res)
                y.append(y[len(y) - 1])
                for j in range(len(y) - 1, t - 1, -1):
                    y[j] = y[j - 1]
while(len(l)!=0):
    res=l.pop() + res
print(res)
