
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int CantidadEstudiantes, Aprobado = 0, Reprobado = 0;
	float Promedio, Nota1, Nota2, Nota3, Nota4, SumaNotas, SumaPromedios = 0, MejorPromedio = -1;
	string NombreEstudiante, MejorEstudiante;
	char Respuesta;

   cout << "CENTRO EDUCATIVO LA NUEVA ESCUELA.\nRegistro de calificaciones." << endl;

	 // Este bucle permite repetir todo el proceso para registrar otro grupo cuando el usuario lo indique.
	
   do {
	   Aprobado = 0;
	   Reprobado = 0;
	   SumaPromedios = 0;
	   MejorPromedio = -1;

	   // Este bucle verifica que la cantidad de estudiantes sea mayor que cero y vuelve a solicitarla si el valor no es válido.
	   
   cout << "\nIntroduzca la cantidad de estudiantes pertenecientes al grupo:" << endl;
   cin >> CantidadEstudiantes;

   while (CantidadEstudiantes <= 0) {
	   cout << "Error, valor invalido.\n\nIntroduzca la cantidad de estudiantes pertenecientes al grupo: " << endl;
	   cin >> CantidadEstudiantes;
   }
	    // Este bucle recorre la cantidad de estudiantes indicada y solicita los datos de cada uno.

   for (int i = 1; i <= CantidadEstudiantes; i++) {
	   cout << "\nEstudiante #" << i << endl;
	   cout << "Introduzca el nombre del estudiante: ";
	   cin >> NombreEstudiante;

	    // Estos bucles while sirven para validar que cada calificación se encuentre dentro del rango permitido (0 a 100) y volver a solicitarla si es incorrecta.

	   cout << "Introduzca la primera calificacion del estudiante:\n ";
	   cin >> Nota1;

	   while (Nota1 < 0 || Nota1 > 100) {
		   cout << "Error, calificacion invalida. Introduzca otra: " << endl;
		   cin >> Nota1;
	   }

	   cout << "Introduzca la segunda calificacion del estudiante:\n ";
	   cin >> Nota2;

	   while (Nota2 < 0 || Nota2 > 100) {
		   cout << "Error, calificacion invalida. Introduzca otra: " << endl;
		   cin >> Nota2;
	   }

	   cout << "Introduzca la tercera calificacion del estudiante:\n ";
	   cin >> Nota3;

	   while (Nota3 < 0 || Nota3 > 100) {
		   cout << "Error, calificacion invalida. Introduzca otra: " << endl;
		   cin >> Nota3;
	   }

	   cout << "Introduzca la cuarta calificacion del estudiante:\n ";
	   cin >> Nota4;

	   while (Nota4 < 0 || Nota4 > 100) {
		   cout << "Error, calificacion invalida. Introduzca otra: " << endl;
		   cin >> Nota4;
	   }

	   SumaNotas = Nota1 + Nota2 + Nota3 + Nota4;

	   Promedio = SumaNotas / 4;

	      // Se utiliza para mostrar los resultados con exactamente dos cifras decimales.

	   cout << fixed << setprecision(2);

	   cout << "Promedio: " << Promedio << endl;

	   // Se determina si el estudiante aprobó o reprobó y se actualiza el contador correspondiente.

	   if (Promedio >= 70) {
		   cout << "Estado: APROBADO." << endl;
		   Aprobado++;
	   }

	   else {
		   cout << "Estado: REPROBADO." << endl;
		   Reprobado++;
	   }

	   SumaPromedios += Promedio;

	   if (Promedio > MejorPromedio) {
		   MejorPromedio = Promedio;
		   MejorEstudiante = NombreEstudiante;
	   }
   }

   cout << "\n-------- RESUMEN --------" << endl;
   cout << "Aprobados: " << Aprobado << endl;
   cout << "Reprobados: " << Reprobado << endl;

   cout << "Promedio grupo: "
	   << SumaPromedios / CantidadEstudiantes << endl;

   cout << "Mejor promedio: " << MejorEstudiante
	   << "(" << MejorPromedio << ")" << endl;

	   cout << "\nDesea procesar otro grupo? (s/n): ";
	   cin >> Respuesta;
   } while (Respuesta == 's' || Respuesta == 'S');

}
