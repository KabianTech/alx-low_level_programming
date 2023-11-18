global  main
	extern printf
section .data
	format db 'Hello, Holberton', 0xA, 0
section .text
main:
	mov edi, format
	mov eax, 0
	call printf
	mov eax, 0
	ret
