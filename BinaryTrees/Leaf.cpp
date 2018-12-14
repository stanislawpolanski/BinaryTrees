#include "pch.h"
#include "Leaf.h"



Leaf::Leaf(int n)
{
	this->Value = n;
	this->Left = nullptr;
	this->Right = nullptr;
}

int Leaf::GetValue()
{
	return this->Value;
}

Leaf::~Leaf()
{
}

void Leaf::InsertNode(int number)
{
	if (number < this->Value)
	{
		if (this->Left == nullptr)
		{
			Leaf leaf(number);
			this->Left = &leaf;
		}
		else
		{
			this->Left->InsertNode(number);
		}
	}
	else if (number > this->Value)
	{
		if (this->Right == nullptr)
		{
			Leaf leaf(number);
			this->Right = &leaf;
		}
		else
		{
			this->Left->InsertNode(number);
		}
	}
}
