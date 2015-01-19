// skip_list.h

# ifndef SKIP_LIST_H_
# define SKIP_LIST_H_

# define MAX_LEVEL 7

struct cell {
  double        key;
  void         *value;
  size_t        level;
  struct cell  *next[MAX_LEVEL + 1];
  struct cell  *prev[MAX_LEVEL + 1];
};

struct skip_list {
  size_t        size;
  struct cell  *head, *tail;
};

// Returns a new skip-list
struct skip_list* skip_list_empty(void);

// Returns true if list is empty
int skip_list_is_empty(struct skip_list *list);

// Returns the cell containing the key, NULL if not found
struct cell* skip_list_find(struct skip_list *list, double key);

// Insert (key,value) in the list, returns false if the pair is already there
int skip_list_insert(struct skip_list *list, double key, void *value);

# endif
