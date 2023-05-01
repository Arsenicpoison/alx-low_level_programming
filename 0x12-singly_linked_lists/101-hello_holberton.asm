extern printf

section .text
global main

main:
push rbp

mov rdi, fm
mov rax, 0
mov rsi, msg
call printf

pop rbp

mov rax, 0
ret

section .data
msg: db "Hello, Holberton", 0
fm: db "%s", 10, 0
