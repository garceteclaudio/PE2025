Algoritmo suma_de_digitos_cuantos_impares
	Definir num, cont, sum,resto Como Entero
	Escribir "Ingrese un numero: "
	Leer num
	cont <- 0
	sum <- 0
	resto <- 0
	Mientras num<>0 Hacer // Entra por Verdadero
		resto<- num MOD 10
		sum <- sum + resto
		Escribir "Resto: " resto
		Si (resto MOD 2) == 0 Entonces
			Escribir "Es par"
		SiNo
			Escribir "Es impar"
			cont <- cont + 1
		FinSi
		//con trunc le digo, necesito la parte entera de la division
		num<- trunc(num/10) //num DIV 10 
	Fin Mientras
	
	Escribir "La suma de los digitos es: " sum
	Escribir "Cantidad de digitos impares: " cont
	
FinAlgoritmo
