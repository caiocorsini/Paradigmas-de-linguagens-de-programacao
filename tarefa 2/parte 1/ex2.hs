lerInput :: IO Int
lerInput = do
    input <- getLine
    return (read input)

verificaPar :: Int -> IO Bool
verificaPar x = do
    if x `rem` 2 == 0
        then return True
    else
        return False

verificaImpar :: Int -> IO Bool
verificaImpar x = do
    ehImpar <- verificaPar x
    return (not ehImpar)

main :: IO ()
main = do
    putStrLn "Digite um numero inteiro: "
    num <- lerInput
    ehImpar <- verificaImpar num
    
    if ehImpar == True
        then putStrLn "Eh impar"
    else
        putStrLn "Eh par"