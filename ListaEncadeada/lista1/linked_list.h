#include <stdbool.h>

typedef struct simple_node Node;
typedef struct linked_list List;

void add_first(List *L, int val);
bool list_is_empty(const List *L);
void new_add_first(List *L, int val);
void add_last_slow(List *L, int val);
void add_last_fast(List *L, int val);
Node *node_create(int val);
List *list_create();
void list_remove(List *L, int val);
void print_list(const List *L);

