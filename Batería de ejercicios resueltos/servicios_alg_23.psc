Algoritmo servicios_alg
	Definir Bjamon,refresco,cerveza,TOTAL Como Real
	
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
