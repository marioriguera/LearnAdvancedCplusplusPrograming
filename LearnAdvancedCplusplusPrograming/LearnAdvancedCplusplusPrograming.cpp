// LearnAdvancedCplusplusPrograming.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <vector>
#include <thread>
#include "ThreadLessons.h"

int main()
{
	ThreadLessons* threadLesson = new ThreadLessons();
	std::cout << "THREADS!\n";
	std::cout << "\n";
	threadLesson->ThreadLessonsVoidFunction();
	std::cout << "\n";
	std::cout << "Mutex --------------------------------------------!\n";
	std::cout << "\n";
	threadLesson->MainMutexExamples();

	//wait to user press some key.
	getchar();

	return 0;
}

/* DENTRO DEL MAIN

	std::cout << "Course of c++ advanced programing!\n";
	LinkedListClassCourse* linkedList = new LinkedListClassCourse();

	//connection
	linkedList->ConnectTwoNodes();
	std::cout << "--------SECTION 1 LINKED LIST---------------------------!\n";
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
	std::cout << "-----How works double pointer------------------------------!\n";
	linkedList->HowWorksDoublePointer(25);
	std::cout << "--------Deleting node---------------------------!\n";
	linkedList->DeleteNode(&linkedList->head, 2);
	linkedList->Display();
	std::cout << "Count of elemnts " << linkedList->Count(linkedList->head) << std::endl;
	std::cout << "--------Cleaning the List---------------------------!\n";
	linkedList->DeleteComplete(&linkedList->head);
	linkedList->Display();
	std::cout << "Count of elemnts " << linkedList->Count(linkedList->head) << std::endl;
	std::cout << "---Before remove duplicates--------------------------------!\n";
	linkedList->Create(2);
	linkedList->Create(2);
	linkedList->Create(3);
	linkedList->Create(3);
	linkedList->Create(4);
	linkedList->Create(5);
	linkedList->Display();
	std::cout << "---After remove duplicates--------------------------------!\n";
	linkedList->RemovingOfDuplicates();
	linkedList->Display();
	std::cout << "----Before remove duplicates unshorted list-------------------------------!\n";
	std::cout << "----JUST REMOVE THE FIRST MATCH-------------------------------!\n";
	linkedList->DeleteComplete(&linkedList->head);
	linkedList->Create(5);
	linkedList->Create(7);
	linkedList->Create(7);
	linkedList->Create(5);
	linkedList->Create(5);
	linkedList->Display();
	std::cout << "----After remove duplicates unshorted list-------------------------------!\n";
	linkedList->RemoveDuplicatesUnshortedList();
	linkedList->Display();
	std::cout << "---Before reversing a linked list--------------------------------!\n";
	linkedList->DeleteComplete(&linkedList->head);
	linkedList->Create(2);
	linkedList->Create(3);
	linkedList->Create(4);
	linkedList->Create(5);
	linkedList->Display();
	std::cout << "----After reversing a linked list-------------------------------!\n";
	linkedList->ReversingSingleLinkedList();
	linkedList->Display();
	std::cout << "-----Before segregate a linked list------------------------------!\n";
	linkedList->DeleteComplete(&linkedList->head);
	linkedList->Create(20);
	linkedList->Create(3);
	linkedList->Create(41);
	linkedList->Create(6);
	linkedList->Create(12);
	linkedList->Create(9);
	linkedList->Create(15);
	linkedList->Create(14);
	linkedList->Display();
	std::cout << "----After segregate a linked list-------------------------------!\n";
	linkedList->SeperateEvenOdd();
	linkedList->Display();
	std::cout << "-----------------------------------!\n";
	std::cout << "-----Before segregate a linked list------------------------------!\n";
	linkedList->DeleteComplete(&linkedList->head);
	linkedList->Create(5);
	linkedList->Create(2);
	linkedList->Display();
	std::cout << "----After segregate a linked list-------------------------------!\n";
	linkedList->SeperateEvenOdd();
	linkedList->Display();
	std::cout << "-----------------------------------!\n";
	DoubleLinkedListClassCourse* doubleLinkedList = new DoubleLinkedListClassCourse();

	std::cout << "-----------------------------------!\n";
	std::cout << "-----------------------------------!\n";
	std::cout << "-----------------------------------!\n";
*/

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
