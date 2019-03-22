#include <stdbool.h>
#include <stdint.h>

typedef int8_t tryte_t;

#define INDEX_OF_TRYTE(tryte) ((tryte) == '9' ? 0 : ((tryte) - 'A' + 1))
#define TRYTE_ALPHABET "9ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define TRYTE_SPACE 27

void ascii_to_trytes(char const *const input, tryte_t *const output);
void trytes_to_ascii(tryte_t const *const intput, int const input_size, char *const ouput);
