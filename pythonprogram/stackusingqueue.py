class queue:

    def __init__(self):
        self.T=[None for i in range(30)]
        self.front=-0
        self.rear=0

    def isFull(self):
        if 30-self.rear+self.front==0:
            return True
        else:
            return False

    def enqueue(self,x):
        if self.isFull():
            print("The queue is full")
        else:
            if self.T[self.rear]==None:
                self.T[self.rear]=x
                self.rear=(self.rear+1)%30
            else:
                print("The queue is full")
    def dequeue(self):
        if self.T[self.front]==self.T[self.rear-1]:
            return None
        else:
            temp=self.T[self.front]
            self.T[self.front]=None
            self.front=(self.front+1)%30
            return temp

    def printqueue(self):
        temp=self.rear-1
        while(self.T[temp]!=None):
            print(self.T[temp])
            temp=(temp-1)%30

class Stack:

    def __init__(self):
        self.q1=queue()
        self.q2=queue()

    def push(self,x):
        self.q1.enqueue(x)

    def pop(self):
        w=self.q1.dequeue()
        while w!=None :
            self.q2.enqueue(w)
            w=self.q1.dequeue()

        temp=self.q1
        self.q1=self.q2
        self.q2=temp
        self.q2=queue()

    def printstack(self):
        print("The stack is ")
        self.q1.printqueue()

def main():
    s=Stack()
    s.push(5)
    s.push(6)
    s.push(7)
    s.printstack()
    s.pop()
    s.push(8)
    s.printstack()
    s.pop()
    s.printstack()
    s.pop()
    s.printstack()

if __name__=='__main__':
    main()
