#ifndef CONNECTION_H
#define CONNECTION_H

#include <os.h>
#include <config.h>

typedef struct listening_s{

    socket_t fd; // socket file descriptor

    struct sockaddr *sockaddr;
    socklen_t         socklen; /* size of sockaddr */

    int type;
    int backlog;


} listening_t;

typedef struct connection_s {

    void *data;

    socket_t fd;

    listening_t *listening;

    int type;

    struct sockaddr    *sockaddr;
    socklen_t           socklen;
} connection_t;

connection_t *create_listening(struct sockaddr *sockaddr, socklen_t socklen);


#endif