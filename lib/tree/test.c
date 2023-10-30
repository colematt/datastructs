#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
#include <CUnit/TestRun.h>
#include <stdio.h>
#include <stdbool.h>

/* The suite initialization function.
 * Returns zero on success, non-zero otherwise.
 */
int init_suite_tree(void) { return 0; }

/* The suite cleanup function.
 * Closes the temporary file used by the tests.
 * Returns zero on success, non-zero otherwise.
 */
int clean_suite_tree(void) { return 0; }

void testTREE(void) { CU_PASS("Test not implemented"); }

int main(int argc, char *argv[]) {

  /* initialize the CUnit test registry */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();

/* add a suite to the registry */
  CU_pSuite pSuite_tree = NULL;
  pSuite_tree = CU_add_suite("Suite_Tree", init_suite_tree, clean_suite_tree);
  if (NULL == pSuite_tree) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  /* Add tests to the suite */
  if ((NULL == CU_add_test(pSuite_tree, "test of trees", testTREE)) ||
      (false)) {
    CU_cleanup_registry();
    return CU_get_error();
  }

  /* Run all tests using the CUnit Basic interface */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  CU_cleanup_registry();
  return CU_get_error();
}