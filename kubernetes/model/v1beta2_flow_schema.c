#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1beta2_flow_schema.h"



v1beta2_flow_schema_t *v1beta2_flow_schema_create(
    char *api_version,
    char *kind,
    v1_object_meta_t *metadata,
    v1beta2_flow_schema_spec_t *spec,
    v1beta2_flow_schema_status_t *status
    ) {
    v1beta2_flow_schema_t *v1beta2_flow_schema_local_var = malloc(sizeof(v1beta2_flow_schema_t));
    if (!v1beta2_flow_schema_local_var) {
        return NULL;
    }
    v1beta2_flow_schema_local_var->api_version = api_version;
    v1beta2_flow_schema_local_var->kind = kind;
    v1beta2_flow_schema_local_var->metadata = metadata;
    v1beta2_flow_schema_local_var->spec = spec;
    v1beta2_flow_schema_local_var->status = status;

    return v1beta2_flow_schema_local_var;
}


void v1beta2_flow_schema_free(v1beta2_flow_schema_t *v1beta2_flow_schema) {
    if(NULL == v1beta2_flow_schema){
        return ;
    }
    listEntry_t *listEntry;
    if (v1beta2_flow_schema->api_version) {
        free(v1beta2_flow_schema->api_version);
        v1beta2_flow_schema->api_version = NULL;
    }
    if (v1beta2_flow_schema->kind) {
        free(v1beta2_flow_schema->kind);
        v1beta2_flow_schema->kind = NULL;
    }
    if (v1beta2_flow_schema->metadata) {
        v1_object_meta_free(v1beta2_flow_schema->metadata);
        v1beta2_flow_schema->metadata = NULL;
    }
    if (v1beta2_flow_schema->spec) {
        v1beta2_flow_schema_spec_free(v1beta2_flow_schema->spec);
        v1beta2_flow_schema->spec = NULL;
    }
    if (v1beta2_flow_schema->status) {
        v1beta2_flow_schema_status_free(v1beta2_flow_schema->status);
        v1beta2_flow_schema->status = NULL;
    }
    free(v1beta2_flow_schema);
}

cJSON *v1beta2_flow_schema_convertToJSON(v1beta2_flow_schema_t *v1beta2_flow_schema) {
    cJSON *item = cJSON_CreateObject();

    // v1beta2_flow_schema->api_version
    if(v1beta2_flow_schema->api_version) {
    if(cJSON_AddStringToObject(item, "apiVersion", v1beta2_flow_schema->api_version) == NULL) {
    goto fail; //String
    }
    }


    // v1beta2_flow_schema->kind
    if(v1beta2_flow_schema->kind) {
    if(cJSON_AddStringToObject(item, "kind", v1beta2_flow_schema->kind) == NULL) {
    goto fail; //String
    }
    }


    // v1beta2_flow_schema->metadata
    if(v1beta2_flow_schema->metadata) {
    cJSON *metadata_local_JSON = v1_object_meta_convertToJSON(v1beta2_flow_schema->metadata);
    if(metadata_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "metadata", metadata_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v1beta2_flow_schema->spec
    if(v1beta2_flow_schema->spec) {
    cJSON *spec_local_JSON = v1beta2_flow_schema_spec_convertToJSON(v1beta2_flow_schema->spec);
    if(spec_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "spec", spec_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v1beta2_flow_schema->status
    if(v1beta2_flow_schema->status) {
    cJSON *status_local_JSON = v1beta2_flow_schema_status_convertToJSON(v1beta2_flow_schema->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v1beta2_flow_schema_t *v1beta2_flow_schema_parseFromJSON(cJSON *v1beta2_flow_schemaJSON){

    v1beta2_flow_schema_t *v1beta2_flow_schema_local_var = NULL;

    // define the local variable for v1beta2_flow_schema->metadata
    v1_object_meta_t *metadata_local_nonprim = NULL;

    // define the local variable for v1beta2_flow_schema->spec
    v1beta2_flow_schema_spec_t *spec_local_nonprim = NULL;

    // define the local variable for v1beta2_flow_schema->status
    v1beta2_flow_schema_status_t *status_local_nonprim = NULL;

    // v1beta2_flow_schema->api_version
    cJSON *api_version = cJSON_GetObjectItemCaseSensitive(v1beta2_flow_schemaJSON, "apiVersion");
    if (api_version) { 
    if(!cJSON_IsString(api_version) && !cJSON_IsNull(api_version))
    {
    goto end; //String
    }
    }

    // v1beta2_flow_schema->kind
    cJSON *kind = cJSON_GetObjectItemCaseSensitive(v1beta2_flow_schemaJSON, "kind");
    if (kind) { 
    if(!cJSON_IsString(kind) && !cJSON_IsNull(kind))
    {
    goto end; //String
    }
    }

    // v1beta2_flow_schema->metadata
    cJSON *metadata = cJSON_GetObjectItemCaseSensitive(v1beta2_flow_schemaJSON, "metadata");
    if (metadata) { 
    metadata_local_nonprim = v1_object_meta_parseFromJSON(metadata); //nonprimitive
    }

    // v1beta2_flow_schema->spec
    cJSON *spec = cJSON_GetObjectItemCaseSensitive(v1beta2_flow_schemaJSON, "spec");
    if (spec) { 
    spec_local_nonprim = v1beta2_flow_schema_spec_parseFromJSON(spec); //nonprimitive
    }

    // v1beta2_flow_schema->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(v1beta2_flow_schemaJSON, "status");
    if (status) { 
    status_local_nonprim = v1beta2_flow_schema_status_parseFromJSON(status); //nonprimitive
    }


    v1beta2_flow_schema_local_var = v1beta2_flow_schema_create (
        api_version && !cJSON_IsNull(api_version) ? strdup(api_version->valuestring) : NULL,
        kind && !cJSON_IsNull(kind) ? strdup(kind->valuestring) : NULL,
        metadata ? metadata_local_nonprim : NULL,
        spec ? spec_local_nonprim : NULL,
        status ? status_local_nonprim : NULL
        );

    return v1beta2_flow_schema_local_var;
end:
    if (metadata_local_nonprim) {
        v1_object_meta_free(metadata_local_nonprim);
        metadata_local_nonprim = NULL;
    }
    if (spec_local_nonprim) {
        v1beta2_flow_schema_spec_free(spec_local_nonprim);
        spec_local_nonprim = NULL;
    }
    if (status_local_nonprim) {
        v1beta2_flow_schema_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}
