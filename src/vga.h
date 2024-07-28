#include <stdint.h>
#include <stddef.h>

enum vga_color;

static inline uint8_t vga_entry_color(enum vga_color, enum vga_color);

static inline uint8_t vga_entry(unsigned char, uint8_t);

static const size_t VGA_WIDTH = 80;
static const size_t VGA_HEIGHT = 25;

size_t terminal_row;
size_t terminal_column;
uint8_t terminal_color;
uint16_t* terminal_buffer;

void terminal_initialize(void);

void terminal_setcolor(uint8_t);

void terminal_putentryat(char, uint8_t, size_t, size_t);

void terminal_putchar(char);

void terminal_write(const char*, size_t);

void terminal_writestring(const char*);