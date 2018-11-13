#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"




int main() {

  struct Box b1;

  initBox(&b1,3.2222222222,4.22222222222,5.2222222222,6.2222222222);
  assertEquals("ul=(3,4),w=5,h=6", boxToString(b1,1), "boxToString(b2,1)");
  assertEquals("ul=(3.2,4.2),w=5.2,h=6.2", boxToString(b1,2), "boxToString(b2,2)");
  assertEquals("ul=(3.22,4.22),w=5.22,h=6.22", boxToString(b1,3), "boxToString(b2,3)");
  assertEquals("ul=(3.222,4.222),w=5.222,h=6.222", boxToString(b1,4), "boxToString(b2,4)");
  assertEquals("ul=(3.2222,4.2222),w=5.2222,h=6.2222", boxToString(b1,5), "boxToString(b2,5)");
  assertEquals("ul=(3.22222,4.22222),w=5.22222,h=6.22222", boxToString(b1,6), "boxToString(b2,6)");

		   
  return 0;
}
