lerInput :: IO Int
lerInput = do
    input <- getLine
    return (read input)

-- Considerando reordenacoes
triplaPitagoras :: Int -> Int -> Int -> IO String
triplaPitagoras a b c = do
    if ((a^2)+(b^2)) == (c^2)
        then return "eh uma tripla de Pitagoras quando (a^2) + (b^2) = (c^2)"
        else if ((a^2)+(c^2)) == (b^2)
            then return "eh uma tripla de Pitagoras quando (a^2) + (c^2) = (b^2)"
            else if ((b^2)+(c^2)) == (a^2)
                then  return "eh uma tripla de Pitagoras quando (b^2) + (c^2) = (a^2)"
                else return "nao eh uma tripla de Pitagoras"

main :: IO ()
main = do
    putStrLn "Numero A: "
    a <- lerInput
    putStrLn "Numero B: "
    b <- lerInput
    putStrLn "Numero C: "
    c <- lerInput
    resultado <- triplaPitagoras a b c
    putStrLn resultado