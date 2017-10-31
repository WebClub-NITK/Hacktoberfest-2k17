from random import randint

class chess:
	
	name=""
	sign=""
	def isWin(self):
		if((board[0]==self.sign and board[1]==self.sign and board[2]==self.sign) or (board[3]==self.sign and board[4]==self.sign and board[5]==self.sign) or (board[6]==self.sign and board[7]==self.sign and board[8]==self.sign) or (board[0]==self.sign and board[3]==self.sign and board[6]==self.sign) or (board[1]==self.sign and board[4]==self.sign and board[7]==self.sign) or (board[2]==self.sign and board[5]==self.sign and board[8]==self.sign) or (board[0]==self.sign and board[4]==self.sign and board[8]==self.sign) or (board[2]==self.sign and board[4]==self.sign and board[6]==self.sign)):
			return True
		else:
			return False
	
def printBoard():
	print ("   |   |")
	print (" "+board[0]+" | "+board[1]+" | "+board[2])
	print ("   |   |")
	print ("-----------")
	print ("   |   |")
	print (" "+board[3]+" | "+board[4]+" | "+board[5])
	print ("   |   |")
	print ("-----------")
	print ("   |   |")
	print (" "+board[6]+" | "+board[7]+" | "+board[8])
	print ("   |   |")


board = [" "," "," "," "," "," "," "," "," "]
a = [1,2,3,4,5,6,7,8,9]

player1 = chess()
player2 = chess()
player1.name="Player"
player1.sign="O"
player2.sign="X"
player2.name="Computer"
	
print ("Player is O and Computer is X")

# Who is first and the first moves are executed
x=randint(0,1)
if(x==0):
	print ("Player goes first")
	print("Enter box number")
	i=int(input())
	board[i-1]="O"
	a.remove(i)
	
	while(True):
		i=randint(1,9)
		if(i in [1,3,5,7,9] and i in a):
			board[i-1]="X"
			a.remove(i)
			break
	flag=2		
else:
	print ("Computer goes first")
	
	while(True):
		i=randint(1,9)
		if(i in [1,3,5,7,9] and i in a):
			board[i-1]="X"
			a.remove(i)
			break
	flag=1
# Game

while(True):
	
	# Player Move
	print (" ")
	printBoard()
	print (" ")
	while(True):
		print ("Enter box number")
		i=int(input())
		if(i in a):
			board[i-1]="O"
			a.remove(i)
			break
		else:
			print ("Invalid. Enter number again")
	if(player1.isWin()):
		flag=100
		break
	flag=flag+1
	if(flag==9):
		break
	
	# If computer can win 
	c=0
	for i in a:
		board[i-1]="X"
		if(player2.isWin()):
			flag=200
			c=1
			print (" ")
			printBoard()
			print (" ")
			break
		else:
			board[i-1]=" "
	
	if(player2.isWin()):
		break
	
	#To stop Player from Winning
	for i in a:
		board[i-1]="O"
		if(player1.isWin()):
			board[i-1]="X"
			a.remove(i)
			c=2
			
			break
		else:
			board[i-1]=" "
	
	if(c==0):
		while(True):
			i=randint(1,9)
			if(i in a):
				board[i-1]="X"
				a.remove(i)
				break
			if(flag==9):
				break
	if(player2.isWin()):
		flag=200
		break
	
	flag=flag+1
	if(flag==9):
		break
	
if(flag==100):
	print ("Player Wins")
elif flag==200 :
	print ("Computer Wins")
else:
	print (" ")
	printBoard()
	print (" ")
	print ("Draw")
