lerInput :: IO Int
lerInput = do
    input <- getLine
    return (read input)

verificaPar x = do
    if x `rem` 2 == 0
        then return True
    else
        return False

main :: IO ()
main = do
    putStrLn "Digite um numero inteiro: "
    num <- lerInput
    ehPar <- verificaPar num
    
    if ehPar == True
        then putStrLn "Eh par"
    else
        putStrLn "Eh impar"