
section	.text
	global	_ft_strcmp

_ft_strcmp:									; s1 -> rdi    ;s2 -> rsi
	xor		rcx, rcx
_loop:
	mov		bl, [rdi + rcx]
	cmp		bl,	0x0
	je		return
	mov		dl, [rsi + rcx]
	cmp		dl, 0x0
	je		return
	cmp		bl, dl
	jne		return
	inc		rcx
	jmp		_loop
return:
	sub		bl, dl
	movsx	rax, bl
	ret
