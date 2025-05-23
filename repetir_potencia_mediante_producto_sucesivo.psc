Algoritmo repetir_potencia_mediante_producto_sucesivo
	Definir base, expo, cont,result Como Entero
	
	Repetir
		Escribir "Ingrese base "
		Leer base
		Escribir "Ingrese exponente: "
		Leer expo
	Hasta Que base>0 Y expo>=0
	
	cont <- 0
	result <- 1
	Repetir

		Si cont<expo Entonces
			result <- result*base
			cont <- cont + 1
		Fin Si
		
	Hasta Que No (cont<expo)
	Escribir "Resultado: " result
FinAlgoritmo
