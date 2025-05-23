Algoritmo potencia_mediante_producto_sucesivo_finalizacion_centinela
	Definir base, expo, cont,pot Como Entero

	Repetir
		Escribir "Ingrese base : "
		Leer base
		Escribir  "Ingrese exponente: "
		Leer expo
	Hasta Que base>0 Y expo>=0 //sale por V
	

	pot <- 1
	
	// Criterio de finalizacion por centinela
	Mientras (expo<>0) Hacer//cont<=expo
		pot<-pot*base
		expo<- expo - 1
	FinMientras
	
	Escribir "El resultado es: " pot
	
	
FinAlgoritmo
