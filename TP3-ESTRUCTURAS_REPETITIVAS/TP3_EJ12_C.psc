Algoritmo TP3_EJ12_C
	Escribir "Ingrese valor: "
	leer n
	
	Si n<0 Entonces
		n <- n * (-1)
	Fin Si
	
	x <- 2*n-1
	s<-0
	Repetir
		s<-s+x
		x<-x-2
	Hasta Que No(x>0)
	Escribir "Salida: " , s
	
FinAlgoritmo
