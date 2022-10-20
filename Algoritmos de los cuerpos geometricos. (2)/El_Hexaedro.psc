Algoritmo El_Hexaedro
	Definir A,V,D,ar Como Real
	
	Escribir "Menu de opciones del hexaedro";
	Escribir "1- calculo del area del hexaedro";
	Escribir "2- calculo de la diagonal del hexaedro";
	Escribir "3- Calculo del volumen del hexaedro"
	Escribir "Ingrese una opcion";
	Leer op;
	
	Segun op Hacer
		
		1:
			Escribir " Para calcular el area del hexaedro ingrese el siguiente dato" 
			Escribir " Nota: Solo se permite un valor mayor que 0"
			ar = 0
			Mientras (ar <= 0) Hacer
				Escribir " Ingrese el valor del arista o lados"
				Leer ar
			FinMientras
			A = 6*ar^2
			Escribir " ar = " ar "  "
			Escribir " A = " A "  "
			
		2:
			Escribir " Para calcular la diagonal del hexaedro ingrese el siguiente dato" 
			Escribir " Nota: Solo se permite un valor mayor que 0"
			ar = 0
			Mientras (ar <= 0) Hacer
				Escribir " Ingrese el valor del arista o lados"
				Leer ar
			FinMientras
			D = ar*(raiz(3))
			Escribir " ar = " ar "  "
			Escribir " D = " D " "
			
		3:
			Escribir " Para calcular el volumen del hexaedro ingrese el siguiente dato" 
			Escribir " Nota: Solo se permite un valor mayor que 0"
			ar = 0
			Mientras (ar <= 0) Hacer
				Escribir " Ingrese el valor del arista o lado"
				Leer ar
			FinMientras
			V = ar^3
			Escribir " ar = " ar "  "
			Escribir " V = " V " "
			// La relación de euler: c + v = a + 2
			//  caras + vertices = aristas + 2
		De Otro Modo:
			Escribir " No es opcion válida "
			
	Fin Segun
	Escribir " Muchas gracias por preferirnos "
FinAlgoritmo
