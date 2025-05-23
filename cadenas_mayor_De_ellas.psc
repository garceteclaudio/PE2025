Algoritmo cadenas_mayor_De_ellas
	
	// Ingresar cadenas y determinar el mayor de ellas
	// el ingreso termina con ""
	// ademas determinar la cadena de mayor longitud
	
	Definir cad,mayor_cad,mayor_longi_cad como Cadena
	Definir band Como Logico
	Definir mayor_longi Como Entero
	band <- Falso
	
	Repetir
		Escribir "Ingrese cadena: "
		Leer cad
		// mayor palabra, interesa la mayor longitud
		Si cad <> "" Entonces
			Si band==Falso Entonces
				Si cad > mayor_cad Entonces
					mayor_cad<-cad
				Fin Si
				
				Si Longitud(cad) >= mayor_longi  Entonces
					mayor_longi <- Longitud(cad)
					mayor_longi_cad <- cad
				FinSi
				
			SiNo
				mayor_cad <- cad
				mayor_longi <- Longitud(cad)
				band <- Verdadero
			Fin Si
		Fin Si
	Hasta Que cad==""
	
	Escribir "La mayor cadena es:  " mayor_cad
	Escribir "La mayor Longitud es:  " mayor_longi " la cadena con mayor longitud es: " mayor_longi_cad
FinAlgoritmo
