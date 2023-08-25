'''Ввести несколько строк одинаковой длины, 
состоящих из символов '#' и '.'. Первый и последний символ 
каждой строки — '.', а первая и последняя строки состоят 
целиком из '-'. Известно (проверять не надо), 
что на получившемся поле изображены только прямоугольника, 
причём они не соприкасаются даже углами. 
Вывести количество этих прямоугольников.
------------
.###.....#..
.###.##..#..
.....##.....
.....##..#..
............
............
.####..####.
.......####.
.......####.
------------
Output: 6'''
def printel(matrix,n,m):
	for i in range(n):
		for j in range(m):
			print(matrix[i][j],end='')
		print()
import sys
j=0
i=0
l='a'
p=[[]]
print(p)
flag=0
flag1=0
i=0
m=0
n=0
while 1:
	l=sys.stdin.read(1)
	if (l=='\n' and flag1==1):
		flag+=1
	elif l == '\n' and flag < 2:
		p.append([])
		i+=1
		n+=1
	elif(l=='-'):
		flag1=1
	else:
		p[i].append(l)
		flag1=0
		m+=1
	if(flag==2):
		break
del p[i]
'''print('*'*35)
print(p)
printel(p,i,len(p[0]))'''
m=int(m/n)
i=0
j=0
a=0
flag2=0
while 1:
	if flag2==0 and p[i][j]=='#':
		a+=1
		#print(a)
		if i>0 and p[i-1][j]=='#':
			a-=1
			#print(a)
	flag2 = 1 if p[i][j]=='#' else 0
	j+=1
	if j==m:
		j=0
		i+=1
	if i==n-1 and j==m-1:
		break

#print(p[i][j])
print(a)
#print(m)
#print(n)


