#include "tryte_ascii.h"

void ascii_to_trytes(char const *const input, tryte_t *const output) {
  int j = 0, dec = 0, first = 0, second = 0;

  for (int i = 0; input[i]; i++) {
    dec = input[i];
    first = dec % TRYTE_SPACE;
    second = (dec - first) / TRYTE_SPACE;
    output[j++] = TRYTE_ALPHABET[first];
    output[j++] = TRYTE_ALPHABET[second];
  }
}

void trytes_to_ascii(tryte_t const *const input, int const input_size, char *const output) {
  for (int i = 0; i < input_size; i += 2) {
    output[i / 2] = INDEX_OF_TRYTE(input[i]) + INDEX_OF_TRYTE(input[i + 1]) * TRYTE_SPACE;
  }
}
