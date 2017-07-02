#include <iostream>
#include <vector>

int main() {

	std::vector<int> integers{50, 1, 987, 1001};

	//std::vector<int>::const_iterator element = integers.cbegin();
	 auto element = integers.cbegin(); 							// auto type deduction

	while (element != integers.end())
	{
		size_t index = std::distance(integers.cbegin(), element);
		std::cout << "Element at position " << index << " is: " << *element << std::endl;

		// move to the next element
		++element;
	}



	return 0;
}