#include "ThreadLessons.h"

ThreadLessons::ThreadLessons()
{
}

// Función que realiza la suma parcial en un rango específico del vector
void ThreadLessons::PartialSum(const std::vector<int>& vec, int start, int end, int& result)
{
	for (int i = start; i < end; ++i) {
		result += vec[i];
	}
}

/*
* @brief Basic example for use threads.
*/
void ThreadLessons::ThreadLessonsVoidFunction()
{
	std::vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	const int numThreads = 4; // Número de hilos a utilizar
	const int vecSize = vec.size();

	int totalSum = 0;
	std::vector<std::thread> threads;

	// Dividir el trabajo entre los hilos
	for (int i = 0; i < numThreads; ++i) {
		int start = i * (vecSize / numThreads);
		int end = (i == numThreads - 1) ? vecSize : (i + 1) * (vecSize / numThreads);
		threads.emplace_back([&vec, start, end, &totalSum]() {
			ThreadLessons obj;
			obj.PartialSum(vec, start, end, totalSum);
		});
	}

	// Esperar a que todos los hilos terminen su ejecución
	for (auto& thread : threads) {
		thread.join();
	}

	std::cout << "La suma total es: " << totalSum << std::endl;
}

/*
* @brief Printing message. Using mutex inside.
* @param message : Memory address from a message.
*/
void ThreadLessons::PrintMessage(const std::string& message)
{
	ThreadLessons::Mtx.lock();  // Acquire the mutex manually

	// Sección crítica protegida por el cerrojo
	for (int i = 0; i < 5; ++i) {
		std::cout << message << "\n" << std::endl;
	}

	ThreadLessons::Mtx.unlock();  // Manually release the mutex
}

/*
* @brief Main funtion to practice use of mutex.
*/
void ThreadLessons::MainMutexExamples()
{
	//std::thread t1(&ThreadLessons::PrintMessage, "Hello");
	auto message1 = "Hello";
	std::thread t1([message1]()
	{
		ThreadLessons obj;
		obj.PrintMessage(message1);
	});

	//std::thread t2(&ThreadLessons::PrintMessage, "World");
	auto message2 = "World";
	std::thread t2([message2]()
	{
		ThreadLessons obj;
		obj.PrintMessage(message2);
	});

	t1.join();
	t2.join();
}
