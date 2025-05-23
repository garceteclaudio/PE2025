Algoritmo mientras_factorial
	
	Definir num,fact Como Entero

	Escribir "Ingrese numero para factorial: "
	Leer num
	fact<-1

	Mientras num>0 Hacer
		fact<-fact*num
		num<- num-1
	Fin Mientras
	
	Escribir "El factorial del numero es: " fact
	
	
FinAlgoritmo
