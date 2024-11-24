import time
start_time = time.time()
c = int(1e7)
for i in range(c):
    print(i)
end_time = time.time()
during = end_time - start_time
print("Time taken",during)