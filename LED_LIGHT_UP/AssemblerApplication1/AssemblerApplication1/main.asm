;
; AssemblerApplication1.asm
;
; Created: 25/10/2026 22:53:58
; Author : amals
;


; Replace with your application code

rjmp start

start:
    ldi r16, 0x20
    out DDRB, r16
    out PORTB, r16

end:
    rjmp end 