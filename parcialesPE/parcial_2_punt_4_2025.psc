Algoritmo parcial_2_punt_4_2025
	Definir cad, cadMayus, cadMinus, cadDigit como Cadena
	Definir esMayuscula, esMinuscula, esDigito Como Logico
	Definir cont Como Entero
	Definir letra Como Caracter
	
	Repetir
		Escribir "Ingrese cadena: "
		Leer cad
	Hasta Que Longitud(cad)>0 // Sale por Verdad
	
	// la cadena es exclusivamente mayusculas ?
	// la cadena es exclusivamente minusculas ?
	// la cadena es exclusivamente digitos ?
	// la cadena es exclusivamente mixto ?
	
	cont <- 1
	
	Mientras cont<=Longitud(cad) Hacer
		letra <- Subcadena(cad,cont,cont)
		esMayuscula <- letra>="A" Y letra<="Z"
		esMinuscula <- letra>="a" Y letra<="z"
		esDigito <- letra>="0" Y letra<="9"
		
		Si esMayuscula==Verdadero Entonces
			cadMayus<- cadMayus + letra
		Fin Si
		
		Si esMinuscula==Verdadero Entonces
			cadMinus<- cadMinus + letra
		Fin Si
		
		Si esDigito==Verdadero Entonces
			cadDigit<- cadDigit + letra
		Fin Si
		cont <- cont + 1
	Fin Mientras
	
	Si Longitud(cad)==Longitud(cadMayus) Entonces
		Escribir "Son todas mayusculas: " cadMayus
	SiNo
		Si Longitud(cad)==Longitud(cadMinus) Entonces
			Escribir "Son todas minusculas: " cadMinus
		SiNo
			Si Longitud(cad)==Longitud(cadDigit) Entonces
				Escribir "Son todos digitos: " cadDigit
			SiNo
				Escribir "Cadena Mixta"
			Fin Si
		Fin Si
	Fin Si
	

	

	
FinAlgoritmo
