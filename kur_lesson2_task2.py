'''Ввести небольшое натуральное число 2⩽N⩽1000000 и 
проверить, является ли оно степенью натурального числа (>1). 
Вывести YES или NO соответственно.'''

x = input('Enter a natural number 2⩽N⩽1000000: \n')
flag = 0
flag1 = 0
p=0
for i in range(len(x)):
	if x[i]!=' ' and x[i]!=0 and x[i] != '\n' and flag==0:
		flag = 1
	if flag==1 and x[i]==' ' or x[i] =='\n':
		flag1=1
	if flag==1 and flag1==1 and x[i]!=' ' and x[i]!='\n':
		print('Don\'t use space between digits')
		exit()
	if flag==1 and flag1==0:
		if ord(x[i])<ord('0') or ord(x[i])>ord('9'):
			print('Don\'t use ', x[i])
			exit()
		p=p*10+int(x[i])
for i in range(len(x)):
	pass#if flag == 1 and 
for i in range(len(x)):
	if ord(x[i])==ord('1') and len(x)==1:
		print('The number must be in the interval 2⩽N⩽1000000')
		exit()
x = p
y=x
b=0
for n in range(2,1001):
	if(b==1):
		break
	count=0
	while x>=0:
		x=x/n
		count=count+1
		if x==1 and count>1:
			b=1
			x=y
			break
		elif x<1:
			b=0
			x=y
			break

if b == 1:
	print('Yes')
else:
	print('No')
