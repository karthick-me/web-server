#ifndef K_CONNECTION_H
#define K_CONNECTION_H

#include <k_os.h>
#include <k_config.h>

typedef struct k_listening_s{

    k_socket_t fd; // socket file descriptor

    struct sockaddr *sockaddr;
    socklen_t         socklen; /* size of sockaddr */

    int type;
    int backlog;


} k_listening_t;

typedef struct k_connection_s {

    void *data;

    k_socket_t fd;

    k_listening_t *listening;

    int type;

    struct sockaddr    *sockaddr;
    socklen_t           socklen;
} k_connection_t;

k_connection_t *k_create_listening(struct sockaddr *sockaddr, socklen_t socklen);


#endif