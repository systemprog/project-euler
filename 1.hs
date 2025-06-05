main = do
  let multiples = [x | x <- [3..999], ((mod x 3) == 0 ) || ((mod x 5) == 0)]
  print(sum multiples)