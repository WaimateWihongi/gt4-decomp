/* Entry for PS2 functions that have no host code yet but are reached through a pointer (a vtable,
   a callback, a constructor table): the runtime writes `call _port_missing` (5 bytes) at their PS2
   address, so the return address on the stack identifies which function it was. Logs it, returns 0
   to the original caller. */
    .text
    .globl _port_missing
_port_missing:
    pop     %eax            /* = PS2 address + 5 */
    sub     $5, %eax
    push    %eax
    call    _port_missing_hit
    add     $4, %esp
    xor     %eax, %eax
    ret
