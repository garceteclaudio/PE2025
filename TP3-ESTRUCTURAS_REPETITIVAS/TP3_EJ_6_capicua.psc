Algoritmo TP3_EJ_6_capicua
	Definir num, resto, suma, numInv, numOriginal Como Entero
	Escribir "Ingreso numero "
	Leer num

	numOriginal <- num
	numInv <- 0
	Mientras num>0 Hacer
 	    resto <- num MOD 10
		numInv <- numInv*10 + resto
		num <- trunc(num/10)
	Fin Mientras

	Si (numOriginal==numInv) Entonces
		Escribir "Es capicua"
	SiNo
		Escribir "No es capicua"
	FinSi

	
FinAlgoritmo
