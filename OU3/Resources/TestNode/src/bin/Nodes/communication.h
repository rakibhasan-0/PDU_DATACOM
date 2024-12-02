#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#include "node.h"
#include "communication.h"
#include "join_network.h"
#include "controller.h"   




// Function pointer for state handler
typedef int (*state_handler_t)(void *node, void *data);

// State handler functions for each state
int q5_state(void *node, void *data);
int q12_state(void *node, void *data);

// Array of state handler functions indexed by state constants
extern state_handler_t state_handlers[];

#endif // COMMUNICATION_H