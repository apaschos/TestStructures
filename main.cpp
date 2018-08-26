#include <iostream>
#include <unordered_set>

using namespace std;

class Test{
public:
  Test() {
    SIZE = 0;
    RUNS = 0;
  }
  virtual void load(const size_t size) = 0;
  virtual void run(const size_t runs) = 0;
  virtual void cleanup() = 0;
  virtual bool search(int val) = 0;

  size_t SIZE;
  size_t RUNS;
};

class HashSet : public Test
{
public:
  HashSet() : Test()
  {
  }

  virtual void load(const size_t size)
  {
    SIZE = size;
    m_set = unordered_set<int>();

    while(m_set.size() < SIZE)
    {
      m_set.insert(5);
    }
  }

  virtual void run(const size_t runs)
  {

  }

  virtual void cleanup()
  {

  }

  virtual bool search(int val)
  {
    return false;
  }

private:
  unordered_set<int> m_set;

};

class TreeMap : public Test
{

};

class LinkedList: public Test
{

};

class Vector : public Test
{

};

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