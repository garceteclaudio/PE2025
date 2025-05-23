Algoritmo sin_titulo
	//Diseñar un algoritmo q permita ingresar una cadea
	// e inidicar si esta se compone exclusivamente de digitos
	// obtener su equivalente numerico
	Definir cad como Cadena
	Definir  letra Como Caracter
	Definir  i,digito,numCompleto Como Entero
	Definir esNumero, controlDigito, controlMayuscula Como Logico
	

	Repetir
		Escribir "Ingrese cadena: "
		leer cad
	Hasta Que Longitud(cad)>0 //sale por verdadero
	
	controlDigito <- Verdadero

	Para i<-1 Hasta Longitud(cad) Con Paso 1 Hacer
		letra <- Subcadena(cad,i,i)
		esNumero <- letra>="0" Y letra<="9"
		Si No(esNumero) Entonces
			Escribir "No es un numero, es: ", letra
			controlDigito <- Falso
		FinSi
	Fin Para
	// No( letra>="0" Y letra<="9" )
	// se trata de letra o caracteres especiales ? (no digitos)
	// letra < "0" o letra >"9"

	Si controlDigito==Verdadero Entonces
		Escribir "EXCLUSIVAMENTE DIGITOS"
		num <- 0
		Para i<-1 Hasta Longitud(cad) Con Paso 1 Hacer
			letra <- Subcadena(cad,i,i)
			Segun letra Hacer
				"0":
					digito <- 0
				"1":
					digito <- 1
				"2":
					digito <- 2
				"3":
					digito <- 3
				"4":
					digito <- 4
				"5":
					digito <- 5
				"6":
					digito <- 6
				"7":
					digito <- 7
				"8":
					digito <- 8
				"9":
					digito <- 9
				De Otro Modo:
					Escribir "No es digito"
			Fin Segun
			num <- 10*num+digito
		Fin Para
		Escribir "El numero es : ", num
	SiNo
		Escribir "Invalido"
	FinSi
	
FinAlgoritmo
