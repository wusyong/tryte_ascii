#include <stdio.h>
#include <string.h>

#include "tryte_ascii.h"

static char const ascii[] =
    "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Mauris ac leo a "
    "massa porta tempus scelerisque in leo. Duis ligula dolor, condimentum vel "
    "ipsum et, accumsan viverra lacus.";

static tryte_t trytes[] =
    "VBCDFDTCADEAXCDDGDIDADEASCCD9DCDFDEAGDXCHDEAPCADTCHDQAEARCCDBDGDTCRCHDTCHD"
    "IDFDEAPCSCXCDDXCGDRCXCBDVCEATC9DXCHDSAEAWBPCIDFDXCGDEAPCRCEA9DTCCDEAPCEAAD"
    "PCGDGDPCEADDCDFDHDPCEAHDTCADDDIDGDEAGDRCTC9DTCFDXCGDEDIDTCEAXCBDEA9DTCCDSA"
    "EANBIDXCGDEA9DXCVCID9DPCEASCCD9DCDFDQAEARCCDBDSCXCADTCBDHDIDADEAJDTC9DEAXC"
    "DDGDIDADEATCHDQAEAPCRCRCIDADGDPCBDEAJDXCJDTCFDFDPCEA9DPCRCIDGDSA";

void test_ascii_to_trytes(void) {
  size_t size = strlen(ascii) * 2;
  tryte_t buffer[size + 1];

  ascii_to_trytes(ascii, buffer);
  buffer[size] = '\0';
  printf("asccii to trytes:%s\n", buffer);
}

void test_trytes_to_ascii(void) {
  size_t size = strlen((char *)trytes) / 2;
  char buffer[size + 1];

  trytes_to_ascii(trytes, strlen((char *)trytes), buffer);
  buffer[size] = '\0';
  printf("trytes to ascii:%s\n", buffer);
}

int main(void) {
  test_ascii_to_trytes();
  test_trytes_to_ascii();

  return 0;
}
