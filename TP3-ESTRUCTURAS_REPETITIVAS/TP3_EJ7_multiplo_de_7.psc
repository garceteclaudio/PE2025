Algoritmo TP3_EJ7_multiplo_de_7
	
	Definir num, resto, cantDigitos,ultimoDigito Como Entero
	Escribir "Ingrese un numero"
	Leer num
	cantDigitos <- 0
	band <- Verdadero
	
	Mientras num>0 Hacer
		resto <-  num MOD 10
		ultimoDigito<- resto
		

		cantDigitos <-cantDigitos + 1
		num <- trunc(num/10)
	Fin Mientras
	
	Escribir "Cantidad de digitos: " cantDigitos
	


	
FinAlgoritmo
