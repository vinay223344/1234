					#Assignment-5
#1)
#a)Length of strings:
print('Length of string “\n\n” is ' , len("\n\n") )
'''
Length of string “

” is  2
'''

print('Length of string “\\n” is ' , len("\\n") )
'''
Length of string “\n” is  2
'''

print('Length of string" \"\"" is ',len("\"\""))
'''
Length of string" """ is  2
'''

#print('Length of string "\" is ',len("\"))
'''
SyntaxError: EOL while scanning string literal
'''

print('Length of string "\\" is ',len("\\"))
'''
Length of string "\" is  1
'''

print('Length of string "\\\\n" is ',len("\\\\n"))
'''
Length of string "\\n" is  3
'''

print('Length of string "\'\'" is ',len("\'\'"))
'''
Length of string "''" is  2
'''

print("Length of string '\"\"' is ",len('\"\"'))
'''
Length of string '""' is  2
'''

#b)Checking specific type of characters:
string1 ="AllAreAlphabets"
print("The return value of string1.isalpha() =", string1.isalpha() )
'''
The return value of string1.isalpha() = True
'''

string1 ="123AreNotAlphabets.456AreAlsoNot"
print("The return value of string1.isalpha() = " , string1.isalpha() )
'''
The return value of string1.isalpha() =  False
'''

print("The return value of string1[0:3].isdigit() = " , string1[0:3].isdigit())
'''
The return value of string1[0:3].isdigit() =  True
'''

print("The return value of string1[0:3].isdigit() = " , string1[0:3].isdigit())
'''
The return value of string1[0:3].isdigit() =  True
'''

print("The return value of (string1[0:3]+string1[19:22]*4).isdigit() =",(string1[0:3]+string1[19:22]*4).isdigit())
'''
The return value of (string1[0:3]+string1[19:22]*4).isdigit() = True
'''

string1 ="    There are 4 spaces in front of me"
print("The return value of string1[0:4].isspace() =",string1[0:4].isspace())
'''
The return value of string1[0:4].isspace() = True
'''

#c)Case Conversion
string1 ="-2-10aBc\\n 123dEf "
print("The return value of string1.upper() = " , type(string1.upper()))
#The return value of string1.upper() =  -2-10ABC\N 123DEF

print("The return value of string1.lower() = " , type(string1.lower()))
'''
The return value of string1.lower() =  -2-10abc\n 123def
'''

print("The return value of string1.title() = ",type(string1.title()))
#The return value of string1.title() =  -2-10Abc\N 123Def

string1 ="Wh is the starting string for statements that ends with?"
print(string1.startswith("Wh"))
#True

print(string1.startswith('W'))
#True

#print(string1.startswith())
#TypeError: startswith() takes at least 1 argument (0 given)

print(string1.startswith(string1[0:2].upper().lower().title()))
#True

#print(''.startswith())
#TypeError: startswith() takes at least 1 argument (0 given)


print(string1.endswith("?"))
#True

print("endswith".endswith("endswith"))
#True

#print(''.endswith())
#TypeError: endswith() takes at least 1 argument (0 given)

#e)Joining and splitting :
string1 ="Who can separate IandYOU?"
print(string1.split('and'))
#['Who can separate I', 'YOU?']

print(string1.split())
#['Who', 'can', 'separate', 'IandYOU?']

print(string1.split('YO'))
#['Who can separate Iand', 'U?']

string1 ="and"
print(string1.join(('I' , 'YOU')))
#IandYOU

#"".join('I','YOU')
#we need pass the arguments as tuple or list if we try to pass two or more than that

print(string1.join(['I' , 'YOU']))
#IandYOU

#print("".join(((1),(2))))
#TypeError: sequence item 0: expected str instance, int found

print('='.join(['2' , 'Two']).endswith('Two'))
#True

#''.join()
#TypeError: join() takes exactly one argument (0 given)


#f)Find and Replace
print("0123456789".find('0'))
#0

print("0123456789".find('1'))
#1

print("0123456789".find('12'))
#1

print("0123456789".find('567'))
#5

print("0123456789".find('-2'))
#-1

print("can you find me?".find('yes'))
#-1

print("who can reach me?".find("me"))
#14

#print("Nothing to find".find())
#TypeError: find() takes at least 1 argument (0 given)

print("we had lunch".replace('lunch' , "launched"))
#we had launched

print("Nobody can replace me".replace('Nobody' , 'Anybody').replace('Anybody' , 'who'.title()))
#Who Can Replace Me

print("I’m a good person".replace("good" , "bad").replace("I’m" , "You’re"))
#You’re a bad person

print("You can’t replace me".replace('I' , 'you'))
#You can’t replace me

print("".replace('','Empty'))
#Empty

print("yyyyy".replace('','o'))
#oyoyoyoyoyo

#"".replace('')
#TypeError: replace() takes at least 2 arguments (1 given)

#''.replace()
#TypeError: replace() takes at least 2 arguments (0 given)

#g)Chopping/Trimming :

print(" \n\n Spaces and new lines around me \n\n \n\n ".strip())
#Spaces and new lines around me

print(" \n\n Spaces and new lines around me \n\n \n\n ".rstrip())
'''
 

 Spaces and new lines around me
'''

print(" \n\n Spaces and new lines around me \n\n \n\n ".lstrip())
'''
Spaces and new lines around me 

 

 
'''

print(" \n\n Spaces and new lines around me \n\n \n\n ".strip('\n'))
'''
 Spaces and new lines around me 

 

 
'''

print(" \n\n Spaces and new lines around me \n\n \n\n ".lstrip('\n'))
'''
 Spaces and new lines around me 

 

 
'''

print("??QuestionMarksAroundMe??".strip())
#??QuestionMarksAroundMe??

print("??QuestionMarksAroundMe??".strip('?'))
#QuestionMarksAroundMe

print("??QuestionMarksAroundMe??".strip('.?.'))
#QuestionMarksAround

