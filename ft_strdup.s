section.text:
	global _ft_strdup
	extern _malloc
	extern _ft_strlen
	extern _ft_strcpy

_ft_strdup:
	cmp rdi, 0x0
	call _ft_strlen
	inc rax
	push rdi
	mov rdi, rax
	call _malloc
	pop rdi
	push rsi
	mov rsi, rdi
	mov rdi, rax
	call _ft_strcpy
	pop rsi
	ret
