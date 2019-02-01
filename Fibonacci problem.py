'''

                            Online Python Compiler.
                Code, Compile, Run and Debug python program online.
Write your code in this editor and press "Run" button to execute it.

In this program, you'll learn to print the Fibonacci sequence using while loop. To understand this example, 
you should have the knowledge of following Python programming topics: Python if...else Statement Python while 
Loop A Fibonacci sequence is the integer sequence of 0, 1, 1, 2, 3, 5, 8.... The first two terms are 0 and 1. 
All other terms are obtained by adding the preceding two terms. This means to say the nth term is the sum of
(n-1)th and (n-2)th term.

'''
#size is the maximum of input, can be adjusted
size = 100
#initialize the array
val = [0 for i in range(size)]

def fib(data):
    if((0 == data) | (1 == data)):
        return 1
    elif(0 == val[data]):
        val[data] = fib(data-1) + fib(data-2)
    return val[data]

print (fib(5))
