 extern	printf

        section .data		
msg:	db "Hello, holberton", 0
fmt:    db "%s", 10, 0

        section .text           ; contains executable function of theprg

        global main		; decalres main as the entry point
main:				; the program label for the entry point
        push    rbp		; set up stack frame, must be alligned
	
	mov	rdi,fmt		;moves addressof the fmt string to rdi register wc is 1rst arg reg.
	mov	rsi,msg
	mov	rax,0		; clear the rax register
        call    printf		; Call printf or C function

	pop	rbp		; restore stack

	mov	rax,0		; system call number for exit, exit status0
	ret			; return
