Algoritmo peso_alg
	Definir X Como Entero
	
	Escribir "Este algoritmo te muestra el resultado de personas con sobre peso y obesidad, que lo disfrutes"
	Escribir "Ingrese el numero de personas a atender hoy"
	Leer X
	Dimension nombres[X],num[X],peso[X],estatura[X],Pideal[X];
	Para i<-1 Hasta X con paso 1 Hacer
		Escribir "Inserte nombres ",i,":";
		Leer nombres[i];
		Escribir "Inserte su telefono ",i,":";
		Leer num[i];
		Escribir "Inserte su peso en kg ",i,":";
		Leer peso[i];
		Escribir "Inserte su altura en metros",i,":";
		Leer estatura[i];
		
		Pideal[i]= peso[i]/(estatura[i]*estatura[i])
		
	FinPara
	
	Escribir "";
	Escribir "";
	Escribir "**************Personas a ofrecer el producto****************"
	para i<-1 hasta X con paso 1 Hacer
		
		si (Pideal[i]>= 23 y Pideal[i]<=26) Entonces
			Escribir nombres[i]," Tiene sobrepeso ",Pideal[i]," Kg",".......Telefono: ",num[i];
		FinSi
		si (Pideal[i]> 26) Entonces
			Escribir nombres[i]," Tiene Obesidad ",Pideal[i]," Kg",".......Telefono: ",num[i];
		FinSi
	FinPara

FinAlgoritmo
