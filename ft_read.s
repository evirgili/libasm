global _ft_read
extern ___error

section .text

_ft_read:
		mov		rax, 0x2000003
		syscall
		jc		error
		ret

error:
		push	rax			;rax->stack
		call	___error	;get error change rax
		pop		qword[rax]	;take 8b from old rax
		mov		rax, -1		;return error -1
		ret