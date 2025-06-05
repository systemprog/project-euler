isPalindrome :: Int -> Bool
isPalindrome x = (show x) == (reverse (show x))
 
main = do
  let products = [x*y | x <- [100..999], y <- [100..999]]
  let palindromes = [x | x <- products, isPalindrome(x)]
  print(maximum palindromes)