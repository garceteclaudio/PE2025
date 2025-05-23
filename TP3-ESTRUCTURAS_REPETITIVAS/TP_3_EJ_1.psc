Algoritmo TP_3_EJ_1
	Definir nombre, nombreAlumnoPromedioAlto,nombreAlumnoPromedioBajo como Cadena
	Definir nota, suma,cantNotascant, aux Como Entero
	Definir promedio, promedioAlto, promedioBajo Como Real
	Definir band Como Logico
	
	Escribir "Ingrese cantidad de alumnos a registrar"
	Leer cant
	band <- Verdadero
	aux <- 0
	
	Repetir
		cantNotas <- 0
		suma <- 0
		Escribir "Ingrese nombre: "
		Leer nombre
		
		Repetir
			Escribir "Ingrese notas: "
			Leer nota
			Si nota <> 0 Entonces
				Si nota>=1 Y nota <=10 Entonces
					suma <- suma + nota
					cantNotas <- cantNotas + 1
					promedio <- suma/cantNotas
				SiNo
				Fin Si
			Fin Si
		Hasta Que nota==0
		
		Escribir "nombre : " nombre " promedio: " promedio " cantNotas: " cantNotas
		
		Si band==Verdadero Entonces
			nombreAlumnoPromedioAlto <- nombre
			promedioAlto <- promedio
			promedioBajo <- promedio
			band <- Falso
		SiNo
			Si promedio >= promedioAlto Entonces
				nombreAlumnoPromedioAlto <- nombre
				promedioAlto <- promedio
			Fin Si
			Si promedio <= promedioBajo Entonces
				nombreAlumnoPromedioBajo <- nombre
				promedioBajo <- promedio
			Fin Si
		FinSi
		
		aux <- aux + 1
	Hasta Que cant==aux
	
	
	
	Escribir "El alumno con promedio mas alto es: " nombreAlumnoPromedioAlto " y el promedio " promedioAlto
	Escribir "El alumno con promedio mas bajo es: " nombreAlumnoPromedioBajo " y el promedio " promedioBajo
FinAlgoritmo
