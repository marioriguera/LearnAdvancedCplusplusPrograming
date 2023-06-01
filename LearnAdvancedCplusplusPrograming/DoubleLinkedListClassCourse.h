#pragma once

struct NodeDouble
{
	NodeDouble* prev;
	int data;
	NodeDouble* next;
};

class DoubleLinkedListClassCourse
{
public:
	NodeDouble* tail, * head;
	void Display();
};

