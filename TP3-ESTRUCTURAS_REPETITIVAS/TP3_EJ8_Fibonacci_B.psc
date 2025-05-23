Algoritmo TP3_EJ8_Fibonacci_B
	//  t1- t2 -t3- t4- t5- t6- t7-  t8   t9   t10  t11   t12   t13   t14
	//  1 - 1 - 2 - 3 - 5 - 8 - 13 - 21 - 34 - 55 - 89 - 144 - 233 - 377
	
    Definir num, t1, t2, t3, i como Entero

    Escribir "Ingrese cantidad de términos a mostrar:"
    Leer num
    
    // Inicializar los primeros términos
    t1 <- 0
    t2 <- 1 
    t3 <- 1 

	Escribir "t1 = ", t2
	Escribir "t2 = ", t3
    // Calcular y mostrar los términos restantes (desde t3 hasta tn)
    Para i <- 3 Hasta num Con Paso 1 Hacer
        t1 <- t2
        t2 <- t3
        t3 <- t1 + t2
        Escribir "t", i, " = ", t3
    FinPara
FinAlgoritmo