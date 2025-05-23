Algoritmo TP4_EJ2_calcular_cuadrado_suma_de_impares
	
	// Criterio de finalizacion: contadorr
	
	Definir num,cont,valImpar, sumarImpares Como Entero
	
	Escribir "Ingrese numero : "
	Leer num
	cont <- 0
	sumarImpares <- 0
	
	Mientras cont<num Hacer//  Entra por Verdadero, Sale por Falso
		
		valImpar <- 2*cont + 1
		Escribir "valImpar: " valImpar
		sumarImpares <- sumarImpares + valImpar
		
		cont <- cont + 1
	Fin Mientras 
	
	Escribir "El cuadrado es: " sumarImpares
	
FinAlgoritmo
