s='A * B + C * D'
s=s.split(" ")
l=list()
p=list()
dic = {'+':1,'-':1,'*':2,'/':2}
for i in s:
    if i !='+' and i!='-' and i!='*' and i!='/':
        l.append(i)
    elif i=='+' or i=='-' or i=='*' or i == '/':
        if len(p)==0:
            p.append(i)
        else:
            temp=p.pop()
            if dic[temp] == dic[i]:
                l.append(temp)
                p.append(i)
            elif dic[temp] > dic[i]:
                l.append(temp)
                y=len(l)+len(p)
                s.append(s[len(s)-1])
                for j in range(len(s)-1,y-1,-1):
                   s[j]=s[j-1]
            else:
                p.append(temp)
                p.append(i)
while(len(p)!=0):
    temp=p.pop()
    l.append(temp)
for i in l:
    print(i,end='')
