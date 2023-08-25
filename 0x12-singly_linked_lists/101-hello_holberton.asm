section .data
	hello db 'Hello, Holberton',0xA
	len equ $ - hello

section .text
	global _start

_start:
mov rax, 1
mov rdi, 1
mov rsi, hello
mov rdx, len
syscall

mov rdi, 60
xor rdi, rdi
syscall
