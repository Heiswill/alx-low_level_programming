global main
extern printf

section .text
main:
	push rbp	; Keep the stack aligned
	mov rbp, rsp
	sub rsp, 16	;//must be byte increments to maintain

	;function body
	xor eax, eax
	lea rdi, [msg]	; parameter
	call printf

	add rsp, 16
	leave		; mov rsp, rbp, pop rbp
	ret

section .data
	msg: db "Hello, Holberton",10,0
	fmt: db "%s",0	; Printf format, "\n",'0'
