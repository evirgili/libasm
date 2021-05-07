global _ft_strcpy

section .text

;rdi = dest		rsi = src


_ft_strcpy:
		xor		rcx, rcx
		jmp		loop

loop:
		mov		bl, BYTE [rsi + rcx]
		mov		BYTE [rdi + rcx], bl
		cmp		bl, 0
		je		finish
		inc		rcx
		jmp		loop

finish:
		mov		BYTE [rdi + rcx], 0
		mov		rax, rdi
		ret