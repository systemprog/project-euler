isDivisibleHelper :: Int -> Int -> Bool
isDivisibleHelper inc x
  | inc == 21 = True
  | mod x inc == 0 = isDivisibleHelper (inc+1) x
  | otherwise = False
 
isDivisible :: Int -> Bool
isDivisible x = isDivisibleHelper 1 x
 
findSmallestHelper :: Int -> Int
findSmallestHelper x
  | isDivisible x = x
  | otherwise = findSmallestHelper (x+1)
 
findSmallest = findSmallestHelper 1
 
main = print(findSmallest)