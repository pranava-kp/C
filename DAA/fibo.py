count3 = 0  # Initialize count3 as a global variable

def fibonacci(num):
    global count3  # Declare count3 as global to modify it
    if num == 3:
        count3 += 1  # Increment count3 when num is 3
    
    global fibo, count  # Declare other global variables if necessary
    if num <= (len(fibo) - 1):
        return fibo[num]
    else:
        fibo.append(fibonacci(num - 1) + fibonacci(num - 2))
        return fibo[num]

fibo = []
fibo.append(0)
fibo.append(1)
count = 1
n = 6
print(n, "th Fib is", fibonacci(n))
print("Count is", count3)
