Algoritmo TP3_EJ8_Fibonacci
	//  t1- t2 -t3- t4- t5- t6- t7-  t8
	//  1 - 1 - 2 - 3 - 5 - 8 - 13 - 21 - 34 - 55 - 89 - 144 - 233 - 377
	
	// Calcula un termino de la serie de Fibonacci
	
	Definir num, t1,t2,t3 como Entero
	Escribir "Ingrese terminos a mostrar"
	Leer num
	t1 <- 0
	t2 <- 1
	t3 <- 1
	Para i<-3 Hasta num Con Paso 1 Hacer
		t1 <- t2
		t2 <- t3
		t3 <- t1+t2
	Fin Para
	
	Escribir "El valor del termino: ", num, " es: ",t3
	
	
FinAlgoritmo
