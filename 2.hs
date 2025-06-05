genFib x y z
  | y <= 4000000 = genFib y (x+y) (z ++ [x+y])
  | otherwise = z
 
main :: IO()
main = do
  let fib_seq = genFib 1 1 []
  let e_fib_seq = [x | x <- fib_seq, (mod x 2) == 0]
  print(sum e_fib_seq)