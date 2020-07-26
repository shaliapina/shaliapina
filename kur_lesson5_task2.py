'''Пользуясь формулой Лейбница для вычисления числа Пи:
написать бесконечный генератор pigen(), возвращающий 
последовательно 4, 4-4/3, 4-4/3+4/5, 4-4/3+4/5-4/7…;

Input:

P=pigen()
print(next(P), next(P), next(P), next(P), sep="\n")

Output:

4.0
2.666666666666667
3.466666666666667
2.8952380952380956
'''

def pigen(a=1,n=0):
	num=0
	while True:
		num+=(4/a)*(-1)**(n)
		n+=1
		a+=2
		yield num


P=pigen()
print(next(P), next(P), next(P), next(P), sep="\n")