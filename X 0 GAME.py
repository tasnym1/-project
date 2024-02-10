def display(main_list):
    for j in range (0,9,3):
      print (main_list[j] ,"|", main_list[j+1],"|",main_list[j+2])
      print ("---------")


def change(main_list,symbol):
  while True:
   player_input=int(input ("enter a number (1:9) : "))
   if main_list[player_input-1]!="X" and main_list[player_input-1]!="O":
    main_list[player_input-1]=symbol
    display(main_list)
    break
   else:
     print("invalid position, please try again !")
 


def result (x,symbol,player_name):
 
 for i in range (0,9,3):
   if x[i]==symbol and x[i+1]==symbol and x[i+2]==symbol:
     print(player_name , " is the winner ")
     exit()
 for i in range (0,3):
   if x[i]==symbol and x[i+3]==symbol and x[i+6]==symbol:
     print(player_name , " is the winner ")
     exit()
   

 if x[0]==symbol and x[4]==symbol and x[8]==symbol:
   print(player_name , " is the winner ")
   exit()
 
 if x[2]==symbol and x[4]==symbol and x[6]==symbol:
   print(player_name , " is the winner ")
   exit()
 new=[]
 for element in x:
   if element=="X" or element== "O":
    new.append(element)
 if len(x)==len(new):
  print ("no winner !\n the Game is ended")
  exit()  
     

    



print("welcome to X O game !\n 1.start the game \n 2.quit the game")
input_user=input("your choice is 1 or 2 : ")
if input_user=="1":
  while True:
    name1=input("player1 name is : ")
    if name1.isalpha():
      break
    else:
      print("please try again !")
  while True:
    symbol1=input(" X or O ? ")
    if symbol1 == "x" or symbol1== "X" or symbol1== "o" or symbol1=="O":
      symbol1= symbol1.upper()
      break
    else:
      print("please try again !")
  while True:
    name2=input("player2 name is : ")
    if name2.isalpha():
      break
    else:
      print("please try again !")
  
  if symbol1== "X":
    symbol2="O"
  elif symbol1== "O":
    symbol2="X"
else:
  exit()


    
      

main_list=["1","2","3","4","5","6","7","8","9"]

display(main_list)
i=0
while True:
  if i % 2==0:
   print (name1, "turn")
   i+=1
   change (main_list,symbol1)
   result(main_list,symbol1,name1)
     
  else:
   print(name2,"turn")
   
   i+=1
   change (main_list,symbol2)
   result(main_list,symbol2,name2)
  

