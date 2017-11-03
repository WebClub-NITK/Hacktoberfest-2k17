from Tkinter import *
import tkMessageBox
top=Tk()
frame=Frame(top)
frame.pack()
import math
x=y=0
p1=p2=0 
m=0
def zero():
    a1=p.get()
    a1+="0"
    p.delete(0,len(a1))
    p.insert(0,a1)
def one():
    a1=p.get()
    a1+="1"
    p.delete(0,len(a1))
    p.insert(0,a1)
def two():
    a1=p.get()
    a1+="2"
    p.delete(0,len(a1))
    p.insert(0,a1)
def three():
    a1=p.get()
    a1+="3"
    p.delete(0,len(a1))
    p.insert(0,a1)
def four():
    a1=p.get()
    a1+="4"
    p.delete(0,len(a1))
    p.insert(0,a1)
def five():
    a1=p.get()
    a1+="5"
    p.delete(0,len(a1))
    p.insert(0,a1)
def six():
    a1=p.get()
    a1+="6"
    p.delete(0,len(a1)) 
    p.insert(0,a1)
def seven():
    a1=p.get()
    a1+="7"
    p.delete(0,len(a1))
    p.insert(0,a1)
def eight():
    a1=p.get()
    a1+="8"
    p.delete(0,len(a1))
    p.insert(0,a1)
def nine():
    a1=p.get()
    a1+="9"
    p.delete(0,len(a1))
    p.insert(0,a1)
def plus():
    p1=p.get()
    p1=str(p1)
    global x
    x=int(p1)
    global m
    m=1
    p.delete(0,len(p1))
def minus():
    p1=p.get()
    p1=str(p1)
    global x
    x=float(p1)
    global m
    m=2
    p.delete(0,len(p1))
def multiply():
    p1=p.get()
    p1=str(p1)
    global x
    x=float(p1)
    global m
    m=3
    p.delete(0,len(p1))
def divide():
    p1=p.get()
    p1=str(p1)
    global x
    x=float(p1)
    global m
    m=4
    p.delete(0,len(p1))
def pow():
    p1=p.get()
    p1=str(p1)
    global x
    x=float(p1)
    global m
    m=5
    p.delete(0,len(p1))
def mod():
    p1=p.get()
    p1=str(p1)
    global x
    x=float(p1)
    global m
    m=6
    p.delete(0,len(p1))
def cancel():
    global r
    r=str(p.get())
    p.delete(0,len(r))
def delete():
    global r
    r=str(p.get())
    p.delete(len(r)-1,len(r))
def sin():
    p1=p.get()
    p1=str(p1)
    global x
    x=float(p1)
    x=math.radians(x)
    p.delete(0,len(p1))
    p3=math.sin(x)
    p.insert(0,p3)
def cos():
    p1=p.get()
    p1=str(p1)
    global x
    x=float(p1)
    x=math.radians(x)
    p.delete(0,len(p1))
    p3=math.cos(x)
    p.insert(0,p3)
def tan():
    p1=p.get()
    p1=str(p1)
    global x
    x=float(p1)
    x=math.radians(x)
    p.delete(0,len(p1))
    p3=math.tan(x)
    p.insert(0,p3)
def tan-1():
    p1=p.get()
    p1=str(p1)
    global x
    x=float(p1)
    p.delete(0, len(p1))
    p3=math.atan(x)
    p.insert(0,p3)
def log():
    p1=p.get()
    p1=str(p1)
    global x
    x=float(p1)
    p.delete(0,len(p1))
    p3=math.log(x)
    p.insert(0,p3)
def sqrt():
    p1=p.get()
    p1=str(p1)
    global x
    x=float(p1)
    p.delete(0,len(p1))
    p3=math.sqrt(x)
    p.insert(0,p3)
def deg():
    p1=p.get()
    p1=str(p1)
    global x
    x=float(p1)
    p.delete(0,len(p1))
    p3=math.degrees(x)
    p.insert(0,p3)
def rad():
    p1=p.get()
    p1=str(p1)
    global x
    x=float(p1)
    p.delete(0,len(p1))
    p3=math.radians(x)
    p.insert(0,p3)
def exp():
    p1=p.get()
    p1=str(p1)
    global x
    x=float(p1)
    p.delete(0,len(p1))
    p3=math.exp(x)
    p.insert(0,p3)
def equal():
    p2=p.get()
    p.delete(0,len(p2))
    p2=str(p2)
    global y
    y=float(p2)
    
    if(m==1):
        p3=x+y
        p.insert(0,p3)
    if(m==2):
        p3=x-y
        p.insert(0,p3)
    if(m==3):
        p3=x*y
        p.insert(0,p3)
    if(m==4):
        p3=x/(math.floor(y))
        p.insert(0,p3)
    if(m==5):
        p3=math.pow(x,y)
        p.insert(0,p3) 
    if(m==6):
        p3=x%y
        p.insert(0,p3) 
    

bottomframe=Frame(top)
bottomframe.pack()
topframe=Frame(top)
topframe.pack()
leftframe=Frame(top)
leftframe.pack()
rightframe=Frame(top)
rightframe.pack()

p=Entry(topframe,bd=5)

a=Button(topframe,text="CALCULATOR",width="20",height="4")
b=Button(topframe,text="1",width="6",height="3",command=one)
c=Button(topframe,text="2",width="6",height="3",command=two)
d=Button(topframe,text="3",width="6",height="3",command=three)
e=Button(leftframe,text="4",width="6",height="3",command=four)
f =Button(leftframe,text="5",width="6",height="3",command=five)
g=Button(leftframe,text="6",width="6",height="3",command=six)
h=Button(rightframe,text="7",width="6",height="3",command=seven)
i =Button(rightframe,text="8",width="6",height="3",command=eight)
j =Button(rightframe,text="9",width="6",height="3",command=nine)
q1=Button(rightframe,text="0",width="6",height="3",command=zero)
k=Button(topframe,text="=",width="6",height="3",command=equal)
l=Button(leftframe,text="+",width="6",height="3",command=plus)
m=Button(rightframe,text="-",width="6",height="3",command=minus)
n=Button(topframe,text="*",width="6",height="3",command=multiply)
o=Button(leftframe,text="/",width="6",height="3",command=divide)
q=Button(rightframe,text="C",width="6",height="3",command=cancel)
s=Button(topframe,text="CE",width="6",height="3",command=delete)
s1=Button(leftframe,text="SIN",width="6",height="3",command=sin)
s2=Button(rightframe,text="COS",width="6",height="3",command=cos)
s3=Button(topframe,text="TAN",width="6",height="3",command=tan)
s4=Button(leftframe,text="LOG",width="6",height="3",command=log)
s5=Button(rightframe,text="SQRT",width="6",height="3",command=sqrt)
s6=Button(topframe,text="POW",width="6",height="3",command=pow)
s7=Button(leftframe,text="DEG",width="6",height="3",command=deg)
s8=Button(rightframe,text="RAD",width="6",height="3",command=rad)
s9=Button(topframe,text="MOD",width="6",height="3",command=mod)
s10=Button(leftframe,text="e",width="6",height="3",command=exp)
a.pack(side=TOP)
p.pack(side=TOP)
b.pack(side=LEFT)
c.pack(side=LEFT)
d.pack(side=LEFT)
e.pack(side=LEFT)
f. pack(side=LEFT)
g.pack(side=LEFT)
h.pack(side=LEFT)
i. pack(side=LEFT)
j. pack(side=LEFT)
q1.pack(side=LEFT)
k.pack(side=LEFT)
l. pack(side=LEFT)
m.pack(side=LEFT)
n.pack(side=LEFT)
o.pack(side=LEFT)
q.pack(side=LEFT)
s.pack(side=LEFT)
s1.pack(side=LEFT)
s2.pack(side=LEFT)
s3.pack(side=LEFT)
s4.pack(side=LEFT)
s5.pack(side=LEFT)
s6.pack(side=LEFT)
s7.pack(side=LEFT)
s8.pack(side=LEFT)
s9.pack(side=LEFT)
s10.pack(side=LEFT)
top.mainloop()
