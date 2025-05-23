Algoritmo ejemplo_cociente
	Definir dividendo, divisor Como Entero
	Definir cociente_real Como Real
	Definir cociente_entero, resto Como Entero
	
	Escribir "Ingrese dividendo "
	Leer dividendo
	Escribir "Ingrese divisor "
	Leer divisor
	// Devuelve resultado Real
	cociente_real <- dividendo/divisor
	Escribir "Resultado cociente_real: " cociente_real
	
	cociente_entero<- trunc(dividendo/divisor)
	Escribir "Resultado cociente_entero: " cociente_entero
	
	resto<- dividendo MOD divisor
	Escribir "Resultado resto: " resto
FinAlgoritmo
