'''Ввести целое положительное число и проверить, является ли оно палиндромом, 
т. е. совпадает ли первая цифра с последней, вторая — с предпоследней и т. д. 
Представлять число в виде последовательности (строки, списка и т. п.) нельзя. Вывести YES или NO соответственно. 
Лидирующие нули не учитывать (числа, заканчивающиеся на 0 — автоматически не палиндромы).'''


x=input('Enter a positive integer: ')

if x=='':
	exit()
k=0
flag = k
while k < len(x) and x[k]==' ':
	k += 1
	flag = k
i=0
t=len(x)-1
while x[-i-1] == ' ' and i<len(x):
	t=len(x)-i-2
	i += 1
for i in range(k,t-1):
	if x[i]!=' ' and x[i+1] == ' ':
		print('Don\'t use space between digits')
		exit()
for i in range(flag, t + 1):
	if ord(x[i])<ord('0') or ord(x[i])>ord('9'):
		print('Don\'t use ', x[i])
		exit()

a=int(x)
if a<10:
	print('No')
	exit()
b=0
i=0
while flag+i <= t:
	if x[flag+i]!=x[-i-1 -(len(x)-t-1)]:
		b = b+1
	i += 1
if b == 0:
	print('Yes')
else:
	print('No')