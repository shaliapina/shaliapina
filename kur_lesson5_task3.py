'''Написать функцию chainslice(begin, end, seq0, seq1, …), 
которая принимает не менее трёх параметров: два целых числа 
и не менее одной последовательности. 
Рассмотрим последовательность seq, образованную всеми 
элементами seq0, затем — всеми элементами seq1, и т. д. 
Вернуть эта функция должна итератор, пробегающий элементы 
последовательности seq с №begin до №end-1 включительно.

Input:

print(*(chainslice(17, 33, range(7),  range(8),  range(6),  range(9),  range(5))))

Output:

2 3 4 5 0 1 2 3 4 5 6 7 8 0 1 2
'''

from itertools import *
def chainslice(begin,end,seq0,seq1,*seq2):
	seq3=[]
	for i in range(len(seq2)):
		seq3.extend(list(seq2[i]))
	seq = list(chain(seq0, seq1, seq3))
	print(seq)
	i=begin
	while i>=begin and i<end:
		yield seq[i]
		i+=1

print(*(chainslice(17, 33, range(7),  range(8),  range(6),  range(9),  range(5))))
