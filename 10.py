#using the sieve of eratosthenes

#-1 (not prime), 0 (unvisited), 1 (prime)
sieve = [0]*2_000_000
sieve[0] = -1
sieve[1] = -1

primes = []
for i in range(2, len(sieve)):
  if sieve[i] == 0:
    sieve[i] = 1
    j = 2
    while j*i < len(sieve):
      sieve[j*i] = -1
      j += 1

    primes.append(i)

print(sum(primes))
