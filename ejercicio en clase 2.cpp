#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
	int n;
	bool y;
	cout << " |----------------lista de opciones------------|\n";
	cout << " |1. verificar si un numero es par             |\n";         
	cout << " |2. verificar si un año es bisiesto           |\n";
	cout << " |3. verificar si 2 numeros son iguales        |\n";
	cout << " |4. verificar si es mayor de edad             |\n";
	cout << " |5. verificar si el examen es aprobado        |\n";
	cout << " |---------------------------------------------|\n";
	cout << " seleccione: \n";
	cin  >> n;
switch(n)
{
	
case 1:	
int num;
cout << " ingrese su numero a verificar si es par: \n ";
cin >> num;
if (num % 2 == 0)
{
	cout << " el numero es par  \n";
}
else
{
	cout << " el numero es impar \n";
}
return main();	
break;



case 2:
int a,b;
cout << " ingrese su año a verificar si es bisiesto: \n";
cin >> a;
if (a % 400 == 0)
{
	b = 1;
}
else
{
	if (a % 100 == 0)
	{
		b = 0;
	}
	else 
	{
		if(a % 4 == 0)
		{
			b = 1;
		}
		else
		{
			b = 0;
		}
	}
	if (b == 1)
	{
		cout << " el año es bisiesto \n";
	}
	else
	{ 
	    cout << " el año no es bisiesto \n";
	}
}
return main();
break;



case 3:	
float n1,n2;
cout << " ingrese el primer numero:  \n";
cin >> n1;
cout << "ingrese el segundo numero:  \n";
cin >> n2;
if (n1 == n2)
{
	cout << "los numeros son iguales:  \n";
	
}
else
{
	cout << " los numeros no son iguales:  \n";
}
return main();
break;



case 4:	
int m;
cout << "ingrese su edad :";
cin >> m;
if (m >= 18 )
{
	cout << "usted es mayor de edad \n";
}
else
{
	cout << "usted no es mayor de edad \n";
}
return main();
break;



case 5:
float c;
cout << " ingrese su calificacion \n";
cin >> c;
if (c >= 60)
{
	cout << " felicitaciones, aprobo el examen \n";
}
else
{
	cout << "usted reprobo el examen :(  \n";
}
return main();
break;	
}

return 0;
}