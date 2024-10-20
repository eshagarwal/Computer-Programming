#  WAP that counts that counts till '1,000,000,000'

from time import time

# Start time
start_time = time()

n = 0
while ( n < 1_000_000_000):
    n += 1

# End time
end_time = time()

print(n)

print(f"Time taken is {(end_time-start_time):.2f}s")