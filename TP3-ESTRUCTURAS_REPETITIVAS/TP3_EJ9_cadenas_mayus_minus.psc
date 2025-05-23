Algoritmo TP3_EJ9_cadenas_mayus_minus
	
	// determinar si tiene caracteres alfabetifcos, mayusculas y minusculas
	// no se aceptan cadenas nulas
	Definir cad como Cadena
	Definir letra Como Caracter
	Definir contMayus,contMinus Como Entero
	Definir tieneMayus Como Logico
	Definir tieneMinus Como Logico
	contMayus<- 0
	contMinus <- 0
	tieneMayus<- Falso
	tieneMinus<- Falso
	
	Repetir
		Escribir "Ingrese CAdena: "
		Leer cad
		
	Hasta Que Longitud(cad)>0 // Sale por V
	
	Escribir "Cad : " , cad
	
	Para i<-1 Hasta Longitud(cad) Con Paso 1 Hacer
		letra <- Subcadena(cad,i,i)
		minus <- letra>="a" Y letra<="z"
		mayus <- letra>="A" Y letra<="Z"
		
		Si minus==Verdadero Entonces
			contMinus <- contMinus + 1
			tieneMinus<- Verdadero
		FinSi
		Si mayus==Verdadero Entonces
			contMayus <- contMayus + 1
			tieneMayus<- Verdadero
		FinSi
	Fin Para
	
	Si tieneMinus==Verdadero
		Escribir "La cadena : " cad " tiene minusculas" 
	FinSi
	
	Si tieneMayus==Verdadero
		Escribir "La cadena : " cad " tiene mayusculas" 
	FinSi
	
	Escribir "La cadena: " cad " tiene " contMinus " minusculas."
	Escribir "La cadena: " cad " tiene " contMayus " mayusculas."
FinAlgoritmo
