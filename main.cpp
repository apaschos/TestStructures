#include <iostream>
#include "HashSet.h"
#include "TreeSet.h"
#include "Vector.h"
#include "LinkedList.h"

using namespace std;

int main()
{
  const size_t size = 100;
  const size_t runs = 100;

  Test * hm = new HashSet();
  // time now
  hm->load(size);
  // time now
  hm->run(runs);
  //time now

  // print Results

  return 0;
}