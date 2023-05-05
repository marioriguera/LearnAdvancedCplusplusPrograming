// LearnAdvancedCplusplusPrograming.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include "LinkedListClassCourse.h"

int main()
{
	std::cout << "Course of c++ advanced programing!\n";
	LinkedListClassCourse* linkedList = new LinkedListClassCourse();

	//connection
	linkedList->ConnectTwoNodes();
	std::cout << "-----------------------------------!\n";
	linkedList->Create(2);
	linkedList->Create(3);
	linkedList->Create(4);
	linkedList->Display();
	std::cout << "Count of elemnts " << linkedList->Count(linkedList->head) << std::endl;
	std::cout << "-----------------------------------!\n";
	linkedList->InsertStart(1);
	linkedList->Display();
	std::cout << "Count of elemnts " << linkedList->Count(linkedList->head) << std::endl;
	std::cout << "-----------------------------------!\n";
	linkedList->InsertPos(2, 8);
	linkedList->Display();
	std::cout << "Count of elemnts " << linkedList->Count(linkedList->head) << std::endl;
	std::cout << "-----------------------------------!\n";
	linkedList->HowWorksDoublePointer(25);
	std::cout << "-----------------------------------!\n";
	linkedList->DeleteNode(&linkedList->head, 2);
	linkedList->Display();
	std::cout << "Count of elemnts " << linkedList->Count(linkedList->head) << std::endl;
	std::cout << "-----------------------------------!\n";
	linkedList->DeleteComplete(&linkedList->head);
	linkedList->Display();
	std::cout << "Count of elemnts " << linkedList->Count(linkedList->head) << std::endl;
	std::cout << "-----------------------------------!\n";

	//wait to user press some key.
	getchar();

	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
