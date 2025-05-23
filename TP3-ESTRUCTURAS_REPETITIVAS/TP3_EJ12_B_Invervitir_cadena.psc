Algoritmo TP3_EJ12_B_Invervitir_cadena
	
	Escribir "iNGREse entrada "
	Leer c1
	n <- Longitud(c1)
	Repetir
		l <- Subcadena(c1,n,n)
		c2 <- c2 + l
		n <- n - 1
	Hasta Que No(n>0)
	
	Escribir "Salida: " C2
	
FinAlgoritmo
