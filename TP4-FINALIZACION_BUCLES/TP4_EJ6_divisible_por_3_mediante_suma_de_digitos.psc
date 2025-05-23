Algoritmo TP4_EJ6_divisible_por_3_mediante_suma_de_digitos
	Definir sum,num Como Entero

	Escribir "Ingrese numero"
	Leer num
	
	Mientras num>9 Hacer
		sum<-0
		Mientras num<>0 Hacer
			sum <- sum + (num mod 10)
			num <- trunc(num/10)
		Fin Mientras
		Escribir "La suma de los digitos es: " sum
		num <- sum
	Fin Mientras
	
	Si num mod 3 = 0 Entonces
		Escribir "Resultado: ",num, " es multiplo de 3" 
	SiNo
		Escribir " ",num, " NO es multiplo de 3" 
	Fin Si

FinAlgoritmo
