Algoritmo El_Tetraedro
	Definir A,V,h,ar Como Real
	
	Escribir "Menu de opciones del tetraedro";
	Escribir "1- calculo del area del tetraedro";
	Escribir "2- calculo de la altura del tetraedro";
	Escribir "3- Calculo del volumen del tetraedro"
	Escribir "Ingrese una opcion";
	Leer op;
	
	Segun op Hacer
		
		1:
			Escribir " Para calcular el area del tetraedro ingrese el siguiente dato" 
			Escribir " Nota: Solo se permite un valor mayor que 0"
			ar = 0
			Mientras (ar <= 0) Hacer
				Escribir " Ingrese el valor del arista o lados"
				Leer ar
			FinMientras
			A = ar^2*(raiz(3))
			Escribir " ar = " ar "  "
			Escribir " A = " A "  "
			
		2:
			Escribir " Para calcular la altura del tetraedro ingrese el siguiente dato" 
			Escribir " Nota: Solo se permite un valor mayor que 0"
			ar = 0
			Mientras (ar <= 0) Hacer
				Escribir " Ingrese el valor del arista o lados"
				Leer ar
			FinMientras
			h = ar*(raiz(6)/3)
			Escribir " ar = " ar "  "
			Escribir " h = " h " "
			
		3:
			Escribir " Para calcular el volumen del tetraedro ingrese el siguiente dato" 
			Escribir " Nota: Solo se permite un valor mayor que 0"
			ar = 0
			Mientras (ar <= 0) Hacer
				Escribir " Ingrese el valor del arista o lado"
				Leer ar
			FinMientras
			V = (raiz(2)/12)*ar^3
			Escribir " ar = " ar "  "
			Escribir " V = " V " "
			// La relación de euler: c + v = a + 2
			//  caras + vertices = aristas + 2
		De Otro Modo:
			Escribir " No es opcion válida "
			
	Fin Segun
	Escribir " Muchas gracias por preferirnos "
FinAlgoritmo
