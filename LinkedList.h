#ifndef TESTSTRUCTURES_LINKEDLIST_H
#define TESTSTRUCTURES_LINKEDLIST_H

#include "Test.h"
#include <list>

using namespace std;

class LinkedList : public Test
{
public:
  LinkedList() : Test() {}
  virtual ~LinkedList() {}

  virtual void load(const size_t size)
  {

  }

  virtual void run(const size_t runs)
  {

  }

  virtual bool search(int val)
  {
    return false;
  }

private:
  list<int> m_data;
};

#endif //TESTSTRUCTURES_LINKEDLIST_H
