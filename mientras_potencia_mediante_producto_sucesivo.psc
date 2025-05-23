Algoritmo potencia_mediante_producto_sucesivo
	Definir base, expo, cont,pot Como Entero

	Repetir
		Escribir "Ingrese base : "
		Leer base
		Escribir  "Ingrese exponente: "
		Leer expo
	Hasta Que base>0 Y expo>=0 //sale por V
	
	cont <- 1
	pot <- 1
	
	// Criterio de finalizacion por contador
	Mientras cont<=expo
		pot<-pot*base
		cont<-cont+1
	FinMientras
	
	Escribir "El resultado es: " pot
	
	
FinAlgoritmo
