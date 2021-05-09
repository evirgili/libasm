global _ft_strcmp

section .text

;rdi = s1   rsi = s2

_ft_strcmp:
		mov		rcx, 0					;rcx = 0
		xor		rax, rax
		jmp		loop					;go while

loop:
		cmp		BYTE [rdi + rcx], 0					;if al = 0
		je		finish					;return
		cmp		BYTE [rsi + rcx], 0		;if s2[i] = 0
		je		finish					;return
		mov		al, BYTE [rdi + rcx]	;al = s1[i]
		cmp		al, BYTE [rsi + rcx]	;if dl != s2
		jne		finish					;return
		inc		rcx						;rsx++
		jmp		loop					;go while



finish:
		mov		al, BYTE [rdi + rcx]
		mov		dl, byte[rsi + rcx]
		sub		rax, rdx					;s1 = s1 - s2
		ret