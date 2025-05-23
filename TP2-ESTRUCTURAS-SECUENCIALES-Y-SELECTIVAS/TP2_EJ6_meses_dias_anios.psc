Algoritmo ValidarFecha
    Definir dia, mes, anio Como Entero
    Definir fechaValida, esBisiesto Como Logico
    
    // Solicitar datos al usuario
    Escribir "Ingrese una fecha para validar:"
    Escribir "D�a (1-31):"
    Leer dia
    Escribir "Mes (1-12):"
    Leer mes
    Escribir "A�o:"
    Leer anio
    
    // Validaci�n b�sica de mes y a�o
    fechaValida <- (mes >= 1) Y (mes <= 12) Y (anio > 0)
    
    // Verificar si el a�o es bisiesto
    esBisiesto <- (anio MOD 4 = 0 Y anio MOD 100 <> 0) O (anio MOD 400 = 0)
    
    // Validaci�n de d�as seg�n el mes
    Si fechaValida Entonces
        Segun mes Hacer
            1, 3, 5, 7, 8, 10, 12: // Meses con 31 d�as
                fechaValida <- (dia >= 1) Y (dia <= 31)
            4, 6, 9, 11: // Meses con 30 d�as
                fechaValida <- (dia >= 1) Y (dia <= 30)
            2: // Febrero (depende si es bisiesto)
                Si esBisiesto Entonces
                    fechaValida <- (dia >= 1) Y (dia <= 29)
                Sino
                    fechaValida <- (dia >= 1) Y (dia <= 28)
                FinSi
        FinSegun
    FinSi
    
    // Mostrar resultado
    Si fechaValida Entonces
        Escribir "La fecha ", dia, "/", mes, "/", anio, " es v�lida."
        Si mes = 2 Y esBisiesto Entonces
            Escribir "Nota: ", anio, " es un a�o bisiesto."
        FinSi
    Sino
        Escribir "La fecha ", dia, "/", mes, "/", anio, " NO es v�lida."
    FinSi
FinAlgoritmo