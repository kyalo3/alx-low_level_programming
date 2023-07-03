section .data
    hello db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    ; Set up stack frame
    push rbp
    mov rbp, rsp
    
    ; Print the string using printf
    mov rdi, hello
    xor eax, eax    ; Clear EAX register
    call printf
    
    ; Clean up and exit
    mov eax, 0      ; Exit status 0
    pop rbp
    ret

