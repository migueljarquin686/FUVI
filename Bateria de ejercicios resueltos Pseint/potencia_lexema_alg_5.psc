Algoritmo potencia_lexema_alg
	Definir numx,potenci,lexema Como Real
	//5. Realizar un algoritmo que lea un número por teclado. En caso de que ese
	//número sea 0 o menor que 0, se saldrá del programa imprimiendo antes un
	//mensaje de error. Si es mayor que 0, se deberá calcular su cuadrado y la raíz
	//cuadrada del mismo, visualizando el número que ha tecleado el usuario y
	//su resultado ("Del numero X, su potencia es X y su raíz X").
Escribir "ESTE ALGORITMO TE MUESTRA EL CUADRADO DE UN NUMERO Y LA RAIZ"
	Escribir "Ingrese un numx"
	Leer numx
	
	si numx <= 0 Entonces
		Escribir "Error al ingresar numero"
		
	sino 
		
		potencia = numx^2
		Lexema = raiz(numx)
		
		Escribir "El numero es:" numx " "
		Escribir "Su potencia es:" potencia " "
		Escribir "Su raiz es: " lexema " " 
	FinSi
	
	Escribir " Es un placer servirle "
FinAlgoritmo
