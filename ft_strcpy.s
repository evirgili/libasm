global _ft_strcpy

section .text

_ft_strcpy:
		mov		rax, -1
		jmp		loop

loop:
		inc		rax
		mov		bl, BYTE rdi[rax]
		mov		BYTE rsi[rax], bl
		cmp		BYTE rdi[rax], 0
		je		finish
		jmp		loop

finish:
		ret
