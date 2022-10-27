Algoritmo producto_suma_alg
	
	Definir numx,numy,numz,Producto,suma Como Real
	
	Escribir "Ingrese su primer numx"
	Leer numx
	Escribir "Ingrese su segundo numy"
	Leer numy
	Escribir "Ingrese su segundo numz"
	Leer numz
	
	si numx < 0 Entonces
		
		Producto = numx * numy * numz
		Escribir " La multiplicación de los tres numeros es:" Producto " " 
		
	FinSi
	
	si numx >= 0 Entonces
		
		suma = numx + numy + numz
		Escribir "La suma de los tres numeros es:" suma " " 
	finsi
	
	Escribir "Es un placer servirle"
FinAlgoritmo
