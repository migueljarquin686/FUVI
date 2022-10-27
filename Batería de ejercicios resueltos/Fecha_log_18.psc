Algoritmo Fecha_log
	
	Definir D,M,A Como Entero
	Definir nombremes como caracter
	
	Escribir "Ingrese el día"
	Leer D
	Escribir " Ingrese el mes"
	Leer M
	Escribir "Ingrese el año"
	Leer A
	
	Si D<1 O D>31
		Repetir
			Escribir "Día fuera de rango"
			Escribir "Ingrese un día"
			Leer D
		Hasta Que D>0 Y D <32
	FinSi
	
	Si M<1 o M>12
		Repetir
			Escribir "Mes fuera de rango"
			Escribir "Ingrese un mes"
			Leer M
			
		Hasta Que M>0 Y M<13
	FinSi
	
	Si A<1
		Repetir
			Escribir "Año fuera de rango"
			Escribir "Ingrese un año"
			Leer A
		Hasta Que A>0
	FinSi
	
	Segun M Hacer
		Caso 1:nombremes="Enero"
		Caso 2:nombremes="Febrero"
		Caso 3:nombremes="Marzo"
		Caso 4:nombremes="Abril"
		Caso 5:nombremes="Mayo"
		Caso 6:nombremes="Junio"
		Caso 7:nombremes="Julio"
		Caso 8:nombremes="Agosto"
		Caso 9:nombremes="Septiembre"
		Caso 10:nombremes="Octubre"
		Caso 11:nombremes="Noviembre"
		Caso 12:nombremes="Diciembre"
		
	FinSegun
	
	Escribir D " de " nombremes " de " A
	
	Escribir "Es un placer servirle"
FinAlgoritmo
