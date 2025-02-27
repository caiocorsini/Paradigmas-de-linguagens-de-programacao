lerInput :: IO Int
lerInput = do
    x <- getLine
    return (read x)  --"read" converte uma string para outro tipo de dado
    
difAbs :: Int -> IO Int
difAbs x = do
    if x <= 21
        then return (abs(x-21))
    else
        return ((abs(x-21)) * 2)

main :: IO ()
main = do
    putStrLn "Digite um numero qualquer: "
    num <- lerInput
    resultado <- difAbs num
    putStrLn "Resultado: "
    putStrLn (show resultado)
 