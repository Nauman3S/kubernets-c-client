#ifndef v1beta3_flow_schema_list_TEST
#define v1beta3_flow_schema_list_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v1beta3_flow_schema_list_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v1beta3_flow_schema_list.h"
v1beta3_flow_schema_list_t* instantiate_v1beta3_flow_schema_list(int include_optional);

#include "test_v1_list_meta.c"


v1beta3_flow_schema_list_t* instantiate_v1beta3_flow_schema_list(int include_optional) {
  v1beta3_flow_schema_list_t* v1beta3_flow_schema_list = NULL;
  if (include_optional) {
    v1beta3_flow_schema_list = v1beta3_flow_schema_list_create(
      "0",
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_v1_list_meta(0)
    );
  } else {
    v1beta3_flow_schema_list = v1beta3_flow_schema_list_create(
      "0",
      list_createList(),
      "0",
      NULL
    );
  }

  return v1beta3_flow_schema_list;
}


#ifdef v1beta3_flow_schema_list_MAIN

void test_v1beta3_flow_schema_list(int include_optional) {
    v1beta3_flow_schema_list_t* v1beta3_flow_schema_list_1 = instantiate_v1beta3_flow_schema_list(include_optional);

	cJSON* jsonv1beta3_flow_schema_list_1 = v1beta3_flow_schema_list_convertToJSON(v1beta3_flow_schema_list_1);
	printf("v1beta3_flow_schema_list :\n%s\n", cJSON_Print(jsonv1beta3_flow_schema_list_1));
	v1beta3_flow_schema_list_t* v1beta3_flow_schema_list_2 = v1beta3_flow_schema_list_parseFromJSON(jsonv1beta3_flow_schema_list_1);
	cJSON* jsonv1beta3_flow_schema_list_2 = v1beta3_flow_schema_list_convertToJSON(v1beta3_flow_schema_list_2);
	printf("repeating v1beta3_flow_schema_list:\n%s\n", cJSON_Print(jsonv1beta3_flow_schema_list_2));
}

int main() {
  test_v1beta3_flow_schema_list(1);
  test_v1beta3_flow_schema_list(0);

  printf("Hello world \n");
  return 0;
}

#endif // v1beta3_flow_schema_list_MAIN
#endif // v1beta3_flow_schema_list_TEST