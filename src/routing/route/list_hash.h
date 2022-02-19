#ifndef ROUTING_ROUTE_LIST_HASH_H
#define ROUTING_ROUTE_LIST_HASH_H

#include <netlink/addr.h>

#include "route.h"
#include "route/list.h"

// "hash" like struct - simpler implementation rather than adding one more linked list struct for real hash implementation
// use this implementation for now instead of using uthash - see about key and how to implement hash because of prefix pointer being the key
struct route_list_hash_element {
	struct nl_addr *prefix;
	struct route_list_element *routes_head;
	struct route_list_hash_element *next;
};

void route_list_hash_init(struct route_list_hash_element **head);
void route_list_hash_add(struct route_list_hash_element **head, struct nl_addr *addr, struct route *route);
struct route_list_element **route_list_hash_get(struct route_list_hash_element **head, struct nl_addr *addr);
void route_list_hash_free(struct route_list_hash_element **head);

#endif // ROUTING_ROUTE_LIST_HASH_H
