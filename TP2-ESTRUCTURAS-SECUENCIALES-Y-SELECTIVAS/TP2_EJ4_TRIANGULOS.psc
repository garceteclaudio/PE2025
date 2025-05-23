Algoritmo TP2_EJ4_TRIANGULOS
    Definir ladoA, ladoB, ladoC, hipotenusa Como Real
    Definir existe Como Logico
    Definir tipoLados, tipoAngulos Como Cadena
    
    Escribir "AN�LISIS DE TRI�NGULOS"
    Escribir "Ingrese las longitudes de los tres lados:"
    Escribir "Lado 1:"
    Leer ladoA
    Escribir "Lado 2:"
    Leer ladoB
    Escribir "Lado 3:"
    Leer ladoC
    
    // C) Verificaci�n de existencia del tri�ngulo
    existe <- (ladoA + ladoB > ladoC) Y (ladoA + ladoC > ladoB) Y (ladoB + ladoC > ladoA)
    
    Si existe Entonces
        Escribir "SI es posible formar un tri�ngulo con estas medidas."
        
        // D) Clasificaci�n por lados
        Si (ladoA = ladoB) Y (ladoB = ladoC) Entonces
            tipoLados <- "Equil�tero"
            Escribir "Es Tri�ngulo Equil�tero"
        Sino
            Si (ladoA = ladoB) O (ladoB = ladoC) O (ladoA = ladoC) Entonces
                tipoLados <- "Is�sceles"
                Escribir "Es Tri�ngulo Is�sceles"
            Sino
                tipoLados <- "Escaleno"
                Escribir "Es Tri�ngulo Escaleno"
            FinSi
        FinSi
        
        // E) C�lculo de la hipotenusa (si es rect�ngulo)
        // F) Identificaci�n de tri�ngulos rect�ngulos
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
			
			// Verificamos si es rect�ngulo
			Si (cateto1^2 + cateto2^2 = hipotenusa^2) Entonces
				tipoAngulos <- "Rect�ngulo"
				Escribir "Por sus �ngulos es: Rect�ngulo"
				Escribir "La hipotenusa mide: ", hipotenusa
			Sino 
				Si (cateto1^2 + cateto2^2 > hipotenusa^2) Entonces
					tipoAngulos <- "Acut�ngulo"
					Escribir "Por sus �ngulos es: Acut�ngulo"
				Sino
					tipoAngulos <- "Obtus�ngulo"
					Escribir "Por sus �ngulos es: Obtus�ngulo"
				FinSi
			FinSi
		FinSi
	Sino
			Escribir "NO es posible formar un tri�ngulo con estas medidas."
			Escribir "Recuerde: La suma de cualquier par de lados debe ser mayor que el tercero."
	FinSi
		
FinAlgoritmo