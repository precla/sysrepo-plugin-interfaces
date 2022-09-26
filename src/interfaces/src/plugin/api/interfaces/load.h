#ifndef INTERFACES_PLUGIN_API_INTERFACES_LOAD_H
#define INTERFACES_PLUGIN_API_INTERFACES_LOAD_H

#include "plugin/context.h"
#include "plugin/data/interfaces/interface.h"
#include "plugin/data/interfaces/interface/linked_list.h"

int interfaces_load_interface(interfaces_ctx_t* ctx, interfaces_interface_hash_element_t** if_hash);

#endif // INTERFACES_PLUGIN_API_INTERFACES_LOAD_H
