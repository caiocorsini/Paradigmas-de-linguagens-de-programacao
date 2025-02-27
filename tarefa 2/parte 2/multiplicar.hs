multiplicar :: Int -> Int -> IO Int
multiplicar a 0 = return 0
multiplicar a 1 = return a
multiplicar a b = do 
    x <- multiplicar a (b-1)
    return (x + a)

lerInput :: IO Int
lerInput = do
    input <- getLine
    return (read input)

main :: IO ()
main = do
    putStrLn "Digite a: "
    a <- lerInput
    putStrLn "Digite b: "
    b <- lerInput
    putStrLn "a vezes b igual a: "
    produto <- multiplicar a b
    putStrLn (show produto)
    return ()