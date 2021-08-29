//Raúl Badillo Lora
//Figura 3.10
//Incluye  a gradebook.h como una libreria

#include <iostream>//le permite al programa sacar información a la pantalla
using std::cout;//el programa usa cout
using std::endl;//el programa usa endl

#include "GradeBook.h"// incluir la definicion de la clase gradebook

// constructor initializes courseName with string supplied as argument
11 GradeBook::GradeBook( string name )
12 {
13 setCourseName( name ); //
14 } // termina GradeBook constructor
15
16 // funcion para poner el nombre de curso
17 void GradeBook::setCourseName( string name )
18 {
19 courseName = name; // guarda el nombre del curs
20 } // termina la funcion
21
22 // funcion para obtener el nombre del cursp
23 string GradeBook::getCourseName()
24 {
25 return courseName; // regresa courseName
26 } // termina funcion getCourseName
27
28 // muestra mensaje
29 void GradeBook::displayMessage()
30 {
31 // llama getCourseName para obtener courseName
32 cout << "Welcome to the grade book for\n" << getCourseName()
33 << "!" << endl;
34 } // termina displayMessage
