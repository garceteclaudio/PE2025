Algoritmo TP3_EJ_12
	
	Escribir "ingrese valor"
	Leer a
	Escribir "ingrese valor"
	Leer b
	
	Si a>0 Entonces
		i <- -1
	SiNo
		i <- i
	Fin Si
	
	s <- 0
	
	Repetir
		s<-s+b
		a<-a+i
	Hasta Que No(a<>0)
	
	s <- s * (-i)
	
	Escribir "Salida: ",s
FinAlgoritmo
