#ifndef v1alpha2_pod_scheduling_context_TEST
#define v1alpha2_pod_scheduling_context_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v1alpha2_pod_scheduling_context_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v1alpha2_pod_scheduling_context.h"
v1alpha2_pod_scheduling_context_t* instantiate_v1alpha2_pod_scheduling_context(int include_optional);

#include "test_v1_object_meta.c"
#include "test_v1alpha2_pod_scheduling_context_spec.c"
#include "test_v1alpha2_pod_scheduling_context_status.c"


v1alpha2_pod_scheduling_context_t* instantiate_v1alpha2_pod_scheduling_context(int include_optional) {
  v1alpha2_pod_scheduling_context_t* v1alpha2_pod_scheduling_context = NULL;
  if (include_optional) {
    v1alpha2_pod_scheduling_context = v1alpha2_pod_scheduling_context_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_v1_object_meta(0),
       // false, not to have infinite recursion
      instantiate_v1alpha2_pod_scheduling_context_spec(0),
       // false, not to have infinite recursion
      instantiate_v1alpha2_pod_scheduling_context_status(0)
    );
  } else {
    v1alpha2_pod_scheduling_context = v1alpha2_pod_scheduling_context_create(
      "0",
      "0",
      NULL,
      NULL,
      NULL
    );
  }

  return v1alpha2_pod_scheduling_context;
}


#ifdef v1alpha2_pod_scheduling_context_MAIN

void test_v1alpha2_pod_scheduling_context(int include_optional) {
    v1alpha2_pod_scheduling_context_t* v1alpha2_pod_scheduling_context_1 = instantiate_v1alpha2_pod_scheduling_context(include_optional);

	cJSON* jsonv1alpha2_pod_scheduling_context_1 = v1alpha2_pod_scheduling_context_convertToJSON(v1alpha2_pod_scheduling_context_1);
	printf("v1alpha2_pod_scheduling_context :\n%s\n", cJSON_Print(jsonv1alpha2_pod_scheduling_context_1));
	v1alpha2_pod_scheduling_context_t* v1alpha2_pod_scheduling_context_2 = v1alpha2_pod_scheduling_context_parseFromJSON(jsonv1alpha2_pod_scheduling_context_1);
	cJSON* jsonv1alpha2_pod_scheduling_context_2 = v1alpha2_pod_scheduling_context_convertToJSON(v1alpha2_pod_scheduling_context_2);
	printf("repeating v1alpha2_pod_scheduling_context:\n%s\n", cJSON_Print(jsonv1alpha2_pod_scheduling_context_2));
}

int main() {
  test_v1alpha2_pod_scheduling_context(1);
  test_v1alpha2_pod_scheduling_context(0);

  printf("Hello world \n");
  return 0;
}

#endif // v1alpha2_pod_scheduling_context_MAIN
#endif // v1alpha2_pod_scheduling_context_TEST
