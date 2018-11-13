#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b1,b2;

  initBox(&b1,5.0,5.0,5.0,5.0);  
  assertEquals("ul=(5,5), w=5, h=5", boxToString(b1), "boxToString(b1)");

  initBox(&b2,1.234567,1.234567,100.1111111,100.1111111);
  assertEquals("ul=(1.23,1.23), w=100, h=100", boxToString(b2), "boxToString(b2)");
  assertEquals("ul=(1.235,1.235), w=100.1, h=100.1", boxToString(b2,4), "boxToString(b2,4)");
  assertEquals("ul=(1.2346,1.2346), w=100.11, h=100.11", boxToString(b2,5), "boxToString(b2,5)");

		   
  return 0;
}
