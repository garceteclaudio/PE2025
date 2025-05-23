Algoritmo TP4_es_primo_centinela

	// Centinela, salir de bucle con 1 o varios valores
	Definir num, resto, cont,contDivisible Como Entero
	Definir band Como Logico
	
	Escribir "Ingrese valor: "
	Leer num
	
	cont <-0
	contDivisible <- 0
	
	Mientras num<>cont Hacer // Entre por Verdadero
		cont <- cont + 1
		
		resto <- num mod cont
		EScribir num " mod " cont " = "  resto
		
		Si resto==0 Entonces
			contDivisible  <- contDivisible + 1
		FinSi
	Fin Mientras
	
	Si contDivisible == 2 Entonces
		EScribir "El numero: " num " es primo."
	SiNo
		Escribir "El numero: " num " NO es primo."
	FinSi
FinAlgoritmo
