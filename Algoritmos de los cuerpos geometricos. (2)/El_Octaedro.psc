Algoritmo El_Octaedro
	Definir A,V,ar Como Real
	
	Escribir "Menu de opciones del octaedro";
	Escribir "1- calculo del area del octaedro";
	Escribir "2- Calculo del volumen del octaedro"
	Escribir "Ingrese una opcion";
	Leer op;
	
	Segun op Hacer
		
		1:
			Escribir " Para calcular el area del octaedro ingrese el siguiente dato" 
			Escribir " Nota: Solo se permite un valor mayor que 0"
			ar = 0
			Mientras (ar <= 0) Hacer
				Escribir " Ingrese el valor del arista o lados"
				Leer ar
			FinMientras
			A = 2*ar^2*raiz(3)
			Escribir " ar = " ar "  "
			Escribir " A = " A "  "
			
			
		2:
			Escribir " Para calcular el volumen del hexaedro ingrese el siguiente dato" 
			Escribir " Nota: Solo se permite un valor mayor que 0"
			ar = 0
			Mientras (ar <= 0) Hacer
				Escribir " Ingrese el valor del arista o lado"
				Leer ar
			FinMientras
			V = (raiz(2)/3)*ar^3
			Escribir " ar = " ar "  "
			Escribir " V = " V " "
			// La relación de euler: c + v = a + 2
			//  caras + vertices = aristas + 2
		De Otro Modo:
			Escribir " No es opcion válida "
			
	Fin Segun
	Escribir " Muchas gracias por preferirnos "
FinAlgoritmo
