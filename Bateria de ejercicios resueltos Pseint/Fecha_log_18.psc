Algoritmo Fecha_log
//18. Leer tres n�meros que denoten una fecha (d�a, mes, a�o). Comprobar que
//es una fecha v�lida. Si no es v�lida escribir un mensaje de error. Si es v�lida
//escribir la fecha cambiando el n�mero del mes por su nombre. Ej. Si se
//introduce 1 2 2021, se deber� imprimir "1 de febrero de 2021". El a�o debe
//ser mayor que 0.

	Definir D,M,A Como Entero
	Definir nombremes como caracter
	Escribir "ESTE ALGORITMO TE MUESTRA UNA FECHA A PARTIR DE VALORES INGRESADOS"
	Escribir "*****************************************"
	Escribir "Ingrese el d�a en numero"
	Leer D
	Escribir " Ingrese el mes en numero"
	Leer M
	Escribir "Ingrese el a�o"
	Leer A
	
	Si D<1 O D>31
		Repetir
			Escribir "D�a fuera de rango"
			Escribir "Ingrese un d�a"
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
			Escribir "A�o fuera de rango"
			Escribir "Ingrese un a�o"
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
