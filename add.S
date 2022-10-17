	.text
	.globl	add
#if !defined( __APPLE__ )
	.type	add, @function
#endif

add:

#if defined( __APPLE__ )
    sub     sp, sp, #16
    str     w0, [sp, 12]
    str     w1, [sp, 8]
    ldr     w1, [sp, 12]
    ldr     w0, [sp, 8]
    add     w0, w1, w0
	add     sp, sp, 16
    ret

#elif defined(__x86_64__)
	pushq	%rbp
	movq    %rsp, %rbp

	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %edx
	movl	-8(%rbp), %eax
    addl	%edx, %eax

	popq	%rbp
    ret
#endif
