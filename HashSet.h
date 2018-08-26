#ifndef TESTSTRUCTURES_HASHSET_H
#define TESTSTRUCTURES_HASHSET_H

#include "Test.h"
#include <unordered_set>

using namespace std;

class HashSet : public Test
{
public:
  HashSet() : Test()
  {
  }

  virtual ~HashSet() {}

  virtual void load(const size_t size)
  {
    m_data = unordered_set<int>();

    while(m_data.size() < size)
    {
      m_data.insert(5);
    }
  }

  virtual void run(const size_t runs)
  {
    for(size_t i=0; i<runs; ++i)
    {
      m_data.find(5);
    }
  }

  virtual bool search(int val)
  {
    return false;
  }

private:
  unordered_set<int> m_data;

};

#endif //TESTSTRUCTURES_HASHSET_H
