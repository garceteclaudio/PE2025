Algoritmo TP2_EJ4_TRIANGULOS
    Definir ladoA, ladoB, ladoC, hipotenusa Como Real
    Definir existe Como Logico
    Definir tipoLados, tipoAngulos Como Cadena
    
    Escribir "ANÁLISIS DE TRIÁNGULOS"
    Escribir "Ingrese las longitudes de los tres lados:"
    Escribir "Lado 1:"
    Leer ladoA
    Escribir "Lado 2:"
    Leer ladoB
    Escribir "Lado 3:"
    Leer ladoC
    
    // C) Verificación de existencia del triángulo
    existe <- (ladoA + ladoB > ladoC) Y (ladoA + ladoC > ladoB) Y (ladoB + ladoC > ladoA)
    
    Si existe Entonces
        Escribir "SI es posible formar un triángulo con estas medidas."
        
        // D) Clasificación por lados
        Si (ladoA = ladoB) Y (ladoB = ladoC) Entonces
            tipoLados <- "Equilátero"
            Escribir "Es Triángulo Equilátero"
        Sino
            Si (ladoA = ladoB) O (ladoB = ladoC) O (ladoA = ladoC) Entonces
                tipoLados <- "Isósceles"
                Escribir "Es Triángulo Isósceles"
            Sino
                tipoLados <- "Escaleno"
                Escribir "Es Triángulo Escaleno"
            FinSi
        FinSi
        
        // E) Cálculo de la hipotenusa (si es rectángulo)
        // F) Identificación de triángulos rectángulos
        // Primero ordenamos los lados para identificar el mayor (hipotenusa)
        Si ladoA > ladoB Y ladoA > ladoC Entonces
            hipotenusa <- ladoA // el lado mas grande es hipotenusa
            cateto1 <- ladoB
            cateto2 <- ladoC
        Sino 
			Si ladoB > ladoA Y ladoB > ladoC Entonces
				hipotenusa <- ladoB // el lado mas grande es hipotenusa
				cateto1 <- ladoA
				cateto2 <- ladoC
			Sino
				hipotenusa <- ladoC // el lado mas grande es hipotenusa
				cateto1 <- ladoA
				cateto2 <- ladoB
			FinSi
			
			// Verificamos si es rectángulo
			Si (cateto1^2 + cateto2^2 = hipotenusa^2) Entonces
				tipoAngulos <- "Rectángulo"
				Escribir "Por sus ángulos es: Rectángulo"
				Escribir "La hipotenusa mide: ", hipotenusa
			Sino 
				Si (cateto1^2 + cateto2^2 > hipotenusa^2) Entonces
					tipoAngulos <- "Acutángulo"
					Escribir "Por sus ángulos es: Acutángulo"
				Sino
					tipoAngulos <- "Obtusángulo"
					Escribir "Por sus ángulos es: Obtusángulo"
				FinSi
			FinSi
		FinSi
	Sino
			Escribir "NO es posible formar un triángulo con estas medidas."
			Escribir "Recuerde: La suma de cualquier par de lados debe ser mayor que el tercero."
	FinSi
		
FinAlgoritmo