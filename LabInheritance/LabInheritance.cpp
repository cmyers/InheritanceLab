// LabInheritance.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "B.h"
#include "C.h"

int main()
{
	B b{0, "B", 1};
	C c{2, "C", 3};

	b.Output();
	c.Output();

    return 0;
}

