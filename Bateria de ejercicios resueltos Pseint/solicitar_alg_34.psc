Algoritmo solicitar_alg
	//34. Elabore un algoritmo que determine la cantidad a pedir para un artículo,
	//según su inventario, se conoce para cada artículo su tipo (1,2,3) y la 
	//cantidad en existencia, deseando calcular la cantidad a solicitar. La cantidad
    //a solicitar depende de:
	Definir opc,cant Como Real
	Escribir "ESTE ALGORITMO CALCULA LA CANTIDAD A SOLICITAR POR PRODUCTOS"
	Definir nombre Como Cadena
	Escribir "Ingrese su nombre"
	Leer nombre
	Escribir " Ingrese una opcion 1,2,3 del producto que desea solicitar"
	Leer opc
	Escribir " Ingrese la cantidad que desea solicitar"
	Leer cant
	
		si cant>=1 y cant<10 Entonces
			Escribir "La cantidad que usted solicito es de 20 % del producto :",opc
	FinSi
	
		si cant>=10 y cant<20 Entonces
			Escribir "La cantidad que usted solicito es de 15 % del producto :",opc
		FinSi
		
		si cant>=20 Entonces
			Escribir "La cantidad que usted solicito es de 10 % del producto :",opc
	FinSi
	
	Escribir "Es un placer servirle ",nombre
FinAlgoritmo
