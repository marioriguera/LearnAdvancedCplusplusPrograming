#pragma once
#include <iostream>
#include <vector>
#include <thread>
#include <mutex>

class ThreadLessons
{
public:
	ThreadLessons();
	void ThreadLessonsVoidFunction();
	void MainMutexExamples();
private:
	std::mutex Mtx;  // Mutex declaration
	void PartialSum(const std::vector<int>& vec, int start, int end, int& result);
	void PrintMessage(const std::string& message);
};