	.file	"q4.c"
	.text
	.section	.rodata
.LC0:
	.string	"Enter the numbers a,b:"
.LC1:
	.string	"%d,%d"
	.align 8
.LC2:
	.string	"Enter the choice of operation:"
.LC3:
	.string	"%c"
.LC4:
	.string	"Choice is sum and sum is %d"
	.align 8
.LC5:
	.string	"Choice is difference and difference is %d"
	.align 8
.LC6:
	.string	"Choice is multiplication and product is %d"
.LC7:
	.string	"Invalid choice"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-12(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-17(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movzbl	-17(%rbp), %eax
	movsbl	%al, %eax
	cmpl	$43, %eax
	je	.L3
	cmpl	$45, %eax
	je	.L4
	cmpl	$42, %eax
	je	.L5
	jmp	.L8
.L3:
	movl	-16(%rbp), %edx
	movl	-12(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, %esi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L6
.L4:
	movl	-16(%rbp), %edx
	movl	-12(%rbp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, %esi
	leaq	.LC5(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L6
.L5:
	movl	-16(%rbp), %edx
	movl	-12(%rbp), %eax
	imull	%edx, %eax
	movl	%eax, %esi
	leaq	.LC6(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	jmp	.L6
.L8:
	leaq	.LC7(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L6:
	nop
	movq	-8(%rbp), %rax
	xorq	%fs:40, %rax
	je	.L7
	call	__stack_chk_fail@PLT
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.5.0-3ubuntu1~18.04) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
