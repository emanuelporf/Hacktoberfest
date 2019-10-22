mergeSort :: (Ord a) => [a] -> [a]
mergeSort [] = []
mergeSort [a] = [a]
mergeSort x = 
    let size = length x
        firstHalf = take (div size 2) x
        secondHalf = drop (div size 2) x
        firstSortedHalf = mergeSort firstHalf
        secondSortedHalf = mergeSort secondHalf
    in merge firstSortedHalf secondSortedHalf

merge :: (Ord a, Eq a) => [a] -> [a] -> [a]
merge [] x = x
merge x [] = x 
merge xl@(x:xs) ll@(l:ls) = if (x>l) then l:(merge xl ls) else  x:(merge xs ll) 




