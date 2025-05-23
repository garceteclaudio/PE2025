Algoritmo ejemplo_para
	Para x<-1 Hasta 4 Con Paso 1 Hacer // desde 1 hasta 4 incluido
		Escribir "Hola desde el para x: " x
	Fin Para
	
	// Ingresar x valores del usuario y sumarlos
	// cuantos valores se sumaron ?
	Definir num,suma,cant,cont Como Entero
	suma <- 0
	cont <- 0
	Escribir "Cuantos valores quiere sumar: "
	Leer cant
	Para x<-1 Hasta cant Con Paso 1 Hacer
		Escribir "Ingrese valor: "
		Leer num
		
		cont<- cont + 1 //Acumulador
		suma<-suma+num //Contador
	Fin Para
	Escribir "Resultado de la suma: " suma
	Escribir "Veces q sumaste: " cont
FinAlgoritmo
