Algoritmo producto_suma_alg
	//4. Dise�ar un algoritmo que pida por teclado tres n�meros; si el primero es
	//negativo, debe imprimir el producto de los tres y si no lo es, imprimir� la
	//suma.
	Definir numx,numy,numz,Producto,suma Como Real
	Escribir "ESTE ALGORITMO NOS CALCULA EL PRODUCTO O LA SUMA DE TRES NUMEROS DEPENDIENDO EL SIGNO DEL PRIMERO"
	Escribir "Ingrese su primer numx"
	Leer numx
	Escribir "Ingrese su segundo numy"
	Leer numy
	Escribir "Ingrese su segundo numz"
	Leer numz
	
	si numx < 0 Entonces
		
		Producto = numx * numy * numz
		Escribir " La multiplicaci�n de los tres numeros es:" Producto " " 
		
	FinSi
	
	si numx >= 0 Entonces
		
		suma = numx + numy + numz
		Escribir "La suma de los tres numeros es:" suma " " 
	finsi
	
	Escribir "Es un placer servirle"
FinAlgoritmo
