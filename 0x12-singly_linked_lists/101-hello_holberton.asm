section .data
	hello_msg db "Hello, Holberton", 0

section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, hello_msg
	call printf
	mov rax, 0
	pop rbp
	ret
