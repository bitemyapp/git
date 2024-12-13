#include "cache.h"

char *sha1_file_directory;
struct cache_entry **active_cache;
unsigned int active_nr, active_alloc;
