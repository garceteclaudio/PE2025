Algoritmo mostrar_divisores_bandera
	// contar y mostrar los divisores de un numero ing por el user
	Definir num, cont, resto,cantDivisores Como Entero
	Definir bandera Como Logico
	
	Escribir "Ingrese numero"
	Leer num
	cont <- 1
	cantDivisores<- 0
	bandera<- Verdadero
	
	Mientras bandera Hacer // Entra por  verdadero
		Si cont<=num Entonces
			
			resto <- num MOD cont
			Escribir num, "/", cont, "  Resto: ", resto
			Si resto==0 Entonces
				cantDivisores <- cantDivisores + 1
			FinSi
			cont <- cont + 1
		SiNo
			bandera <- Falso
		FinSi
	Fin Mientras
	
	Escribir "Cantidad divisores: ", cantDivisores
FinAlgoritmo
