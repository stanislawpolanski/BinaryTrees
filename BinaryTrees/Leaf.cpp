#include "pch.h"
#include "Leaf.h"
#include <stdlib.h>



Leaf::Leaf(int n)
{
	this->Value = n;
	Left = nullptr;
	Right = nullptr;
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
			this->Left = new Leaf(number);
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
			this->Right = new Leaf(number);
		}
		else
		{
			this->Right->InsertNode(number);
		}
	}
}
