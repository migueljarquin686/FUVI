Algoritmo Total_a_pagar_alg
	//7. Una tienda ofrece un descuento del 15% sobre el total de la compra durante
	//el mes de febrero. Dado un mes y un importe (monto), calcular cuál es la
	//cantidad que se debe cobrar al cliente.
	Definir monto,cantidad,mes,a_pagar Como Real
	Escribir "ESTE ALGORITMO NOS PERMITE CALCULAR EL MONTO A PAGAR EN COMPRAS PERO SE LE OFRECERA UN DESCUENTO SI COMPRO EN EL MES 2"
	Escribir " Ingrese el monto"
	Leer monto
	
	Escribir " Ingrese su numero de mes "
	Leer mes
	
	si ( monto > 0 ) Entonces
		
	si(mes = 2 ) Entonces
		
	cantidad = (monto * 15) / 100
	
	a_pagar = monto - cantidad 
	
	Escribir " cantidad a pagar: " a_pagar " "
	
SiNo
	Escribir "total a pagar:" monto " "
FinSi
FinSi

Escribir " Es un placer servirle"

FinAlgoritmo
