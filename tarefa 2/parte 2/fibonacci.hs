fibonacci :: Int -> IO Int
fibonacci 0 = return 0
fibonacci 1 = return 1
fibonacci x = do
    f1 <- fibonacci (x - 1)
    f2 <- fibonacci (x - 2)
    return (f1 + f2)

lerInput :: IO Int
lerInput = do
    input <- getLine
    return (read input)

main :: IO ()
main = do
    putStrLn "Digite um numero: "
    num <- lerInput
    result <- fibonacci num
    print result