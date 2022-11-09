Algoritmo combustible_alg
	//Diseñar un algoritmo que solicite la cantidad (en litros) de combustible a
	//echar a un vehículo, y muestre el monto a pagar según la cantidad y el
	//tipo de combustible solicitado, tomando como referencia la siguiente
	//tabla:
	Definir C,T Como Real
	Definir Gasolina_regular Como Real
	Definir gasolina_super Como Real
	Definir Diesel Como Real
	
	Gasolina_regular = 32.85
	gasolina_super = 33.48
	Diesel = 28.45
	Escribir "ESTE ALGORITMO TE PERMITE CALCULAR UNA CANTIDAD TOTAL A PAGAR POR LITRO DE COMBUSTIBLE"
	Escribir "******************************************************"
	Escribir "Ingrese la cantidad de litros de combustible que necesita"
	Leer L
	Escribir "Tipos de combustible "
	Escribir " 1 Gasolina_regular"
	Escribir " 2 gasolina_super"
	Escribir " 3 Diesel"
	Escribir "Ingrese el tipo de combustible "
	Leer C
	
	Si C = 1 Entonces
		T = L*32.85
		Escribir  "Usted compro ",L," litros de gasolina regular"
		Escribir "Total= ",T," $"
	FinSi
	
	Si C = 2 Entonces
		T = L*33.48
		Escribir  "Usted compro ",L," litros de gasolina super"
		Escribir "Total= ",T," $"
	FinSi
	
	Si C = 3 Entonces
		T = L* 28.45
		Escribir  "Usted compro ",L," litros de Diesel"
		Escribir "Total= ",T," $"
	FinSi
	
	Escribir "Es un placer servirle"
	
FinAlgoritmo
