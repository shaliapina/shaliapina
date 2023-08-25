'''(Жак Арсак. Программирование игр и головоломок.) 
Для заданной цифры k найти такое минимальное целое 
неотрицательное число, оканчивающееся на k, что, 
умножая его на k, мы получим новое число, 
полученное из предыдущего вычеркиванием цифры k на конце 
и приписыванием ее в начале. 
Строки/кортежи и иные последовательности не использовать.'''



k=input('Введите цифру от 0 до 9 \n')
flag = 0
flag1 = 0
p=0
for i in range(len(k)):
	if flag==0 and k[i]!=' ' and k[i]!=0 and k[i]!='\n':
		flag=1

	if flag == 1 and k[i] in [' ', '\n']:
		flag1=1
	if flag==1 and flag1==1 and k[i]!=' ' and k[i]!='\n':
		print('You must enter only one digit from 0 to 9')
		exit()
	if flag==1 and flag1==0:
		if ord(k[i])<ord('0') or ord(k[i])>ord('9'):
			print('You can\'t use ', k[i])
			exit()
		p=p*10+int(k[i])
		if p//10>0:
			print('You must enter only one digit from 0 to 9')
			exit()

k=p
a=0
b=0
for X in range (1000000000):
	Y=X
	a=0
	while Y>=1:
		Y=Y//10
		a=a+1
	#print(X, Y, a)
	#print(X, k, a, X%10, k*X, X//10, k*10**(a-1), X//10+k*10**(a-1))
	if k==X%10 and k*X==X//10+k*10**(a-1):
		b=1
		break
if b==1:
	print(X)
else:
	print('There\'s no such number')

