Algoritmo cantidad_de_numeros_De_2_digitos
	// Ingresar valores enteros
	//determinar cant de numeros de 2 digitos
	// promedio de los numeros de 3 digitos
	// cantidad total de valores ingresados
	Definir num Como Entero
	Definir cont,cont_dos_dig,cont_tres_dig,cant_total_ing,suma_tres_dig Como Entero
	Definir reducir_num Como Entero
	Definir prome Como Real
	Definir band Como Logico

	cont_dos_dig <- 0
	cont_tres_dig  <- 0
	cant_total_ing  <- 0

	suma_tres_dig <- 0
	prome <- 0
	
	Repetir
		Escribir "Ingrese valores: "
		Leer num
		Si num <> 0 Entonces
			cant_total_ing <- cant_total_ing + 1
			Si num>=10 Y num<=99 O num>=-99 Y num<=-10 Entonces
				cont_dos_dig <- cont_dos_dig + 1
			FinSi
			
			Si num>=100 Y num<=999 O num>=-999 Y num<=-100 Entonces
				cont_tres_dig <- cont_tres_dig + 1
				suma_tres_dig <- suma_tres_dig + num
			FinSi
		FinSi

	Hasta Que num==0
	
	prome <- suma_tres_dig/cont_tres_dig
	
	Escribir "Cantidad total valores ingresados: " cant_total_ing
	Escribir "Cantidad de 2 digitos: " cont_dos_dig
	Escribir "Cantidad de 3 digitos: " cont_tres_dig
	Escribir "Promedio de valores 3 digitos: " prome
	
FinAlgoritmo
