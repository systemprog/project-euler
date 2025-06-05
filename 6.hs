main = do
  let square_of_sum = (sum [1..100])^2
  let sum_of_squares = sum [x^2 | x <- [1..100]]
  print(square_of_sum - sum_of_squares)