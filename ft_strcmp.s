global _ft_strcmp

section .text

_ft_strcmp:
		xor		rax, rax
		xor		rcx, rсx
		jmp		loop

loop:
		mov		dl, BYTE [rdi + rcx]
		cmp		dl, 0
		je		finish
		cmp		BYTE [rsi + rcx], 0
		je		finish
		cmp		dl, BYTE [rsi + rcx]
		jne		finish
		inc		rcx
		jmp		loop



finish:
		ret