Algoritmo peso_alg
	Escribir "Ingrese el numeros de personas"
	Leer Z
	
	para x = 1 Hasta Z con paso 1 hacer 
	
	Escribir "Bienvenido a SeaFitya S.A"
	Escribir " ingrese el nombre de la persona"
	Leer N
	Escribir "Ingrese el numero de telefono de ",N
	Leer num
	Escribir "Ingrese la estatura en metros de ",N
	Leer E
	Escribir "Ingrese el peso en KG de ",N
	Leer P
	
	PL= P/(E^2)
	
	Si PL = 20 Entonces
		Escribir N," es delgado(a)"
	FinSi
	
	Si PL >= 20 Y PL < 23 Entonces
		Escribir N," tiene un peso normal"
	FinSi
	
	Si PL >= 23 Y PL <= 26 Entonces
		Escribir N," tiene sobre peso"
	FinSi
	
	Si PL >26 Entonces
		Escribir N," tiene obesidad"
	FinSi
FinPara

FinAlgoritmo
