lerInput :: IO Int
lerInput = do
    input <- getLine
    return (read input)

analisaTriangulo :: Int -> Int -> Int -> IO String
analisaTriangulo a b c = do
    if (a+b) > c && (a + c) > b && (b + c) > a
        then do
            if a==b && b==c && a==c
                then return "Triangulo equilatero"
            else if a/=b && b/=c && a/=c
                then return "Triangulo escaleno"
            else if (a==b && c/=a) || (a==c && b/=a) || (b==c && a/=c)
                then return "Triangulo isoceles"
                else undefined
        else return "Nao forma triangulo"
    
main :: IO ()
main = do
    putStrLn "Lado A: "
    a <- lerInput
    putStrLn "Lado B: "
    b <- lerInput
    putStrLn "Lado C: "
    c <- lerInput
    resultado <- analisaTriangulo a b c
    putStrLn resultado