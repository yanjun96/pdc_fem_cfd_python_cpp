def error(N):
    if N < 0:
        raise ValueError("N must be larger than 0")
    add = lambda x: x**2
    c = add (N)
    return c

x = int (input("please input the first number: "))

y = int (input("please input the second number: "))

print( error(x) )

print( error(y) )
