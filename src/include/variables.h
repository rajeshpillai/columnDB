
#ifndef __VARIABLES_H__
#define __VARIABLES_H__

#include "message.h"

typedef enum NodeType {
    INT_N,
    FLOAT_N,
    VECTOR_N
} NodeType;

// Each variable can have a single type
// This is how we support variables of multiple types
typedef struct variable {
    char *name;
    NodeType type;
    vector *v;
    int i;
    float f;
} variable;

void add_vector_var(vector *v, const char *name);
void add_float_var(float f, const char *name);
void add_int_var(int n, const char *name);
variable *get_var_by_name(const char *lookup_name);
void destroy_vars(void);

#endif /* __VARIABLES_H__ */
