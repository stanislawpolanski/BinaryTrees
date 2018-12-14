#pragma once
class Leaf
{
public:
	Leaf(int n);
	int GetValue();
	~Leaf();
	void InsertNode(int number);
	Leaf* Left;
	Leaf* Right;
private:
	int Value;
};

