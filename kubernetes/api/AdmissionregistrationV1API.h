#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/object.h"
#include "../model/v1_api_resource_list.h"
#include "../model/v1_delete_options.h"
#include "../model/v1_mutating_webhook_configuration.h"
#include "../model/v1_mutating_webhook_configuration_list.h"
#include "../model/v1_status.h"
#include "../model/v1_validating_webhook_configuration.h"
#include "../model/v1_validating_webhook_configuration_list.h"


// create a MutatingWebhookConfiguration
//
v1_mutating_webhook_configuration_t*
AdmissionregistrationV1API_createMutatingWebhookConfiguration(apiClient_t *apiClient, v1_mutating_webhook_configuration_t *body, char *pretty, char *dryRun, char *fieldManager, char *fieldValidation);


// create a ValidatingWebhookConfiguration
//
v1_validating_webhook_configuration_t*
AdmissionregistrationV1API_createValidatingWebhookConfiguration(apiClient_t *apiClient, v1_validating_webhook_configuration_t *body, char *pretty, char *dryRun, char *fieldManager, char *fieldValidation);


// delete collection of MutatingWebhookConfiguration
//
v1_status_t*
AdmissionregistrationV1API_deleteCollectionMutatingWebhookConfiguration(apiClient_t *apiClient, char *pretty, char *_continue, char *dryRun, char *fieldSelector, int *gracePeriodSeconds, char *labelSelector, int *limit, int *orphanDependents, char *propagationPolicy, char *resourceVersion, char *resourceVersionMatch, int *sendInitialEvents, int *timeoutSeconds, v1_delete_options_t *body);


// delete collection of ValidatingWebhookConfiguration
//
v1_status_t*
AdmissionregistrationV1API_deleteCollectionValidatingWebhookConfiguration(apiClient_t *apiClient, char *pretty, char *_continue, char *dryRun, char *fieldSelector, int *gracePeriodSeconds, char *labelSelector, int *limit, int *orphanDependents, char *propagationPolicy, char *resourceVersion, char *resourceVersionMatch, int *sendInitialEvents, int *timeoutSeconds, v1_delete_options_t *body);


// delete a MutatingWebhookConfiguration
//
v1_status_t*
AdmissionregistrationV1API_deleteMutatingWebhookConfiguration(apiClient_t *apiClient, char *name, char *pretty, char *dryRun, int *gracePeriodSeconds, int *orphanDependents, char *propagationPolicy, v1_delete_options_t *body);


// delete a ValidatingWebhookConfiguration
//
v1_status_t*
AdmissionregistrationV1API_deleteValidatingWebhookConfiguration(apiClient_t *apiClient, char *name, char *pretty, char *dryRun, int *gracePeriodSeconds, int *orphanDependents, char *propagationPolicy, v1_delete_options_t *body);


// get available resources
//
v1_api_resource_list_t*
AdmissionregistrationV1API_getAPIResources(apiClient_t *apiClient);


// list or watch objects of kind MutatingWebhookConfiguration
//
v1_mutating_webhook_configuration_list_t*
AdmissionregistrationV1API_listMutatingWebhookConfiguration(apiClient_t *apiClient, char *pretty, int *allowWatchBookmarks, char *_continue, char *fieldSelector, char *labelSelector, int *limit, char *resourceVersion, char *resourceVersionMatch, int *sendInitialEvents, int *timeoutSeconds, int *watch);


// list or watch objects of kind ValidatingWebhookConfiguration
//
v1_validating_webhook_configuration_list_t*
AdmissionregistrationV1API_listValidatingWebhookConfiguration(apiClient_t *apiClient, char *pretty, int *allowWatchBookmarks, char *_continue, char *fieldSelector, char *labelSelector, int *limit, char *resourceVersion, char *resourceVersionMatch, int *sendInitialEvents, int *timeoutSeconds, int *watch);


// partially update the specified MutatingWebhookConfiguration
//
v1_mutating_webhook_configuration_t*
AdmissionregistrationV1API_patchMutatingWebhookConfiguration(apiClient_t *apiClient, char *name, object_t *body, char *pretty, char *dryRun, char *fieldManager, char *fieldValidation, int *force);


// partially update the specified ValidatingWebhookConfiguration
//
v1_validating_webhook_configuration_t*
AdmissionregistrationV1API_patchValidatingWebhookConfiguration(apiClient_t *apiClient, char *name, object_t *body, char *pretty, char *dryRun, char *fieldManager, char *fieldValidation, int *force);


// read the specified MutatingWebhookConfiguration
//
v1_mutating_webhook_configuration_t*
AdmissionregistrationV1API_readMutatingWebhookConfiguration(apiClient_t *apiClient, char *name, char *pretty);


// read the specified ValidatingWebhookConfiguration
//
v1_validating_webhook_configuration_t*
AdmissionregistrationV1API_readValidatingWebhookConfiguration(apiClient_t *apiClient, char *name, char *pretty);


// replace the specified MutatingWebhookConfiguration
//
v1_mutating_webhook_configuration_t*
AdmissionregistrationV1API_replaceMutatingWebhookConfiguration(apiClient_t *apiClient, char *name, v1_mutating_webhook_configuration_t *body, char *pretty, char *dryRun, char *fieldManager, char *fieldValidation);


// replace the specified ValidatingWebhookConfiguration
//
v1_validating_webhook_configuration_t*
AdmissionregistrationV1API_replaceValidatingWebhookConfiguration(apiClient_t *apiClient, char *name, v1_validating_webhook_configuration_t *body, char *pretty, char *dryRun, char *fieldManager, char *fieldValidation);


