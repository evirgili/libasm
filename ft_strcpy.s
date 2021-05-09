global _ft_strcpy

section .text

;rdi = dest		rsi = src


_ft_strcpy:
		xor		rcx, rcx				;rcx = 0;
		jmp		loop					;go while

loop:
		mov		bl, BYTE [rsi + rcx]	;bl = BYTE [rsi + rcx]
		cmp		bl, 0					;if bl = 0
		je		finish					;return
		mov		BYTE [rdi + rcx], bl	;BYTE [rdi + rcx] = bl
		inc		rcx						;else rcx++
		jmp		loop					;go while

finish:
		mov		BYTE [rdi + rcx], 0		;last = \0
		mov		rax, rdi				;rax = rdi
		ret								;return rax