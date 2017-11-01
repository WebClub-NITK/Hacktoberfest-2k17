from Tkinter import *
import math
class Calc():
	def __init__(self):
		self.total = 0
		self.current= ""
		self.new_num = True
		self.op_pending = False
		self.op = ""
		self.eq_flag = False
		

	def num_press(self,num):
		temp = text_box.get()
		self.eq_flag = False
		temp2 = str(num)
		if self.new_num == True:
			self.current = temp2
			self.new_num = False
		else:
			if temp2 == '.':
				if temp2 in temp:
					return
			self.current = temp + temp2
		
		text_box.delete(0,END)
		text_box.insert(0,self.current)

	def calc_total(self):
		if self.op_pending == True:
			self.do_calc()
			self.op_pending = False

	def display(self, value):
    	 text_box.delete(0,END)
    	 text_box.insert(0,value)


	def do_calc(self):
		self.current = float(self.current)
		if self.op == "add":
			self.total+=self.current
		if self.op == "minus":
			self.total-=self.current
		if self.op == "times":
			self.total*=self.current
		
		
		try:
			if self.op == "divide":
				self.total/=self.current
				
		except ZeroDivisionError:
				error="Div by 0 not possible!!"
				text_box.delete(0,END)
				text_box.insert(0,error)

		text_box.delete(0,END)
		text_box.insert(0,self.total)
		self.new_num = True

	def operation(self,op):
		if self.op_pending == True:
			self.do_calc()
			self.op = op
		else:
			self.op_pending = True
			if self.eq_flag == False:
				self.total = float(text_box.get())
			else:
				self.total = self.current
			self.new_num = True
			self.op = op
			self.eq_flag = False


	def reciprocal(self):

		try:
			self.current = float(self.current)
			self.current = float(1/self.current)
			text_box.delete(0,END)
			text_box.insert(0,self.current)
			self.new_num = True
		except ZeroDivisionError:
			error="Div by 0 not possible!!"
			text_box.delete(0,END)
			text_box.insert(0,error)

	def pow(self):
		self.current = float(self.current)
		self.total=self.total**self.current
		text_box.delete(0,END)
		text_box.insert(0,self.total)
		self.new_num = True

	def sine(self):
			self.current = float(self.current)
			self.current = float(math.sin((self.current)))
			text_box.delete(0,END)
			text_box.insert(0,self.current)
			self.new_num = True

	def cosine(self):
			self.current = float(self.current)
			self.current = float(math.cos((self.current)))
			text_box.delete(0,END)
			text_box.insert(0,self.current)
			self.new_num = True

	def cosec(self):
			self.current = float(self.current)
			self.current = float(math.cosec((self.current)))
			text_box.delete(0,END)
			text_box.insert(0,self.current)
			self.new_num = True

	def tan(self):
			self.current = float(self.current)
			self.current = float(math.tan((self.current)))
			text_box.delete(0,END)
			text_box.insert(0,self.current)
			self.new_num = True

	def cot(self):
			self.current = float(self.current)
			self.current = float(math.cot((self.current)))
			text_box.delete(0,END)
			text_box.insert(0,self.current)
			self.new_num = True

	def sec(self):
			self.current = float(self.current)
			self.current = float(math.sec((self.current)))
			text_box.delete(0,END)
			text_box.insert(0,self.current)
			self.new_num = True

	
	


def Clear():
	text_box.delete(0,END)


root = Tk()
root.title("My_Calculator")
root.minsize(width = 350, height = 475)
root.maxsize(width = 350, height = 475)
frame = Frame(root,width = 1000, height = 10)
frame.pack()

my_calc = Calc()


num = StringVar()
text_box = Entry(frame,textvariable = num , bd=20, insertwidth =1 , font=30,justify = RIGHT)
text_box.pack(side = TOP)



b1 = Button(frame, padx = 16 , pady =16 , bd=8, text = "1",fg = "black")
b1.pack(side = LEFT)
b1["command"] = lambda: my_calc.num_press(1)

b2 = Button(frame, padx = 16 , pady =16 , bd=8, text = "2",fg = "black")
b2.pack(side = LEFT)
b2["command"] = lambda: my_calc.num_press(2)

b3 = Button(frame, padx = 16 , pady =16 , bd=8, text = "3",fg = "black")
b3.pack(side = LEFT)
b3["command"] = lambda: my_calc.num_press(3)

b4 = Button(frame, padx = 16 , pady =16 , bd=8, text = "(",fg = "black")
b4.pack(side = LEFT)
b3["command"] = lambda: my_calc.num_press()

b4 = Button(frame, padx = 16 , pady =16 , bd=8, text = ")",fg = "black")
b4.pack(side = LEFT)
b3["command"] = lambda: my_calc.num_press(3)
frame1 = Frame(root)
frame1.pack(side = TOP)
b5 = Button(frame1, padx = 16 , pady =16 , bd=8, text = "4",fg = "black")
b5.pack(side = LEFT)
b5["command"] = lambda: my_calc.num_press(4)

b6 = Button(frame1, padx = 16 , pady =16 , bd=8, text = "5",fg = "black")
b6.pack(side = LEFT)
b6["command"] = lambda: my_calc.num_press(5)

b7 = Button(frame1, padx = 16 , pady =16 , bd=8, text = "6",fg = "black")
b7.pack(side = LEFT)
b7["command"] = lambda: my_calc.num_press(6)

b8 = Button(frame1, padx = 16 , pady =16 , bd=8, text = "+",fg = "black")
b8.pack(side = LEFT)
b8["command"] = lambda: my_calc.operation("add")

b8 = Button(frame1, padx = 16 , pady =16 , bd=8, text = "-",fg = "black")
b8.pack(side = LEFT)
b8["command"] = lambda: my_calc.operation("minus")



frame2 = Frame(root)
frame2.pack(side = TOP)

b5 = Button(frame2, padx = 16 , pady =16 , bd=8, text = "7",fg = "black")
b5.pack(side = LEFT)
b5["command"] = lambda: my_calc.num_press(7)

b5 = Button(frame2, padx = 16 , pady =16 , bd=8, text = "8",fg = "black")
b5.pack(side = LEFT)
b5["command"] = lambda: my_calc.num_press(8)

b5 = Button(frame2, padx = 16 , pady =16 , bd=8, text = "9",fg = "black", command = Clear)
b5.pack(side = LEFT)
b5["command"] = lambda: my_calc.num_press(9)

b5 = Button(frame2, padx = 16 , pady =16 , bd=8, text = "/",fg = "black")
b5.pack(side = LEFT)
b5["command"] = lambda: my_calc.operation("divide")

b5 = Button(frame2, padx = 16 , pady =16 , bd=8, text = "*",fg = "black")
b5.pack(side = LEFT)
b5["command"] = lambda: my_calc.operation("times")


frame3 =Frame(root)
frame3.pack(side = TOP)

b5 = Button(frame3, padx = 16 , pady =16 , bd=8, text = ".",fg = "black")
b5.pack(side = LEFT)
b5["command"] = lambda: my_calc.num_press(".")

b5 = Button(frame3, padx = 16 , pady =16 , bd=8, text = "0",fg = "black")
b5.pack(side = LEFT)
b5["command"] = lambda: my_calc.num_press(0)


b5 = Button(frame3, padx = 16 , pady =16 , bd=8, text = "CE",fg = "black",command = Clear)
b5.pack(side = LEFT)

b5 = Button(frame3, padx = 16 , pady =16 , bd=8, text = "C",fg = "black",command = Clear)
b5.pack(side = LEFT)

b5 = Button(frame3, padx = 16 , pady =16 , bd=8, text = "=",fg = "black")
b5.pack(side = LEFT)
b5["command"] = my_calc.calc_total

frame4 = Frame(root)
frame4.pack(side = TOP)

b8 = Button(frame4, padx = 16 , pady =16 , bd=8, text = "sin",fg = "black")
b8.pack(side = LEFT)
b8["command"]= my_calc.sine

b8 = Button(frame4, padx = 16 , pady =16 , bd=8, text = "cos",fg = "black")
b8.pack(side = LEFT)
b8["command"]= my_calc.cosine

b8 = Button(frame4, padx = 16 , pady =16 , bd=8, text = "tan",fg = "black")
b8.pack(side = LEFT)
b8["command"]= my_calc.tan

b8 = Button(frame4, padx = 16 , pady =16 , bd=8, text = "^",fg = "black")
b8.pack(side = LEFT)
b8["command"]= my_calc.pow

b8 = Button(frame4, padx = 16 , pady =16 , bd=8, text = "1/x",fg = "black")
b8.pack(side = LEFT)
b8["command"]= my_calc.reciprocal

frame5 = Frame(root)
frame5.pack(side = TOP)

b8 = Button(frame5, padx = 16 , pady =16 , bd=8, text = "cosec",fg = "black")
b8.pack(side = LEFT)
b8["command"]= my_calc.cosec

b8 = Button(frame5, padx = 16 , pady =16 , bd=8, text = "sec",fg = "black")
b8.pack(side = LEFT)
b8["command"]= my_calc.sec

b8 = Button(frame5, padx = 16 , pady =16 , bd=8, text = "cot",fg = "black")
b8.pack(side = LEFT)
b8["command"]= my_calc.cot

b8 = Button(frame5, padx = 16 , pady =16 , bd=8, text = "OFF",fg = "black",command=  root.quit)
b8.pack(side = LEFT)


root.mainloop()
