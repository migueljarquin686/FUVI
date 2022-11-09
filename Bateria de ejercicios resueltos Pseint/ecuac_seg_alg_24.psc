Algoritmo ecuac_seg_alg
	//Algoritmo para calcular los valores de una ecuacion de segundo grado
	Definir A, B,C,x1,x2,disc Como Real
	Escribir "ESTE ALGORITMO TE CALCULA LOS VALORES DE UNA ECUACION CUADRATICA"
	Escribir "*****************************************"
	Escribir "AX^2 + bx +C"
	Escribir Sin Saltar "Introduce el valor de A:"
	Leer A
	Borrar Pantalla
	Escribir A,"X^2 + BX +C"
	Escribir "**********************"
	
	Escribir Sin Saltar "Introduce el valor de B:"
	Leer B
	Borrar Pantalla
	Escribir A,"X^2+"  ,B,"X + C"
	Escribir "**********************"
	
	Escribir "AX^2 + bx +C"
	Escribir Sin Saltar "Introduce el valor de C:"
	Leer C
	Borrar Pantalla
	Escribir A,"X^2+" ,B,"X"  "+" ,C
	Escribir "**********************"
	
	disc=(B^2)-4*(A*C)
	SI disc>0 Entonces
		X1=((-B)+rc(disc))/(2*A)
		X2=((-B)-rc(disc))/(2*A)
		
		Escribir "raiz 1:", X1
		Escribir "raiz 2:", X2
	SiNo
		SI disc<0 Entonces
			
			partereal= (-B)/(2*A)
			parteimaginaria=rc(abs(disc))/(2*A)
			
			Escribir "raiz 1:",partereal,"+" parteimaginaria," i"
			Escribir "raiz 1:",partereal,"-" parteimaginaria," i"
			
		SiNo
			disc=0
			r=(-B)/(2*A)
			
			Escribir "La raiz es igual a:",r
			
		FinSi
	FinSi
	Escribir "discriminante =",disc
	Escribir "Es un placer servirle"
FinAlgoritmo
