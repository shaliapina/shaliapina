'''Написать функцию moar(a, b, n) от трёх параметров — 
целочисленных последовательностей a и b, и натурального 
числа n. Функция возвращает True, если в a больше чисел, 
кратных n, чем в b, и False в противном случае.

Input:

print(moar((25,0,-115,976,100500,7),(32,5,78,98,10,9,42),5))

Output:

True
'''

def moar(a, b, n):
	x=0
	y=0
	for num in a:
		if num%n==0:
			x+=1
	for num in b:
		if num%n==0:
			y+=1
	if x>y:
		return True
	else:
		return False
a = [int(x) for x in input().split(",")]
b = [int(x) for x in input().split(",")]
n = int(input())
print(moar(a, b, n))