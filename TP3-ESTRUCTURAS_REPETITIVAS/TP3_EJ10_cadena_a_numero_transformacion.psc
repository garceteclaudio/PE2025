Algoritmo TP3_EJ10_cadena_a_numero_transformacion
	// Cadena de cualquier longitud
	//Si tiene unicamente digitos realizar; "1985" - > 1985
	// si cadana nula o caracteres no validos-> mensaje de advertencia q vuelva ingresar cadena de digitos
	
	Definir cad como Cadena
	Definir letra Como Caracter
	Definir todosSonDigitos Como Logico
	Definir num, digito como Entero
	
	Repetir
		Escribir "Ingrese cadena"
		Leer cad
	Hasta Que Longitud(cad)>0 //Sale por Verdadero
	
	num<- 0
	
	Para i<-1 Hasta Longitud(cad) Con Paso 1 Hacer
		letra <- Subcadena(cad,i,i)
		logi <- letra>="0" Y letra <="9"
		Si logi==Verdadero Entonces
			Escribir "letra: " letra " es numerico."
			//
			Segun letra Hacer
				"0":
					digito<-0
				"1":
					digito<-1
				"2":
					digito<-2
				"3":
					digito<-3
				"4":
					digito<-4
				"5":
					digito<-5
				"6":
					digito<-6
				"7":
					digito<-7
				"8":
					digito<-8
				"9":
					digito<-9
			Fin Segun
			num <- num * 10 + digito
		FinSi
	Fin Para
	
	Escribir "El numero es : " num
	
	
	
	
	
FinAlgoritmo
