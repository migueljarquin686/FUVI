Algoritmo credito_alg
	Escribir "Ingrese el nombre del solicitante de credito"
	Leer nombre
	Escribir "Ingrese su sueldo por favor"
	Leer sueldo
	
	si sueldo < 200000 Entonces
	Escribir nombre " Usted no tiene crédito, lo sentimos "
FinSi

si sueldo >= 200000 y sueldo < 500000 Entonces
	Escribir nombre " Usted tiene derecho a un credito de 500,000 C$"
FinSi

si sueldo >= 500000 y sueldO <= 1000000 Entonces
	Escribir nombre " Usted tiene derecho a un crédito de 2,000,000 C$"
FinSi

Escribir "Es un placer servirle"
FinAlgoritmo
