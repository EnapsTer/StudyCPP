//
// Created by Андре Шагиджанян on 25.08.2021.
//

#include <iostream>
#include "MutantStack.hpp"

int main()
{
  {
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	  std::cout << *it << std::endl;
	  ++it;
	}
	std::stack<int> s(mstack);
  }

  std::cout << std::endl;
  {
	MutantStack<float> mutant_stack;
	mutant_stack.push(1.1);
	mutant_stack.push(2.1);
	mutant_stack.push(3.1);
	mutant_stack.push(-11.1);
	mutant_stack.push(8.1);
	mutant_stack.push(123.1);
	mutant_stack.push(542.1);
	mutant_stack.push(9.1);

	MutantStack<float>::iterator it = mutant_stack.begin();
	std::cout << "Stack begin: " << *it << std::endl;

	MutantStack<float>::reverse_iterator rit = mutant_stack.rbegin();
	std::cout << "Stack reverse begin: " << *rit << std::endl;

	MutantStack<float>::const_reverse_iterator crit = mutant_stack.rend();
	--crit;
	std::cout << "Stack const reverse begin: " << *crit << std::endl;

	mutant_stack.pop();
	MutantStack<float>::iterator end_it = mutant_stack.end();
	--end_it;
	std::cout << "Stack end: " << *end_it << std::endl;

	MutantStack<float> mutant_stack1;
	mutant_stack1.push(1.1);

	mutant_stack1 = mutant_stack;
	it = mutant_stack.begin();
	std::cout << "Mutant stack 1: ";
	while (it != mutant_stack.end()) {
	  std::cout << *it << " ";
	  ++it;
	}
	std::cout << std::endl;
  }

  return 0;
}