Algoritmo potencia_lexema_alg
	Definir numx,potenci,lexema Como Real
	
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
