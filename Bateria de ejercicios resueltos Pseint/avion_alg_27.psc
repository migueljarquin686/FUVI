Algoritmo avion_alg
	//Determinar el precio de un billete de ida y vuelta por avión, conociendo la
	//distancia a recorrer, el número de días de estancia y sabiendo que si la
	//distancia es superior a 1000 Km, y el número de días de estancia es superior
	//a 7, la línea aérea le hace un descuento del 30% (precio por kilómetro
	//US$8.50).
	Definir dist,Dvuel Como Real
	Definir pasaj Como Cadena
	Escribir "ESTE ALGORITMO TE PERMITE DETERMINAR EL PRECIO DE UN BOLETO DE AVION DE ACUERDO A CIERTOS PARAMETROS"
	Escribir "**************************************"
	Escribir "Ingrese el nombre del pasajero"
	Leer pasaj
	
	Escribir "Ingrese la distancia a recorrer en kilometros por favor"
	Leer dist
	
	Escribir "Ingrese el numero de dias que tarda el vuelo"
	Leer Dvuel
	
	si dist>1000 Y Dvuel > 7 Entonces
		billete = dist*8.50
		descuentoBoleto =billete-((billete*30)/100)
		Escribir "El precio del billete de ida y vuelta con descuento del 30% en el avion es de:",descuentoBoleto "$"
		
		
	SiNo
		billete = dist*8.50
		Escribir "El precio de un billete de ida y vuelta en el avión es de:",billete "$"
	FinSi
	
	Escribir "Es un placer servirle"
	
	
	
FinAlgoritmo
