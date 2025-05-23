Algoritmo TP3_EJ_2
	// Potencia mediante productos
	// 2^3=  2 x 2 x 2 = 8
	//base 2, exponente 3
	Definir base, expo, result, i Como Entero
	
	Escribir "Ingrese base: "
	Leer base
	Escribir "Ingrese exponente "
	Leer expo
	result <- 1
	i <- 1
	
	//Para i<-1 Hasta expo Con Paso 1 Hacer
	//	result <- result * base
	//Fin Para
	
	
//	Mientras i <= expo Hacer
//		result <- result * base
//		i <- i + 1
//	Fin Mientras
	
	Repetir
		result <- result * base
		i <- i + 1
	Hasta Que No (i <= expo )
	
	
	
	Escribir "El resultado es: " result
	
FinAlgoritmo
