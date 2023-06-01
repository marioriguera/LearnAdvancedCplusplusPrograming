#pragma once
#include <iostream>
#include <vector>
#include <thread>

class ThreadLessons
{
public:
	ThreadLessons();
	void ThreadLessonsVoidFunction();
	void PartialSum(const std::vector<int>& vec, int start, int end, int& result);
};

