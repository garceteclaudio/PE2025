Algoritmo TP3_EJ11_Menu  
	
	// no podría invertirse el número si nunca se ejecutó el ingreso
	
	Definir num, val, numInv, resto, sumaDigitos, copiaVal, menorDigit Como Entero
	Definir band Como Logico


	
	val <- 0
	Repetir
		Escribir "------- MENU -------"
		Escribir "1) Ingresar valor"
		Escribir  "2) Invertir digitos"
		Escribir "3) Sumar digitos"
		Escribir "4) Menor digito del numero"
		Escribir "5) Salir"		
		Escribir "----------------"
		Escribir "Selecciona una opcion: "
		Leer num
		numInv <- 0
		sumaDigitos <- 0
		band <- Falso

		Segun num Hacer
			1:
				Escribir "Ingrese valor"
				Leer val
				copiaVal <- val
			2:
				Si val==0 Entonces
					Escribir "Para invertir los digitos debe ingresar un valor.Seleccionar Opcion 1) Ingresar valor"
				SiNo
					Mientras copiaVal<>0 Hacer
						resto <- copiaVal mod 10
						numInv <- numInv * 10 + resto
						copiaVal <- trunc (copiaVal/10)
					Fin Mientras
					copiaVal <- val
					Escribir "El numero invertido es: " numInv	
				FinSi

			3:
				Si val==0 Entonces
					Escribir "Para sumar los digitos debe ingresar un valor.Seleccionar Opcion 1) Ingresar valor"
				SiNo
					Mientras copiaVal<>0 Hacer
						resto <- copiaVal mod 10
						sumaDigitos <- sumaDigitos + resto
						copiaVal <- trunc (copiaVal/10)
					Fin Mientras
					copiaVal <- val
					Escribir "Suma digitos es: " sumaDigitos
				FinSi
			4:
				Si val==0 Entonces
					Escribir "Para obtener el menor digito debe ingresar un valor.Seleccionar Opcion 1) Ingresar valor"
				SiNo
					Mientras copiaVal<>0 Hacer
						resto <- copiaVal mod 10
						Si band==Verdadero Entonces
							Si resto<=menorDigit Entonces
								menorDigit <- resto
							Fin Si
						SiNo
							menorDigit <- resto
							band <- Verdadero
						FinSi
						copiaVal <- trunc (copiaVal/10)
					Fin Mientras
					copiaVal <- val
					Escribir "Menor digito del numero es: " menorDigit
				FinSi
			5:
				Escribir "Saliendo del sistema"
			De Otro Modo:
				Escribir "Opcion invalida"
		Fin Segun
	Hasta Que (num==5) // Sale por Verdadero
	
	
FinAlgoritmo
