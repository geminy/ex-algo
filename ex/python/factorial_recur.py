#!/usr/bin/env python

def factorial(number):
	if number < 0:
		return 0
	elif number == 0:
		return 1
	else:
		return number * factorial(number - 1)

def _factorial_tail(number, sum):
	if number < 0:
		return 0
	elif number == 0:
		return sum
	else:
		return _factorial_tail(number - 1, number * sum)

def factorial_tail(number):
	return _factorial_tail(number, 1)

if __name__ == '__main__':
	print factorial(5)
	print factorial_tail(5)
