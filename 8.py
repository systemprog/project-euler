number_string = ''
with open('./8.txt', 'r') as file:
  for line in file:
    number_string += line.strip()

greatest_product = -1
for i in range(0, len(number_string)-13):
  product = 1a
  for j in range(i, i+13):
    product *= int(number_string[j])

  if product > greatest_product:
    greatest_product = product

print(greatest_product);
