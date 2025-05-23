Algoritmo mostrar_divisores
	
	// contar y mostrar los divisores de un numero ing por el user
	Definir num, cont, resto,cantDivisores Como Entero
	
	Escribir "Ingrese numero"
	Leer num
	cont <- 1
	cantDivisores<- 0
	
	Mientras cont<=num Hacer // Entra por  verdadero
		resto <- num MOD cont
		Escribir num, "/", cont, "  Resto: ", resto
		Si resto==0 Entonces
			cantDivisores <- cantDivisores + 1
		FinSi
		cont <- cont + 1
	Fin Mientras
	
	Escribir "Cantidad divisores: ", cantDivisores
	
	
	
FinAlgoritmo
