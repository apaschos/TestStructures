#ifndef TESTSTRUCTURES_TREESET_H
#define TESTSTRUCTURES_TREESET_H

#include "Test.h"
#include <set>

using namespace std;

class TreeSet : public Test
{
public:
  virtual void load(const size_t size)
  {

  }
  virtual ~TreeSet() {}

  virtual void run(const size_t runs)
  {

  }

  virtual bool search(int val)
  {
    return false;
  }

private:
  set<int> m_data;
};

#endif //TESTSTRUCTURES_TREESET_H
