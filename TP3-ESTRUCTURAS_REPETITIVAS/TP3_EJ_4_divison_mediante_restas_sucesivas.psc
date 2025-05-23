Algoritmo TP3_EJ_4
	// 7 / 2 = 3 resto 1
	// DIVIDENDO  divisor
	// 7      -       2    =     5
	// 5      -       2    =     3
	// 3       -      2    =     1
	// 1      -       2 	    NO
	// Cociente = 3 Resto = 1
	
	Definir dividendo, divisor, cont, aux Como Entero

	Repetir
		Escribir "Ingrese dividendo "
		leer dividendo
		Escribir "Ingrese divisor "
		leer divisor
	Hasta Que dividendo>0 Y divisor>0
	
	cont <- 0
	
//	Mientras dividendo>=divisor Hacer
//		dividendo <- dividendo - divisor
//		cont <- cont + 1
//	Fin Mientras
	
	Repetir
		dividendo <- dividendo - divisor
		cont <- cont + 1
	Hasta Que NO (dividendo>=divisor)
	
	Escribir "Cociente: " cont
	Escribir "Resto: " dividendo
	
FinAlgoritmo
