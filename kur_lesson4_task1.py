'''Написать функцию, которая принимает два параметра, 
допускающие сложение, а результат сложения — 
умножение на целое число. Функция должна возвращать 
удвоенную сумму своих параметров.

Input:

print(AplusB2("A","B"))

Output:

ABAB
'''
def AplusB2(x,y):
	c=(x+y)*2
	return c
x=input()
y=input()
print(AplusB2(x,y))