#ifndef TESTSTRUCTURES_TEST_H
#define TESTSTRUCTURES_TEST_H

class Test{
public:
  Test() {
//    SIZE = 0;
//    RUNS = 0;
  }
  virtual ~Test() {};
  virtual void load(const size_t size) = 0;
  virtual void run(const size_t runs) = 0;
  virtual bool search(int val) = 0;
//  virtual void cleanup() = 0;

//  size_t SIZE;
//  size_t RUNS;
};

#endif //TESTSTRUCTURES_TEST_H
