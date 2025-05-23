Algoritmo potencia_mediante_producto_sucesivo_finalizacion_bandera
	Definir base, expo, cont,pot Como Entero
	Definir bandera Como Logico
	
	Repetir
		Escribir "Ingrese base : "
		Leer base
		Escribir  "Ingrese exponente: "
		Leer expo
	Hasta Que base>0 Y expo>0 //sale por V
	
	bandera <- Verdadero
	pot <- 1
	
	// Criterio de finalizacion por bandera
	Mientras  (bandera) Hacer
		pot<-pot*base

		expo <- expo - 1
		
		Si expo=0 Entonces
			bandera <- Falso
		Fin Si
		
	FinMientras
	
	Escribir "El resultado es: " pot
	
	
FinAlgoritmo
