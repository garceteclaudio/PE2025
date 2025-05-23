Algoritmo TP3_EJ_5_extraer_digitos_de_un_numero_y_sumar
	
	Definir num, resto, suma Como Entero
	Escribir "Ingreso numero "
	Leer num
	suma <- 0
	
//	Mientras num>0 Hacer
//		resto <- num MOD 10
//		suma <- suma + resto
//		num <- trunc(num/10)
//	Fin Mientras
	
	Repetir
		resto <- num MOD 10
		suma <- suma + resto
		num <- trunc(num/10)
	Hasta Que NO (num>0) // Sale por Verdadero
	
	Escribir "Suma de los digitos: " suma
	
FinAlgoritmo
