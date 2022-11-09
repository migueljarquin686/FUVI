Algoritmo servicios_alg
	//23. El siguiente es el menú de un restaurante de bocadillos. Diseñar un
	//algoritmo capaz de leer el número de unidades consumidas de cada
	//	alimento ordenado y calcular la cuenta total.
	Definir Bjamon,refresco,cerveza,TOTAL Como Real
	Escribir "ESTE ALGORITMO NOS CALCULA LA CUENTA TOTAL CONSUMIDA POR ALIMENTOS"
	Escribir "¿Cuantos bocadillos de jamon consumio?"
	Leer Bjamon
	
	Escribir "¿Cuantos refrescos consumio?"
	Leer refresco
	
	Escribir "¿Cuantas cervezas consumio?"
	Leer cerveza
	
	cuenta_1 = Bjamon*1.5
	cuenta_2 = refresco*1.05
	cuenta_3 = cerveza*0.75
	TOTAL = cuenta_1+cuenta_2+cuenta_3
	
	Escribir "********CUENTA*********"
	
	Escribir "Bocadillos de jamon***********" cuenta_1 " $"
	Escribir "Refrescos*********************" cuenta_2 " $"
	Escribir "Cerveza***********************" cuenta_3 " $"
	Escribir "TOTAL*************************" TOTAL " $"
	Escribir ""
	Escribir "Gracias por su compra"
FinAlgoritmo
