global		main
extern		printf
main:
	mov		edi , format
	mov		eax, 0
	call	printf

format db 'Hello, Holberton', 0xa, 0
