global _ft_strlen

section .text

_ft_strlen:
		mov		rax, -1
		jmp		loop

loop:
		inc		rax						;rax++;
		cmp		BYTE rdi[rax], 0		;if (rdi[rax] == '\0')
		je		finish					;retutn
		jmp		loop					;else ->while

finish:
		ret