Algoritmo sin_titulo
	// Para cada dígito de un número, calcular su factorial
	
	//y mostrar la suma total de los factoriales.
	
	Definir dig, sumaFactoriales, cont Como Entero
	
	Escribir "Ingresar digito"
	Leer num
	sumaFactoriales <- 0
	Mientras num<>0 Hacer
		dig <- num MOD 10
		factorial <- 1
		Escribir "Digitos: ",dig
		Para i<-1 Hasta dig Con Paso 1 Hacer
			factorial<- factorial*i
		Fin Para
		Escribir "El factorial del digito es: ", factorial
		num<-trunc(num/10)
		sumaFactoriales <- sumaFactoriales + factorial
	Fin Mientras
	Escribir "Suma total factoriales: ", sumaFactoriales

	
	
FinAlgoritmo
