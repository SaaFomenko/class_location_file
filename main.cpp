#include <iostream>
#include <sstream>
#include "define.h"


int main() {
	File file;

	if (file.get()) return 1;
	
	std::stringstream data;
	data << file.data;


	
 
  return 0;
}
