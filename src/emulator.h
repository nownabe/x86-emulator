#ifndef EMULATOR_H_
#define EMULATOR_H_

#include <stdint.h>

enum Register { EAX, ECX, EDX, EBX, ESP, EBP, ESI, EDI, REGISTERS_COUNT };

typedef struct {
  /* general registers */
  uint32_t registers[REGISTERS_COUNT];

  /* EFLAGS register */
  uint32_t eflags;

  /* memory */
  uint8_t* memory;

  /* program counter */
  uint32_t eip;
} Emulator;

#endif
