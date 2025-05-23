Algoritmo TP2_EJ8_mayusculas
    Definir cad Como Caracter
    Definir esMayuscula, verificarEsMayus, verificarEsMinus Como Logico
    Definir letra1, letra2, letra3, letra4 Como Caracter
    
    Escribir "Ingrese una cadena de exactamente 6 caracteres:"
    Leer cad
    
    // Verificar longitud de la cadena
    Si Longitud(cad) <> 4 Entonces
        Escribir "ADVERTENCIA: La cadena debe tener exactamente 4 caracteres."
    Sino
        // Extraer cada caracter individualmente
        letra1 <- Subcadena(cad, 1, 1)
        letra2 <- Subcadena(cad, 2, 2)
        letra3 <- Subcadena(cad, 3, 3)
        letra4 <- Subcadena(cad, 4, 4)
        
        // Verificar cada caracter secuencialmente
        verificarEsMayus <- Verdadero
		verificarEsMinus <- Verdadero
		
		esMayuscula <- (letra1 >= "A" Y letra1 <= "Z") Y (letra2 >= "A" Y letra2 <= "Z") Y (letra3 >= "A" Y letra3 <= "Z") Y (letra4 >= "A" Y letra4 <= "Z")
		esMinuscula <- (letra1 >= "a" Y letra1 <= "z") Y (letra2 >= "a" Y letra2 <= "z") Y (letra3 >= "a" Y letra3 <= "z") Y (letra4 >= "a" Y letra4 <= "z")
        
        // Verificar letra1
        Si NO (esMayuscula) Entonces
            verificarEsMayus <- Falso
        FinSi
        
        Si NO (esMinuscula) Entonces
            verificarEsMinus <- Falso
        FinSi
        
        // Mostrar resultado
        Si esMayuscula Entonces
            Escribir "La cadena ", cad, " contiene EXCLUSIVAMENTE Mayusculas."
        Sino
			Si esMinuscula Entonces
				Escribir "La cadena ", cad, " contiene EXCLUSIVAMENTE minusculas."
			Sino
				Escribir "CADENA MIXTA MAYUSCULAS Y MINUSCULAS"
			FinSi
        FinSi
    FinSi
FinAlgoritmo
