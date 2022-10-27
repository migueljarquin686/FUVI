Algoritmo Total_a_pagar_alg
	
	Definir monto,cantidad,mes,a_pagar Como Real
	
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
