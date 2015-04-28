#ifndef ALLOCS_H_
#define ALLOCS_H_

// sort at insert by offset typedef struct access_s access_t;
typedef struct access_s access_t;
struct access_s
{
  struct access_s  *next;
  size_t           offset;
  size_t           nb_hit;
};

//maybe store module_names for realloc
typedef struct malloc_s malloc_t;
struct malloc_s
{
  void            *start;
  void            *end;
  size_t          size;
  access_t        *access;
  unsigned int    flag;
  struct malloc_s *next;
};

typedef struct
{
  malloc_t      *block;
  size_t        size;
} realloc_tmp_t;

// globals
extern malloc_t  *blocks;
extern void      *lock;

void pre_malloc(void *wrapctx, OUT void **user_data);
void post_malloc(void *wrapctx, void *user_data);

void pre_realloc(void *wrapctx, OUT void **user_data);
void post_realloc(void *wrapctx, void *user_data);

void pre_free(void *wrapctx, __attribute__((unused))OUT void **user_data);

#endif