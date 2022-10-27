Algoritmo El_Dodecaedro
	Definir A,V,Apent,ar,Ap Como Real
	
	Escribir "Menu de opciones del Dodecaedro";
	Escribir "1- calculo del area del Dodecaedro";
	Escribir "2- calculo del volumen del Dodecaedro";
	Escribir "3- Calculo del area pentagonal del Dodecaedro"
	Escribir "Ingrese una opcion";
	Leer op;
	
	Segun op Hacer
		
		1:
			Escribir " Para calcular el area del Dodecaedro ingrese el siguiente datos" 
			Escribir " Nota: Solo se permite un valor mayor que 0"
			ar = 0
			Mientras (ar <= 0) Hacer
				Escribir " Ingrese el valor del arista o lados"
				Leer ar
			FinMientras
			A = 3*ar^2*raiz(25+(10*raiz(5)))
			Escribir " ar = " ar "  "
			Escribir " A = " A "  "
			
		2:
			Escribir " Para calcular el volumen del Dodecaedro ingrese el siguiente dato" 
			Escribir " Nota: Solo se permite un valor mayor que 0"
			ar = 0
			Mientras (ar <= 0) Hacer
				Escribir " Ingrese el valor del arista o lados"
				Leer ar
			FinMientras
			V = (1/4)*(15+7*raiz(5))*ar^3
			Escribir " ar = " ar "  "
			Escribir " V = " V " "
			
		3:
			Escribir " Para calcular el area pentagonal del dodecaedro ingrese los siguientes datos" 
			Escribir " Nota: Solo se permite un valor mayor que 0"
			ar = 0
			Mientras (ar <= 0) Hacer
				Escribir " Ingrese el valor del arista o lado"
				Leer ar
			FinMientras
			
			Escribir " Nota: Solo se permite un valor mayor que 0"
			Ap = 0
			Mientras (Ap <= 0) Hacer
				Escribir " Ingrese el valor del apotema"
				Leer Ap
			FinMientras
			
			Apen = (5/2)*ar*Ap
			Escribir " ar = " ar "  "
			Escribir " ap = " ap "  "
			Escribir " Apen = " Apen " "
			// La relación de euler: c + v = a + 2
			//  caras + vertices = aristas + 2
		De Otro Modo:
			Escribir " No es opcion válida "
			
	Fin Segun
	Escribir " Muchas gracias por preferirnos "
FinAlgoritmo
