global _ft_strdup

extern _ft_strlen
extern _ft_strcpy
extern _malloc

section .text

;rdi = str

_ft_strdup:
		call		_ft_strlen		;rax= len
		inc			rax				;rax++ = \0
		push		rdi				;str->stack
		mov			rdi,rax			;rdi = rax
		call		_malloc			;malloc(rdi)
		cmp			rax, 0			;malloc = 0
		je			finish			;return
		pop			rsi				;rsi = str
		mov			rdi, rax		;rdi = malloc(rax)
		call		_ft_strcpy		;copy rsi->rdi
		jmp			finish

finish:
		ret