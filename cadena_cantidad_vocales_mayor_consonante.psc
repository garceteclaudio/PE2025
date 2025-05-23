Algoritmo cadena_cantidad_vocales_mayor_consonante
	Definir cad como Cadena
	Definir mayorConso Como Caracter
	Definir cantVocal, cantConso, aux, cont como Entero
	Definir minus, mayus, primera Como Logico

	Repetir
		Escribir "Ingrese cadena"
		Leer cad
	Hasta Que Longitud(cad)>0 //Sale por Verdadero
	
	cantVocal <- 0
	cantConso <- 0
	aux <- 1
	primera <- Falso
	Mientras aux<=Longitud(cad) Hacer
		letra <- SubCadena(cad,aux,aux)
		minus <- letra=="a" o letra=="e" o letra=="i" o letra=="o" o letra=="u"
		mayus <- letra=="A" o letra=="E" o letra=="I" o letra=="O" o letra=="U"
		
		Si (minus==Verdadero o mayus==Verdadero) Entonces	//Es Vocal
			cantVocal <- cantVocal + 1
		SiNo
			cantConso <- cantConso + 1
			Si primera==Verdadero Entonces
				Si letra>=mayorConso Entonces
					mayorConso<-letra
				SiNo
				Fin Si
			SiNo
				mayorConso<-letra
				primera <- Verdadero
			Fin Si
		Fin Si
		aux <- aux + 1
	Fin Mientras
	
	Escribir "Cantidad vocales: " cantVocal
	Escribir "Cantidad Consonantes: " cantConso
	Escribir "Mayor Consonante: " mayorConso
	
FinAlgoritmo
