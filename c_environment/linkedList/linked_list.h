#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include <assert.h>
#include <errno.h>

struct s_node {
    struct s_node *next;
    int32_t data;
};
