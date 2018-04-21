import Data.List
main = do
    [a,b,k] <- map read.words<$>getLine
    mapM_ (putStrLn.show) $nub [x|x<-[a..a+k-1]++[b-k+1..b],a<=x&&x<=b]