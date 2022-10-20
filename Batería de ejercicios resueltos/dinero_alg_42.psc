Algoritmo Dinero_alg
	Definir cant Como Entero
	Repetir
	Escribir "Ingrese una cantidad"
	Leer cant
Hasta Que cant>0

cB1000<-(cant/1000)
cB500<-(cant/500)
cB200<-(cant/200)
cB100<-(cant/100)
cB50<-(cant/50)
cB20<-(cant/20)
cB10<-(cant/10)
cB5<-(cant/5)
cM1<-(cant/1)

SI cB1000>=1 Entonces
	Escribir "Tiene una cantidad de ",cB1000," Billetes de 1000"
FinSi

SI cB500>=1 Entonces
	Escribir "Tiene una cantidad de ",cB500," Billetes de 500"
FinSi

SI cB200>=1 Entonces
	Escribir "Tiene una cantidad de ",cB200," Billetes de 200"
FinSi

SI cB100>=1 Entonces
	Escribir "Tiene una cantidad de ",cB100," Billetes de 100"
FinSi

SI cB50>=1 Entonces
	Escribir "Tiene una cantidad de ",cB50," Billetes de 50"
FinSi

SI cB20>=1 Entonces
	Escribir "Tiene una cantidad de ",cB20," Billetes de 20"
FinSi

SI cB10>=1 Entonces
	Escribir "Tiene una cantidad de ",cB10," Billetes de 10"
FinSi

SI cB5>=1 Entonces
	Escribir "Tiene una cantidad de ",cB5," Billetes de 5"
FinSi

SI cM1>=1 Entonces
	Escribir "Tiene una cantidad de ",cM1," Monedas de 1 córdoba"
FinSi
Escribir "Es un placer servile"
FinAlgoritmo
