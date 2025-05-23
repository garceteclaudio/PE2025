Algoritmo TP4_EJ4_CALCULAR_CUBO_MEDIANTE_IMPARES
	
	Definir num, cont, impa,resul Como Entero
	
	cont <- 1
	
	Escribir "iNGRESE numero"
	Leer num
	impa <- num*(num-1) + 1
	resul<- 0
	Mientras cont<=num Hacer // 3 <= 3
		Escribir "impa: ", impa
		resul<- impa + resul
		impa <- impa + 2
		cont <- cont + 1
	Fin Mientras
	
	Escribir "Resultado: ", resul
	
FinAlgoritmo
