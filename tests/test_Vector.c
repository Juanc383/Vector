#include <stdio.h>
#include <stdlib.h>

#include "../libs/Vector.h"
#include "../libs/unity.h"

#define DIMENSIONS 3
#define ELEMENTOS 3
#define N_MEMBERS 5

void setUp(void){

}

void tearDown(void){

}


void test_VectorInit(void){
    puts("Testing Vector Init function");
    vector test_number = NULL;
    test_number = newVector(DIMENSIONS);
    TEST_ASSERT_FLOAT_IS_DETERMINATE(DIMENSIONS);
    freeVector(test_number);

}

void test_setVector(void){
  puts("Testing Set Vector function");
  float members[DIMENSIONS];
  vector set_number = NULL;
  set_number = newVector(DIMENSIONS);
  setVector(DIMENSIONS, members, ELEMENTOS);//:(
  TEST_ASSERT_EACH_EQUAL_FLOAT(DIMENSIONS, members, ELEMENTOS);
  freeVector(set_number);
}

void test_VectorFree(void){
    puts("Testing Vector Free Function");
    vector test_number = newVector(DIMENSIONS);

    test_number = freeVector(test_number);

    TEST_ASSERT_NULL(test_number);
}

int main(void){
    UNITY_BEGIN();
    RUN_TEST(test_VectorInit, __LINE__);
    RUN_TEST(test_setVector, __LINE__);
    RUN_TEST(test_VectorFree, __LINE__);
    return UNITY_END();
}
