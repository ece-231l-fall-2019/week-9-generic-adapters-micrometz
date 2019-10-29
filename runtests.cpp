#include <iostream>

// change the value below to 1 to run tests against your StringList class.
// change the value below to 0 to run tests against the built in std::list.

#include <string>

#if 0
#include "List.h"
typedef List<std::string> StringList;
typedef List<int> IntList;
#include "Stack.h"
typedef Stack<std::string> StringStack;
typedef Stack<int> IntStack;
#else
#include <list>
typedef std::list<std::string> StringList;
typedef std::list<int> IntList;
#include <stack>
typedef std::stack<std::string> StringStack;
typedef std::stack<int> IntStack;
#endif

void Assert(bool cond, std::string message)
{
	if (cond)
		std::cout << "Pass: " << message << std::endl;
	else
		std::cerr << "FAIL: " << message << std::endl;
}

int main()
{
	StringList a;
	StringList b;

	a.push_front("A");
	Assert(a.front() == "A", "front == A");
	a.push_front("B");
	Assert(a.front() == "B", "front == B");
	a.pop_front();
	Assert(a.front() == "A", "front == A");
	a.push_front("Z");
	Assert(a.front() == "Z", "front == Z");

	b = a;

	Assert(b.front() == "Z", "b.front == Z");
	b.pop_front();
	Assert(b.front() == "A", "b.front == A");
	b.pop_front();
	Assert(b.empty() == true, "b is empty");
	Assert(a.empty() == false, "a is NOT empty");
	
	StringList AB;
	StringList AC;

	AB.push_front("w");
	AB.push_front("e");
	AB.push_front("s");
	AB.push_front("t");
	AB.reverse();
	AC = AB;
	Assert(AC.front() == "t", "reverse");
	

	StringStack c;
	c.push("A");
	c.push("B");
	Assert(c.top() == "B", "B is at top");
	c.pop();
	Assert(c.empty() == false, "B is not empty");
	c.pop();
	Assert(c.empty() == true, "B is empty");


	IntList ia;
	ia.push_front(5);
	ia.push_front(6);
	Assert(ia.front() == 6, "front is 6");


	IntStack ic;
	ic.push(6);
	ic.push(5);
	Assert(ic.top() == 5, "top is 5");

	IntList id = {3,2,4,5,7,1};
	Assert(id.front() == 3, "front ");
	return 0;
}


