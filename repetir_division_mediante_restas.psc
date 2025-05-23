Algoritmo repetir_division_mediante_restas
	Definir num,dividendo,divisor,cont Como Entero
	
	Escribir "Ingrese un dividendo"
	Leer dividendo
	Escribir "Ingrese un divisor"
	Leer divisor
	cont<-0

	
	Repetir //Repite por Falso
		dividendo<- dividendo - divisor
		cont<-cont+1
	Hasta Que dividendo < divisor //Sale por Verdadero
	
	Escribir "Resto: " dividendo
	Escribir "Cociente:; " cont
FinAlgoritmo
