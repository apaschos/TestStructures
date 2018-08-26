#ifndef TESTSTRUCTURES_VECTOR_H
#define TESTSTRUCTURES_VECTOR_H

#include "Test.h"
#include <vector>

using namespace std;

class Vector : public Test
{
public:
  Vector() : Test() {}
  virtual ~Vector() {}

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
  vector<int> m_data;
};

#endif //TESTSTRUCTURES_VECTOR_H
