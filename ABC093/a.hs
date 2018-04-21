main = do
    s <- getLine
    if elem 'a' s && elem 'b' s && elem 'c' s then putStrLn "Yes" else putStrLn "No"