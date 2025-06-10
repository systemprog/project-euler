import math

#this solution uses the fact that all primes are adjacent to some multiple of six (except for 2 and 3)

def isPrime(given):
  """returns True if given is prime, False otherwise."""
  
  for i in range(2, int(math.sqrt(given))+1):
    if given % i == 0:
      return False

  return True

if __name__ == '__main__':
  primes_list = [2, 3]

  six_multiplier = 1
  while len(primes_list) < 10001:
    above = 6*six_multiplier - 1
    below = 6*six_multiplier + 1

    if isPrime(below):
      primes_list.append(below)
  
    if isPrime(above):
      primes_list.append(above)

    six_multiplier += 1

  print(primes_list[10000])
