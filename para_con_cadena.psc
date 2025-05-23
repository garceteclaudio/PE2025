Algoritmo para_con_cadena
	
	Definir frase,letra Como Cadena
	Definir i,cont Como Entero
	Definir min, may Como Logico
	
	Escribir  "Ingrese la frase: "
	Leer frase
	cont <- 0
	Para i<-1 Hasta Longitud(frase) Con Paso 1 Hacer
		letra<- SubCadena(frase,i,i)
		Escribir "LEtra: " letra " posicon: " i
		min <- letra='a' o letra='e' o letra='i' o letra='o' o letra='u'
		may <- letra='A' o letra='E' o letra='I' o letra='O' o letra='U'
		Si (min=Verdadero O may=Verdadero) Entonces
			cont <- cont + 1
		Fin Si
	Fin Para
	
	Escribir  "Hay " cont " vocales."
	
FinAlgoritmo
