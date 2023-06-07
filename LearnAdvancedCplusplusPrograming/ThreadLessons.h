#pragma once
#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include <semaphore>

class Semaphore {
public:
    explicit Semaphore(int count = 0) : count_(count) {}

    void Wait() {
        std::unique_lock<std::mutex> lock(mutex_);
        while (count_ == 0) {
            condition_.wait(lock);
        }
        count_--;
    }

    void Signal() {
        std::unique_lock<std::mutex> lock(mutex_);
        count_++;
        condition_.notify_one();
    }

private:
    int count_;
    std::mutex mutex_;
    std::condition_variable condition_;
};

class ThreadLessons
{
public:
	ThreadLessons();
	void ThreadLessonsVoidFunction();
	void MainMutexExamples();
	void MainSemaphoreExamples();
private:
	std::mutex Mtx;  // Mutex declaration  
	void PartialSum(const std::vector<int>& vec, int start, int end, int& result);
	void PrintMessage(const std::string& message);
	void PrintMessageLockGuard(const std::string& message);
    void WorkerThread(int id, Semaphore& semaphore);
};