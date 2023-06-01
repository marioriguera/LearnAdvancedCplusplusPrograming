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

