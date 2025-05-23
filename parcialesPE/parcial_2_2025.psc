Algoritmo parcial_2_2025
	
	Definir cad, cadInv, cadDigitos,cadDigitosInv como cadena
	Definir l1,l2,l3,l4 Como Caracter
	Definir minus,digis Como Logico
	Definir digitos Como Logico
	Escribir "Ingrese cadena:"
	Leer cad
	
	l1 <- Subcadena(cad,1,1)
	l2 <- Subcadena(cad,2,2)
	l3 <- Subcadena(cad,3,3)
	l4 <- Subcadena(cad,4,4)
	
	// Si solo tiene minusculas.. generar cadena inversa.. dato -> otad
	minus <- (l1>="a" y l1<="z") Y (l2>="a" y l2<="z") Y (l3>="a" y l3<="z") Y (l4>="a" y l4<="z")
	digitos <- (l1>="0" y l1<="9") Y (l2>="0" y l2<="9") Y (l3>="0" y l3<="9") Y (l4>="0" y l4<="9")
	
	Si minus==Verdadero
		cadInv <- l4+l3+l2+l1
		Escribir "cadInv: ", cadInv
	SiNo
		// si solo tiene digitos..... es capicua ? Mostrar es capicua sino numOriginal+numInverso
		Si digitos==Verdadero
			Si l4==l1 Y l2==l3 Entonces
				Escribir "Es capicua"
			SiNo
				cadDigitos <-l1+l2+l3+l4+l4+l3+l2+l1
				Escribir "cadDigitos: ", cadDigitos
			Fin Si
		SiNo
			Escribir  "Cadena mixta"
		FinSi
	FinSi
	


	

	

	
	
	
FinAlgoritmo
