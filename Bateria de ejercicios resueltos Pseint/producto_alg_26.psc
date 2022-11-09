Algoritmo producto_alg
	//26. Un algoritmo que calcule el producto de N números ingresados por el
	//usuario.
	Definir x,producto,res como entero
	Escribir "ESTE ALGORITMO NOS CALCULA EL PRODUCTO DE N NUMEROS."
	Escribir "El programa finaliza si se ingresa un cero"
	x = 1
	producto = 0
	res = 1
	
	Mientras x<> 0 Hacer
		Escribir "Ingresa un numero"
		leer x
		si x<> 0 Entonces
			res = res * x
			producto = res
		FinSi
	FinMientras
	
	Escribir "El producto de los numeros es:",producto
	Escribir "Es un placer servirle"
FinAlgoritmo
