Algoritmo mientras_division_mediante_restas
	Definir num,dividendo,divisor,cont Como Entero
	
	Escribir "Ingrese un dividendo"
	Leer dividendo
	Escribir "Ingrese un divisor"
	Leer divisor
	cont<-0
	Mientras dividendo>=divisor Hacer
		dividendo<- dividendo - divisor
		cont<-cont+1
	Fin Mientras
	
	Escribir "Resto: " dividendo
	Escribir "Cociente:; " cont
	
	
FinAlgoritmo
