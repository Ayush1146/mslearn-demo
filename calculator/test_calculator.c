#include "unity_internals.h"
#include "unity.h"
#include "calculator.h"

void setUp(){}
void tearDown(){}

void test_div(void)
{
  TEST_ASSERT_EQUAL(1, div(10, 10));
  TEST_ASSERT_EQUAL(0, div(10, 0 )); 
}

int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_div);

  /* Close the Unity Test Framework */
  return UNITY_END();
}