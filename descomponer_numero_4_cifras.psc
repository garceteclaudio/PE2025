Algoritmo descomponer_numero_Y_sumar_sus_digitos
	Definir num, suma Como Entero
	Escribir "Ingrese valor de 4 cifras:"
	Leer num //1247
	// 4 digitos
	Si (num>=1000) Y (num<=9999) Entonces
		suma <- num mod 10 //extraje 7 
		num <- trunc(num/10) // reduje a 124
		suma<- suma + num mod 10 // suma=7 y le agrego 4
		num <- trunc(num/10) // reduje a 12
		suma<- suma + num mod 10 // suma le agrego 2
		num <- trunc(num/10) // num se reduce a 1
		suma<- suma + num
		Escribir "Suma digito: ", suma
	SiNo
		Escribir "No es de 4 digitos"
	FinSi

FinAlgoritmo
