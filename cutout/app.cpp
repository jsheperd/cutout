/*
 * app.cpp
 *
 *  Created on: 2013.01.21.
 *      Author: Apa
 */

#include "app.h"
#include <iostream>


app::app() {
	// TODO Auto-generated constructor stub

}

app::~app() {
	// TODO Auto-generated destructor stub
}


int main(){
  for(int i=0; i<8; i++){

	  std::cout << "i= " << i << std::endl;
  }

  std::cout << "End of program." << std::endl;
  return 0;
}
