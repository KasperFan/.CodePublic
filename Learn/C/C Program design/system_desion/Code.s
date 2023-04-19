	.text
	.globl _n
	.zerofill __DATA,__common,_n,4,2
	.globl _flag
	.zerofill __DATA,__common,_flag,4,2
	.globl _choise
	.zerofill __DATA,__common,_choise,1,0
	.cstring
	.align 3
lC0:
	.ascii "         \350\257\267\350\276\223\345\205\245\351\200\211\346\211\213\344\272\272\346\225\260:\0"
lC1:
	.ascii "%d\0"
lC2:
	.ascii "clear\0"
	.text
	.globl _main
_main:
LFB4:
	pushq	%rbp
LCFI0:
	movq	%rsp, %rbp
LCFI1:
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	leaq	lC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	leaq	_n(%rip), %rax
	movq	%rax, %rsi
	leaq	lC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_scanf
	movl	_n(%rip), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	%rax, %rdi
	call	_malloc
	movq	%rax, -8(%rbp)
L2:
	leaq	lC2(%rip), %rax
	movq	%rax, %rdi
	call	_system
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_menu
	movl	$10, %edi
	call	_putchar
	movzbl	_choise(%rip), %eax
	cmpb	$55, %al
	jne	L2
	movl	$0, %eax
	leave
LCFI2:
	ret
LFE4:
	.cstring
	.align 3
lC3:
	.ascii "         ******************************************\0"
	.align 3
lC4:
	.ascii "         *                                        *\0"
	.align 3
lC5:
	.ascii "         *         \346\254\242\350\277\216\344\275\277\347\224\250\346\255\214\346\211\213\346\257\224\350\265\233\347\263\273\347\273\237           *\0"
	.align 3
lC6:
	.ascii "         *           1\357\274\232\350\276\223\345\205\245\351\200\211\346\211\213\346\225\260\346\215\256              *\0"
	.align 3
lC7:
	.ascii "         *           2\357\274\232\350\257\204\345\247\224\346\211\223\345\210\206                  *\0"
	.align 3
lC8:
	.ascii "         *           3\357\274\232\351\200\211\346\211\213\346\210\220\347\273\251\346\216\222\345\272\217              *\0"
	.align 3
lC9:
	.ascii "         *           4\357\274\232\351\200\211\346\211\213\346\225\260\346\215\256\346\237\245\350\257\242              *\0"
	.align 3
lC10:
	.ascii "         *           5\357\274\232\350\277\275\345\212\240\351\200\211\346\211\213\346\225\260\346\215\256              *\0"
	.align 3
lC11:
	.ascii "         *           6\357\274\232\345\206\231\345\205\245\346\225\260\346\215\256\346\226\207\344\273\266              *\0"
	.align 3
lC12:
	.ascii "         *           7\357\274\232\351\200\200\345\207\272\347\263\273\347\273\237                  *\0"
	.align 3
lC13:
	.ascii "---------------------------------------------------------------------\0"
	.align 3
lC14:
	.ascii "         \350\257\267\346\214\211\351\224\256\351\200\211\346\213\251\344\275\240\347\232\204\346\223\215\344\275\234:\0"
	.align 3
lC15:
	.ascii "\351\200\211\346\211\213\346\225\260\346\215\256\345\267\262\345\210\233\345\273\272\357\274\214\350\257\267\344\275\277\347\224\250\350\277\275\345\212\240\351\200\211\346\211\213\346\225\260\346\215\256\345\212\237\350\203\275\344\273\245\346\267\273\345\212\240\351\200\211\346\211\213\346\225\260\346\215\256\0"
lC16:
	.ascii "\346\214\211\345\233\236\350\275\246\351\224\256\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225\0"
	.align 3
lC17:
	.ascii "         \346\202\250\346\230\257\345\220\246\350\246\201\351\200\200\345\207\272\347\263\273\347\273\237?(Y/N):\0"
	.text
	.globl _menu
_menu:
LFB5:
	pushq	%rbp
LCFI3:
	movq	%rsp, %rbp
LCFI4:
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	lC3(%rip), %rax
	movq	%rax, %rdi
	call	_puts
	leaq	lC4(%rip), %rax
	movq	%rax, %rdi
	call	_puts
	leaq	lC5(%rip), %rax
	movq	%rax, %rdi
	call	_puts
	leaq	lC4(%rip), %rax
	movq	%rax, %rdi
	call	_puts
	leaq	lC6(%rip), %rax
	movq	%rax, %rdi
	call	_puts
	leaq	lC7(%rip), %rax
	movq	%rax, %rdi
	call	_puts
	leaq	lC8(%rip), %rax
	movq	%rax, %rdi
	call	_puts
	leaq	lC9(%rip), %rax
	movq	%rax, %rdi
	call	_puts
	leaq	lC10(%rip), %rax
	movq	%rax, %rdi
	call	_puts
	leaq	lC11(%rip), %rax
	movq	%rax, %rdi
	call	_puts
	leaq	lC12(%rip), %rax
	movq	%rax, %rdi
	call	_puts
	leaq	lC4(%rip), %rax
	movq	%rax, %rdi
	call	_puts
	leaq	lC3(%rip), %rax
	movq	%rax, %rdi
	call	_puts
	movl	$10, %edi
	call	_putchar
	leaq	lC13(%rip), %rax
	movq	%rax, %rdi
	call	_puts
	leaq	lC14(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	call	_getchar
	movb	%al, _choise(%rip)
	movzbl	_choise(%rip), %eax
	movsbl	%al, %eax
	subl	$49, %eax
	cmpl	$6, %eax
	ja	L17
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	L7(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	L7(%rip), %rdx
	addq	%rdx, %rax
	jmp	*%rax
	.p2align 2
L7:
	.long	L13-L7
	.long	L12-L7
	.long	L11-L7
	.long	L10-L7
	.long	L9-L7
	.long	L8-L7
	.long	L6-L7
L13:
	leaq	lC2(%rip), %rax
	movq	%rax, %rdi
	call	_system
	movl	_flag(%rip), %eax
	testl	%eax, %eax
	je	L14
	leaq	lC15(%rip), %rax
	movq	%rax, %rdi
	call	_puts
	leaq	lC16(%rip), %rax
	movq	%rax, %rdi
	call	_puts
	call	_getchar
	jmp	L15
L14:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_creatList
	movl	$10, %edi
	call	_putchar
L15:
	call	_getchar
	leaq	lC2(%rip), %rax
	movq	%rax, %rdi
	call	_system
	jmp	L5
L12:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_inputScore
	movl	$10, %edi
	call	_putchar
	leaq	lC2(%rip), %rax
	movq	%rax, %rdi
	call	_system
	jmp	L5
L11:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_scoreSort
	call	_getchar
	movl	$10, %edi
	call	_putchar
	leaq	lC2(%rip), %rax
	movq	%rax, %rdi
	call	_system
	jmp	L5
L10:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_search
	call	_getchar
	movl	$10, %edi
	call	_putchar
	leaq	lC2(%rip), %rax
	movq	%rax, %rdi
	call	_system
	jmp	L5
L9:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_attend
	call	_getchar
	movl	$10, %edi
	call	_putchar
	leaq	lC2(%rip), %rax
	movq	%rax, %rdi
	call	_system
	jmp	L5
L8:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_writeFile
	call	_getchar
	movl	$10, %edi
	call	_putchar
	leaq	lC2(%rip), %rax
	movq	%rax, %rdi
	call	_system
	jmp	L5
L6:
	leaq	lC17(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	call	_getchar
	call	_getchar
	movb	%al, _choise(%rip)
	movzbl	_choise(%rip), %eax
	cmpb	$121, %al
	je	L16
	movzbl	_choise(%rip), %eax
	cmpb	$89, %al
	jne	L17
L16:
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_free
	movq	$0, -8(%rbp)
	movl	$0, %edi
	call	_exit
L5:
L17:
	nop
	leave
LCFI5:
	ret
LFE5:
	.cstring
	.align 3
lC18:
	.ascii "         \350\257\267\350\276\223\345\205\245\351\200\211\346\211\213%d\347\232\204\347\274\226\345\217\267:\0"
	.align 3
lC19:
	.ascii "         \350\257\267\350\276\223\345\205\245\351\200\211\346\211\213%d\347\232\204\345\247\223\345\220\215:\0"
lC20:
	.ascii "%s\0"
	.align 3
lC21:
	.ascii "\12         \351\200\211\346\211\213\344\277\241\346\201\257\345\267\262\350\276\223\345\205\245\345\256\214\346\210\220,\346\214\211\345\233\236\350\275\246\351\224\256\347\241\256\350\256\244\345\271\266\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225\0"
	.text
	.globl _creatList
_creatList:
LFB6:
	pushq	%rbp
LCFI6:
	movq	%rsp, %rbp
LCFI7:
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	leaq	lC2(%rip), %rax
	movq	%rax, %rdi
	call	_system
	movl	$0, -4(%rbp)
	jmp	L19
L20:
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %esi
	leaq	lC18(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rdx
	addq	%rdx, %rax
	movq	%rax, %rsi
	leaq	lC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_scanf
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %esi
	leaq	lC19(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rdx
	addq	%rdx, %rax
	addq	$4, %rax
	movq	%rax, %rsi
	leaq	lC20(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_scanf
	addl	$1, -4(%rbp)
L19:
	movl	_n(%rip), %eax
	cmpl	%eax, -4(%rbp)
	jl	L20
	movl	$1, _flag(%rip)
	movq	___stdinp@GOTPCREL(%rip), %rax
	movq	(%rax), %rdx
	leaq	-6(%rbp), %rax
	movl	$2, %esi
	movq	%rax, %rdi
	call	_fgets
	leaq	lC21(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	nop
	leave
LCFI8:
	ret
LFE6:
	.cstring
	.align 3
lC23:
	.ascii "\12         \347\216\260\345\234\250\350\276\223\345\205\245\347\254\254%d\344\275\215\351\200\211\346\211\213\347\232\204\346\211\223\345\210\206\12\12\0"
	.align 3
lC24:
	.ascii "         \350\257\267\350\276\223\345\205\245\347\254\254%d\344\275\215\350\257\204\345\247\224\346\211\223\345\210\206\357\274\232\0"
	.align 3
lC26:
	.ascii "\12         \351\200\211\346\211\213\346\210\220\347\273\251\345\267\262\350\276\223\345\205\245\345\256\214\346\210\220\357\274\214\350\257\267\346\214\211\345\233\236\350\275\246\351\224\256\347\241\256\350\256\244\345\271\266\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225\0"
	.text
	.globl _inputScore
_inputScore:
LFB7:
	pushq	%rbp
LCFI9:
	movq	%rsp, %rbp
LCFI10:
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	L22
L25:
	leaq	lC2(%rip), %rax
	movq	%rax, %rdi
	call	_system
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rdx
	addq	%rdx, %rax
	pxor	%xmm0, %xmm0
	movsd	%xmm0, 80(%rax)
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rdx
	addq	%rdx, %rax
	movl	$0, 68(%rax)
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	imulq	$88, %rdx, %rdx
	movq	-24(%rbp), %rcx
	addq	%rcx, %rdx
	movl	68(%rax), %eax
	movl	%eax, 64(%rdx)
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %esi
	leaq	lC23(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	movl	$0, -8(%rbp)
	jmp	L23
L24:
	movl	-8(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %esi
	leaq	lC24(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rdx
	addq	%rax, %rdx
	movl	-8(%rbp), %eax
	cltq
	addq	$4, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	$8, %rax
	movq	%rax, %rsi
	leaq	lC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_scanf
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rdx
	addq	%rdx, %rax
	movl	64(%rax), %ecx
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rdx
	addq	%rdx, %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	addq	$4, %rdx
	movl	8(%rax,%rdx,4), %edx
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rsi
	addq	%rsi, %rax
	addl	%ecx, %edx
	movl	%edx, 64(%rax)
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rdx
	addq	%rdx, %rax
	movl	68(%rax), %edx
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rcx
	addq	%rcx, %rax
	movl	-8(%rbp), %ecx
	movslq	%ecx, %rcx
	addq	$4, %rcx
	movl	8(%rax,%rcx,4), %eax
	movl	-4(%rbp), %ecx
	movslq	%ecx, %rcx
	imulq	$88, %rcx, %rcx
	movq	-24(%rbp), %rsi
	addq	%rsi, %rcx
	cmpl	%eax, %edx
	cmovge	%edx, %eax
	movl	%eax, 68(%rcx)
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rdx
	addq	%rdx, %rax
	movl	72(%rax), %edx
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rcx
	addq	%rcx, %rax
	movl	-8(%rbp), %ecx
	movslq	%ecx, %rcx
	addq	$4, %rcx
	movl	8(%rax,%rcx,4), %eax
	movl	-4(%rbp), %ecx
	movslq	%ecx, %rcx
	imulq	$88, %rcx, %rcx
	movq	-24(%rbp), %rsi
	addq	%rsi, %rcx
	cmpl	%eax, %edx
	cmovle	%edx, %eax
	movl	%eax, 72(%rcx)
	addl	$1, -8(%rbp)
L23:
	cmpl	$9, -8(%rbp)
	jle	L24
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rdx
	addq	%rdx, %rax
	movl	64(%rax), %edx
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rcx
	addq	%rcx, %rax
	movl	68(%rax), %eax
	subl	%eax, %edx
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rcx
	addq	%rcx, %rax
	movl	72(%rax), %eax
	subl	%eax, %edx
	pxor	%xmm0, %xmm0
	cvtsi2sdl	%edx, %xmm0
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rdx
	addq	%rdx, %rax
	movsd	lC25(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, 80(%rax)
	addl	$1, -4(%rbp)
L22:
	movl	_n(%rip), %eax
	cmpl	%eax, -4(%rbp)
	jl	L25
	leaq	lC26(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	call	_getchar
	nop
	leave
LCFI11:
	ret
LFE7:
	.cstring
lC27:
	.ascii "\345\271\263\345\235\207\346\210\220\347\273\251\0"
lC28:
	.ascii "\346\200\273\346\210\220\347\273\251\0"
lC29:
	.ascii "\345\247\223\345\220\215\0"
lC30:
	.ascii "\347\274\226\345\217\267\0"
	.align 3
lC31:
	.ascii "         %-10s %-20s %-10s %-10s\12\0"
	.align 3
lC32:
	.ascii "         %-8d %-18s %-7d %-8.2lf\12\0"
	.align 3
lC33:
	.ascii "\12         \351\200\211\346\211\213\345\271\263\345\235\207\346\210\220\347\273\251\345\267\262\346\216\222\345\272\217\345\256\214\346\210\220\357\274\214\350\257\267\346\214\211\345\233\236\350\275\246\351\224\256\347\241\256\350\256\244\345\271\266\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225\0"
	.text
	.globl _scoreSort
_scoreSort:
LFB8:
	pushq	%rbp
LCFI12:
	movq	%rsp, %rbp
LCFI13:
	addq	$-128, %rsp
	movq	%rdi, -120(%rbp)
	movl	$1, -4(%rbp)
	jmp	L27
L32:
	movl	$0, -8(%rbp)
	jmp	L28
L31:
	movl	-8(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-120(%rbp), %rdx
	addq	%rdx, %rax
	movsd	80(%rax), %xmm1
	movl	-8(%rbp), %eax
	cltq
	addq	$1, %rax
	imulq	$88, %rax, %rax
	movq	-120(%rbp), %rdx
	addq	%rdx, %rax
	movsd	80(%rax), %xmm0
	comisd	%xmm1, %xmm0
	jbe	L29
	movl	-8(%rbp), %eax
	cltq
	addq	$1, %rax
	imulq	$88, %rax, %rax
	movq	-120(%rbp), %rdx
	addq	%rdx, %rax
	movq	(%rax), %rdx
	movq	%rdx, -112(%rbp)
	movq	8(%rax), %rdx
	movq	%rdx, -104(%rbp)
	movq	16(%rax), %rdx
	movq	%rdx, -96(%rbp)
	movq	24(%rax), %rdx
	movq	%rdx, -88(%rbp)
	movq	32(%rax), %rdx
	movq	%rdx, -80(%rbp)
	movq	40(%rax), %rdx
	movq	%rdx, -72(%rbp)
	movq	48(%rax), %rdx
	movq	%rdx, -64(%rbp)
	movq	56(%rax), %rdx
	movq	%rdx, -56(%rbp)
	movq	64(%rax), %rdx
	movq	%rdx, -48(%rbp)
	movq	72(%rax), %rdx
	movq	%rdx, -40(%rbp)
	movq	80(%rax), %rax
	movq	%rax, -32(%rbp)
	movl	-8(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-120(%rbp), %rdx
	addq	%rax, %rdx
	movl	-8(%rbp), %eax
	cltq
	addq	$1, %rax
	imulq	$88, %rax, %rax
	movq	-120(%rbp), %rcx
	addq	%rcx, %rax
	movq	(%rdx), %rcx
	movq	%rcx, (%rax)
	movq	8(%rdx), %rcx
	movq	%rcx, 8(%rax)
	movq	16(%rdx), %rcx
	movq	%rcx, 16(%rax)
	movq	24(%rdx), %rcx
	movq	%rcx, 24(%rax)
	movq	32(%rdx), %rcx
	movq	%rcx, 32(%rax)
	movq	40(%rdx), %rcx
	movq	%rcx, 40(%rax)
	movq	48(%rdx), %rcx
	movq	%rcx, 48(%rax)
	movq	56(%rdx), %rcx
	movq	%rcx, 56(%rax)
	movq	64(%rdx), %rcx
	movq	%rcx, 64(%rax)
	movq	72(%rdx), %rcx
	movq	%rcx, 72(%rax)
	movq	80(%rdx), %rdx
	movq	%rdx, 80(%rax)
	movl	-8(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-120(%rbp), %rdx
	addq	%rdx, %rax
	movq	-112(%rbp), %rdx
	movq	%rdx, (%rax)
	movq	-104(%rbp), %rdx
	movq	%rdx, 8(%rax)
	movq	-96(%rbp), %rdx
	movq	%rdx, 16(%rax)
	movq	-88(%rbp), %rdx
	movq	%rdx, 24(%rax)
	movq	-80(%rbp), %rdx
	movq	%rdx, 32(%rax)
	movq	-72(%rbp), %rdx
	movq	%rdx, 40(%rax)
	movq	-64(%rbp), %rdx
	movq	%rdx, 48(%rax)
	movq	-56(%rbp), %rdx
	movq	%rdx, 56(%rax)
	movq	-48(%rbp), %rdx
	movq	%rdx, 64(%rax)
	movq	-40(%rbp), %rdx
	movq	%rdx, 72(%rax)
	movq	-32(%rbp), %rdx
	movq	%rdx, 80(%rax)
L29:
	addl	$1, -8(%rbp)
L28:
	movl	_n(%rip), %eax
	subl	-4(%rbp), %eax
	cmpl	%eax, -8(%rbp)
	jl	L31
	addl	$1, -4(%rbp)
L27:
	movl	_n(%rip), %eax
	cmpl	%eax, -4(%rbp)
	jl	L32
	leaq	lC27(%rip), %r8
	leaq	lC28(%rip), %rax
	movq	%rax, %rcx
	leaq	lC29(%rip), %rax
	movq	%rax, %rdx
	leaq	lC30(%rip), %rax
	movq	%rax, %rsi
	leaq	lC31(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	movl	$0, -12(%rbp)
	jmp	L33
L34:
	movl	-12(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-120(%rbp), %rdx
	addq	%rdx, %rax
	movq	80(%rax), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	imulq	$88, %rdx, %rdx
	movq	-120(%rbp), %rcx
	addq	%rcx, %rdx
	movl	64(%rdx), %ecx
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	imulq	$88, %rdx, %rdx
	movq	-120(%rbp), %rsi
	addq	%rsi, %rdx
	addq	$4, %rdx
	movl	-12(%rbp), %esi
	movslq	%esi, %rsi
	imulq	$88, %rsi, %rsi
	movq	-120(%rbp), %rdi
	addq	%rdi, %rsi
	movl	(%rsi), %esi
	movq	%rax, %xmm0
	leaq	lC32(%rip), %rax
	movq	%rax, %rdi
	movl	$1, %eax
	call	_printf
	addl	$1, -12(%rbp)
L33:
	movl	_n(%rip), %eax
	cmpl	%eax, -12(%rbp)
	jl	L34
	leaq	lC33(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	call	_getchar
	nop
	leave
LCFI14:
	ret
LFE8:
	.cstring
lC34:
	.ascii "         1:\351\200\211\346\211\213\347\274\226\345\217\267\0"
lC35:
	.ascii "         2:\351\200\211\346\211\213\345\247\223\345\220\215\0"
lC36:
	.ascii "         3:\351\200\211\346\211\213\346\200\273\346\210\220\347\273\251\0"
lC37:
	.ascii "         4:\351\200\211\346\211\213\345\271\263\345\235\207\346\210\220\347\273\251\0"
	.align 3
lC38:
	.ascii "\12         \350\257\267\346\214\211\351\224\256\345\233\236\350\275\246\351\200\211\346\213\251\346\237\245\350\257\242\346\226\271\345\274\217\357\274\232\0"
	.align 3
lC39:
	.ascii "         \350\257\267\350\276\223\345\205\245\346\237\245\350\257\242\347\232\204\351\200\211\346\211\213\347\274\226\345\217\267\357\274\232\0"
	.align 3
lC40:
	.ascii "         \344\270\215\345\255\230\345\234\250\345\257\271\345\272\224\351\200\211\346\211\213\357\274\201\0"
	.align 3
lC41:
	.ascii "         \346\237\245\350\257\242\345\256\214\346\257\225\357\274\214\345\205\261\346\234\211%d\345\220\215\347\254\246\345\220\210\346\235\241\344\273\266\347\232\204\351\200\211\346\211\213,\350\257\267\346\214\211\345\233\236\350\275\246\351\224\256\347\241\256\350\256\244\345\271\266\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225\0"
	.align 3
lC42:
	.ascii "         \350\257\267\350\276\223\345\205\245\346\237\245\350\257\242\347\232\204\351\200\211\346\211\213\345\247\223\345\220\215\357\274\232\0"
	.align 3
lC43:
	.ascii "         \350\257\267\350\276\223\345\205\245\346\237\245\350\257\242\347\232\204\351\200\211\346\211\213\346\200\273\346\210\220\347\273\251\357\274\232\0"
	.align 3
lC44:
	.ascii "         \350\257\267\350\276\223\345\205\245\346\237\245\350\257\242\347\232\204\351\200\211\346\211\213\345\271\263\345\235\207\346\210\220\347\273\251\357\274\232\0"
lC45:
	.ascii "%lf\0"
	.text
	.globl _search
_search:
LFB9:
	pushq	%rbp
LCFI15:
	movq	%rsp, %rbp
LCFI16:
	subq	$80, %rsp
	movq	%rdi, -72(%rbp)
	leaq	lC2(%rip), %rax
	movq	%rax, %rdi
	call	_system
	movl	$0, -4(%rbp)
	leaq	lC34(%rip), %rax
	movq	%rax, %rdi
	call	_puts
	leaq	lC35(%rip), %rax
	movq	%rax, %rdi
	call	_puts
	leaq	lC36(%rip), %rax
	movq	%rax, %rdi
	call	_puts
	leaq	lC37(%rip), %rax
	movq	%rax, %rdi
	call	_puts
	leaq	lC38(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	call	_getchar
	call	_getchar
	movb	%al, -21(%rbp)
	movsbl	-21(%rbp), %eax
	cmpl	$52, %eax
	je	L37
	cmpl	$52, %eax
	jg	L63
	cmpl	$51, %eax
	je	L39
	cmpl	$51, %eax
	jg	L63
	cmpl	$49, %eax
	je	L40
	cmpl	$50, %eax
	je	L41
	jmp	L63
L40:
	leaq	lC39(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	leaq	-28(%rbp), %rax
	movq	%rax, %rsi
	leaq	lC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_scanf
	leaq	lC27(%rip), %r8
	leaq	lC28(%rip), %rax
	movq	%rax, %rcx
	leaq	lC29(%rip), %rax
	movq	%rax, %rdx
	leaq	lC30(%rip), %rax
	movq	%rax, %rsi
	leaq	lC31(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	movl	$0, -8(%rbp)
	jmp	L42
L45:
	movl	-8(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-72(%rbp), %rdx
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-28(%rbp), %eax
	cmpl	%eax, %edx
	jne	L43
	movl	-8(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-72(%rbp), %rdx
	addq	%rdx, %rax
	movq	80(%rax), %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	imulq	$88, %rdx, %rdx
	movq	-72(%rbp), %rcx
	addq	%rcx, %rdx
	movl	64(%rdx), %ecx
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	imulq	$88, %rdx, %rdx
	movq	-72(%rbp), %rsi
	addq	%rsi, %rdx
	addq	$4, %rdx
	movl	-8(%rbp), %esi
	movslq	%esi, %rsi
	imulq	$88, %rsi, %rsi
	movq	-72(%rbp), %rdi
	addq	%rdi, %rsi
	movl	(%rsi), %esi
	movq	%rax, %xmm0
	leaq	lC32(%rip), %rax
	movq	%rax, %rdi
	movl	$1, %eax
	call	_printf
	addl	$1, -4(%rbp)
	jmp	L44
L43:
	movl	_n(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -8(%rbp)
	jne	L44
	cmpl	$0, -4(%rbp)
	jne	L44
	leaq	lC40(%rip), %rax
	movq	%rax, %rdi
	call	_puts
L44:
	addl	$1, -8(%rbp)
L42:
	movl	_n(%rip), %eax
	cmpl	%eax, -8(%rbp)
	jl	L45
	cmpl	$0, -4(%rbp)
	je	L64
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	lC41(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	jmp	L64
L41:
	leaq	lC42(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	leaq	-48(%rbp), %rax
	movq	%rax, %rsi
	leaq	lC20(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_scanf
	leaq	lC27(%rip), %r8
	leaq	lC28(%rip), %rax
	movq	%rax, %rcx
	leaq	lC29(%rip), %rax
	movq	%rax, %rdx
	leaq	lC30(%rip), %rax
	movq	%rax, %rsi
	leaq	lC31(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	movl	$0, -12(%rbp)
	jmp	L48
L51:
	movl	-12(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-72(%rbp), %rdx
	addq	%rdx, %rax
	leaq	4(%rax), %rdx
	leaq	-48(%rbp), %rax
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_strcmp
	testl	%eax, %eax
	jne	L49
	movl	-12(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-72(%rbp), %rdx
	addq	%rdx, %rax
	movq	80(%rax), %rax
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	imulq	$88, %rdx, %rdx
	movq	-72(%rbp), %rcx
	addq	%rcx, %rdx
	movl	64(%rdx), %ecx
	movl	-12(%rbp), %edx
	movslq	%edx, %rdx
	imulq	$88, %rdx, %rdx
	movq	-72(%rbp), %rsi
	addq	%rsi, %rdx
	addq	$4, %rdx
	movl	-12(%rbp), %esi
	movslq	%esi, %rsi
	imulq	$88, %rsi, %rsi
	movq	-72(%rbp), %rdi
	addq	%rdi, %rsi
	movl	(%rsi), %esi
	movq	%rax, %xmm0
	leaq	lC32(%rip), %rax
	movq	%rax, %rdi
	movl	$1, %eax
	call	_printf
	addl	$1, -4(%rbp)
	jmp	L50
L49:
	movl	_n(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -12(%rbp)
	jne	L50
	cmpl	$0, -4(%rbp)
	jne	L50
	leaq	lC40(%rip), %rax
	movq	%rax, %rdi
	call	_puts
L50:
	addl	$1, -12(%rbp)
L48:
	movl	_n(%rip), %eax
	cmpl	%eax, -12(%rbp)
	jl	L51
	cmpl	$0, -4(%rbp)
	je	L65
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	lC41(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	jmp	L65
L39:
	leaq	lC43(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	leaq	-52(%rbp), %rax
	movq	%rax, %rsi
	leaq	lC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_scanf
	leaq	lC27(%rip), %r8
	leaq	lC28(%rip), %rax
	movq	%rax, %rcx
	leaq	lC29(%rip), %rax
	movq	%rax, %rdx
	leaq	lC30(%rip), %rax
	movq	%rax, %rsi
	leaq	lC31(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	movl	$0, -16(%rbp)
	jmp	L53
L56:
	movl	-16(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-72(%rbp), %rdx
	addq	%rdx, %rax
	movl	64(%rax), %edx
	movl	-52(%rbp), %eax
	cmpl	%eax, %edx
	jne	L54
	movl	-16(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-72(%rbp), %rdx
	addq	%rdx, %rax
	movq	80(%rax), %rax
	movl	-16(%rbp), %edx
	movslq	%edx, %rdx
	imulq	$88, %rdx, %rdx
	movq	-72(%rbp), %rcx
	addq	%rcx, %rdx
	movl	64(%rdx), %ecx
	movl	-16(%rbp), %edx
	movslq	%edx, %rdx
	imulq	$88, %rdx, %rdx
	movq	-72(%rbp), %rsi
	addq	%rsi, %rdx
	addq	$4, %rdx
	movl	-16(%rbp), %esi
	movslq	%esi, %rsi
	imulq	$88, %rsi, %rsi
	movq	-72(%rbp), %rdi
	addq	%rdi, %rsi
	movl	(%rsi), %esi
	movq	%rax, %xmm0
	leaq	lC32(%rip), %rax
	movq	%rax, %rdi
	movl	$1, %eax
	call	_printf
	addl	$1, -4(%rbp)
	jmp	L55
L54:
	movl	_n(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -16(%rbp)
	jne	L55
	cmpl	$0, -4(%rbp)
	jne	L55
	leaq	lC40(%rip), %rax
	movq	%rax, %rdi
	call	_puts
L55:
	addl	$1, -16(%rbp)
L53:
	movl	_n(%rip), %eax
	cmpl	%eax, -16(%rbp)
	jl	L56
	cmpl	$0, -4(%rbp)
	je	L66
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	lC41(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	jmp	L66
L37:
	leaq	lC44(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	leaq	lC45(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_scanf
	leaq	lC27(%rip), %r8
	leaq	lC28(%rip), %rax
	movq	%rax, %rcx
	leaq	lC29(%rip), %rax
	movq	%rax, %rdx
	leaq	lC30(%rip), %rax
	movq	%rax, %rsi
	leaq	lC31(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	movl	$0, -20(%rbp)
	jmp	L58
L61:
	movl	-20(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-72(%rbp), %rdx
	addq	%rdx, %rax
	movsd	80(%rax), %xmm0
	cvttsd2sil	%xmm0, %edx
	movsd	-64(%rbp), %xmm0
	cvttsd2sil	%xmm0, %eax
	cmpl	%eax, %edx
	jne	L59
	movl	-20(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-72(%rbp), %rdx
	addq	%rdx, %rax
	movq	80(%rax), %rax
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	imulq	$88, %rdx, %rdx
	movq	-72(%rbp), %rcx
	addq	%rcx, %rdx
	movl	64(%rdx), %ecx
	movl	-20(%rbp), %edx
	movslq	%edx, %rdx
	imulq	$88, %rdx, %rdx
	movq	-72(%rbp), %rsi
	addq	%rsi, %rdx
	addq	$4, %rdx
	movl	-20(%rbp), %esi
	movslq	%esi, %rsi
	imulq	$88, %rsi, %rsi
	movq	-72(%rbp), %rdi
	addq	%rdi, %rsi
	movl	(%rsi), %esi
	movq	%rax, %xmm0
	leaq	lC32(%rip), %rax
	movq	%rax, %rdi
	movl	$1, %eax
	call	_printf
	addl	$1, -4(%rbp)
	jmp	L60
L59:
	movl	_n(%rip), %eax
	subl	$1, %eax
	cmpl	%eax, -20(%rbp)
	jne	L60
	cmpl	$0, -4(%rbp)
	jne	L60
	leaq	lC40(%rip), %rax
	movq	%rax, %rdi
	call	_puts
L60:
	addl	$1, -20(%rbp)
L58:
	movl	_n(%rip), %eax
	cmpl	%eax, -20(%rbp)
	jl	L61
	cmpl	$0, -4(%rbp)
	je	L67
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	lC41(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	jmp	L67
L63:
	nop
	jmp	L47
L64:
	nop
	jmp	L47
L65:
	nop
	jmp	L47
L66:
	nop
	jmp	L47
L67:
	nop
L47:
	call	_getchar
	nop
	leave
LCFI17:
	ret
LFE9:
	.cstring
	.align 3
lC46:
	.ascii "         \350\257\267\350\276\223\345\205\245\350\277\275\345\212\240\347\232\204\351\200\211\346\211\213\346\225\260\351\207\217:\0"
	.align 3
lC47:
	.ascii "         \350\257\267\350\276\223\345\205\245\351\200\211\346\211\213%d\347\232\204\347\274\226\345\217\267\345\222\214\345\247\223\345\220\215\357\274\214\347\224\250\347\251\272\346\240\274\351\232\224\345\274\200\357\274\232\0"
lC48:
	.ascii "%d %s\0"
	.align 3
lC49:
	.ascii "         \347\216\260\345\234\250\350\276\223\345\205\245\347\254\254%d\344\275\215\351\200\211\346\211\213\347\232\204\346\211\223\345\210\206\12\0"
	.align 3
lC50:
	.ascii "\12         \351\200\211\346\211\213\346\225\260\346\215\256\345\267\262\350\277\275\345\212\240\345\256\214\346\257\225\357\274\214\350\257\267\346\214\211\345\233\236\350\275\246\351\224\256\347\241\256\350\256\244\345\271\266\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225\0"
	.text
	.globl _attend
_attend:
LFB10:
	pushq	%rbp
LCFI18:
	movq	%rsp, %rbp
LCFI19:
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	leaq	lC2(%rip), %rax
	movq	%rax, %rdi
	call	_system
	leaq	lC46(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	leaq	-12(%rbp), %rax
	movq	%rax, %rsi
	leaq	lC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_scanf
	movl	_n(%rip), %edx
	movl	-12(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, _n(%rip)
	movl	_n(%rip), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rdx
	movq	%rax, %rsi
	movq	%rdx, %rdi
	call	_realloc
	movq	%rax, -24(%rbp)
	movl	_n(%rip), %eax
	movl	-12(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -4(%rbp)
	jmp	L69
L72:
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %esi
	leaq	lC47(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rdx
	addq	%rdx, %rax
	addq	$4, %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	imulq	$88, %rdx, %rdx
	movq	-24(%rbp), %rcx
	addq	%rcx, %rdx
	movq	%rdx, %rcx
	movq	%rax, %rdx
	movq	%rcx, %rsi
	leaq	lC48(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_scanf
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %esi
	leaq	lC49(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	movl	$0, -8(%rbp)
	jmp	L70
L71:
	movl	-8(%rbp), %eax
	addl	$1, %eax
	movl	%eax, %esi
	leaq	lC24(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rdx
	addq	%rax, %rdx
	movl	-8(%rbp), %eax
	cltq
	addq	$4, %rax
	salq	$2, %rax
	addq	%rdx, %rax
	addq	$8, %rax
	movq	%rax, %rsi
	leaq	lC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_scanf
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rdx
	addq	%rdx, %rax
	movl	64(%rax), %ecx
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rdx
	addq	%rdx, %rax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	addq	$4, %rdx
	movl	8(%rax,%rdx,4), %edx
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rsi
	addq	%rsi, %rax
	addl	%ecx, %edx
	movl	%edx, 64(%rax)
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rdx
	addq	%rdx, %rax
	movl	68(%rax), %edx
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rcx
	addq	%rcx, %rax
	movl	-8(%rbp), %ecx
	movslq	%ecx, %rcx
	addq	$4, %rcx
	movl	8(%rax,%rcx,4), %eax
	movl	-4(%rbp), %ecx
	movslq	%ecx, %rcx
	imulq	$88, %rcx, %rcx
	movq	-24(%rbp), %rsi
	addq	%rsi, %rcx
	cmpl	%eax, %edx
	cmovge	%edx, %eax
	movl	%eax, 68(%rcx)
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rdx
	addq	%rdx, %rax
	movl	72(%rax), %edx
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rcx
	addq	%rcx, %rax
	movl	-8(%rbp), %ecx
	movslq	%ecx, %rcx
	addq	$4, %rcx
	movl	8(%rax,%rcx,4), %eax
	movl	-4(%rbp), %ecx
	movslq	%ecx, %rcx
	imulq	$88, %rcx, %rcx
	movq	-24(%rbp), %rsi
	addq	%rsi, %rcx
	cmpl	%eax, %edx
	cmovle	%edx, %eax
	movl	%eax, 72(%rcx)
	addl	$1, -8(%rbp)
L70:
	cmpl	$9, -8(%rbp)
	jle	L71
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rdx
	addq	%rdx, %rax
	movl	64(%rax), %edx
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rcx
	addq	%rcx, %rax
	movl	68(%rax), %eax
	subl	%eax, %edx
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rcx
	addq	%rcx, %rax
	movl	72(%rax), %eax
	subl	%eax, %edx
	pxor	%xmm0, %xmm0
	cvtsi2sdl	%edx, %xmm0
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-24(%rbp), %rdx
	addq	%rdx, %rax
	movsd	lC25(%rip), %xmm1
	divsd	%xmm1, %xmm0
	movsd	%xmm0, 80(%rax)
	addl	$1, -4(%rbp)
L69:
	movl	_n(%rip), %eax
	cmpl	%eax, -4(%rbp)
	jl	L72
	leaq	lC50(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	call	_getchar
	nop
	leave
LCFI20:
	ret
LFE10:
	.cstring
	.align 3
lC51:
	.ascii "         \350\257\267\350\276\223\345\205\245\346\254\262\344\277\235\345\255\230\347\232\204\346\226\207\344\273\266\345\220\215\357\274\232\0"
lC52:
	.ascii "w+\0"
	.align 3
lC53:
	.ascii "         ---------------------------------------------------------------------------------\12\0"
	.align 3
lC54:
	.ascii "\12         \351\200\211\346\211\213\346\225\260\346\215\256\346\226\207\344\273\266\345\267\262\345\206\231\345\205\245\345\256\214\346\257\225\357\274\214\350\257\267\346\214\211\345\233\236\350\275\246\351\224\256\347\241\256\350\256\244\345\271\266\350\277\224\345\233\236\344\270\273\350\217\234\345\215\225\0"
	.text
	.globl _writeFile
_writeFile:
LFB11:
	pushq	%rbp
LCFI21:
	movq	%rsp, %rbp
LCFI22:
	subq	$80, %rsp
	movq	%rdi, -72(%rbp)
	leaq	lC2(%rip), %rax
	movq	%rax, %rdi
	call	_system
	leaq	lC51(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	leaq	-64(%rbp), %rax
	movq	%rax, %rsi
	leaq	lC20(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_scanf
	leaq	-64(%rbp), %rax
	leaq	lC52(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_fopen
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	leaq	lC27(%rip), %r9
	leaq	lC28(%rip), %r8
	leaq	lC29(%rip), %rdx
	movq	%rdx, %rcx
	leaq	lC30(%rip), %rdx
	leaq	lC31(%rip), %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	_fprintf
	movq	-16(%rbp), %rax
	movq	%rax, %rcx
	movl	$91, %edx
	movl	$1, %esi
	leaq	lC53(%rip), %rax
	movq	%rax, %rdi
	call	_fwrite
	movl	$0, -4(%rbp)
	jmp	L74
L75:
	movl	-4(%rbp), %eax
	cltq
	imulq	$88, %rax, %rax
	movq	-72(%rbp), %rdx
	addq	%rdx, %rax
	movq	80(%rax), %rax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	imulq	$88, %rdx, %rdx
	movq	-72(%rbp), %rcx
	addq	%rcx, %rdx
	movl	64(%rdx), %r8d
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	imulq	$88, %rdx, %rdx
	movq	-72(%rbp), %rcx
	addq	%rcx, %rdx
	leaq	4(%rdx), %rcx
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	imulq	$88, %rdx, %rdx
	movq	-72(%rbp), %rsi
	addq	%rsi, %rdx
	movl	(%rdx), %edx
	movq	-16(%rbp), %rdi
	movq	%rax, %xmm0
	leaq	lC32(%rip), %rax
	movq	%rax, %rsi
	movl	$1, %eax
	call	_fprintf
	addl	$1, -4(%rbp)
L74:
	movl	_n(%rip), %eax
	cmpl	%eax, -4(%rbp)
	jl	L75
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_fclose
	movq	$0, -16(%rbp)
	leaq	lC54(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	_printf
	call	_getchar
	nop
	leave
LCFI23:
	ret
LFE11:
	.literal8
	.align 3
lC25:
	.long	0
	.long	1075838976
	.section __TEXT,__eh_frame,coalesced,no_toc+strip_static_syms+live_support
EH_frame1:
	.set L$set$0,LECIE1-LSCIE1
	.long L$set$0
LSCIE1:
	.long	0
	.byte	0x1
	.ascii "zR\0"
	.uleb128 0x1
	.sleb128 -8
	.byte	0x10
	.uleb128 0x1
	.byte	0x10
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.byte	0x90
	.uleb128 0x1
	.align 3
LECIE1:
LSFDE1:
	.set L$set$1,LEFDE1-LASFDE1
	.long L$set$1
LASFDE1:
	.long	LASFDE1-EH_frame1
	.quad	LFB4-.
	.set L$set$2,LFE4-LFB4
	.quad L$set$2
	.uleb128 0
	.byte	0x4
	.set L$set$3,LCFI0-LFB4
	.long L$set$3
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.set L$set$4,LCFI1-LCFI0
	.long L$set$4
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.set L$set$5,LCFI2-LCFI1
	.long L$set$5
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.align 3
LEFDE1:
LSFDE3:
	.set L$set$6,LEFDE3-LASFDE3
	.long L$set$6
LASFDE3:
	.long	LASFDE3-EH_frame1
	.quad	LFB5-.
	.set L$set$7,LFE5-LFB5
	.quad L$set$7
	.uleb128 0
	.byte	0x4
	.set L$set$8,LCFI3-LFB5
	.long L$set$8
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.set L$set$9,LCFI4-LCFI3
	.long L$set$9
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.set L$set$10,LCFI5-LCFI4
	.long L$set$10
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.align 3
LEFDE3:
LSFDE5:
	.set L$set$11,LEFDE5-LASFDE5
	.long L$set$11
LASFDE5:
	.long	LASFDE5-EH_frame1
	.quad	LFB6-.
	.set L$set$12,LFE6-LFB6
	.quad L$set$12
	.uleb128 0
	.byte	0x4
	.set L$set$13,LCFI6-LFB6
	.long L$set$13
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.set L$set$14,LCFI7-LCFI6
	.long L$set$14
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.set L$set$15,LCFI8-LCFI7
	.long L$set$15
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.align 3
LEFDE5:
LSFDE7:
	.set L$set$16,LEFDE7-LASFDE7
	.long L$set$16
LASFDE7:
	.long	LASFDE7-EH_frame1
	.quad	LFB7-.
	.set L$set$17,LFE7-LFB7
	.quad L$set$17
	.uleb128 0
	.byte	0x4
	.set L$set$18,LCFI9-LFB7
	.long L$set$18
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.set L$set$19,LCFI10-LCFI9
	.long L$set$19
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.set L$set$20,LCFI11-LCFI10
	.long L$set$20
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.align 3
LEFDE7:
LSFDE9:
	.set L$set$21,LEFDE9-LASFDE9
	.long L$set$21
LASFDE9:
	.long	LASFDE9-EH_frame1
	.quad	LFB8-.
	.set L$set$22,LFE8-LFB8
	.quad L$set$22
	.uleb128 0
	.byte	0x4
	.set L$set$23,LCFI12-LFB8
	.long L$set$23
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.set L$set$24,LCFI13-LCFI12
	.long L$set$24
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.set L$set$25,LCFI14-LCFI13
	.long L$set$25
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.align 3
LEFDE9:
LSFDE11:
	.set L$set$26,LEFDE11-LASFDE11
	.long L$set$26
LASFDE11:
	.long	LASFDE11-EH_frame1
	.quad	LFB9-.
	.set L$set$27,LFE9-LFB9
	.quad L$set$27
	.uleb128 0
	.byte	0x4
	.set L$set$28,LCFI15-LFB9
	.long L$set$28
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.set L$set$29,LCFI16-LCFI15
	.long L$set$29
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.set L$set$30,LCFI17-LCFI16
	.long L$set$30
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.align 3
LEFDE11:
LSFDE13:
	.set L$set$31,LEFDE13-LASFDE13
	.long L$set$31
LASFDE13:
	.long	LASFDE13-EH_frame1
	.quad	LFB10-.
	.set L$set$32,LFE10-LFB10
	.quad L$set$32
	.uleb128 0
	.byte	0x4
	.set L$set$33,LCFI18-LFB10
	.long L$set$33
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.set L$set$34,LCFI19-LCFI18
	.long L$set$34
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.set L$set$35,LCFI20-LCFI19
	.long L$set$35
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.align 3
LEFDE13:
LSFDE15:
	.set L$set$36,LEFDE15-LASFDE15
	.long L$set$36
LASFDE15:
	.long	LASFDE15-EH_frame1
	.quad	LFB11-.
	.set L$set$37,LFE11-LFB11
	.quad L$set$37
	.uleb128 0
	.byte	0x4
	.set L$set$38,LCFI21-LFB11
	.long L$set$38
	.byte	0xe
	.uleb128 0x10
	.byte	0x86
	.uleb128 0x2
	.byte	0x4
	.set L$set$39,LCFI22-LCFI21
	.long L$set$39
	.byte	0xd
	.uleb128 0x6
	.byte	0x4
	.set L$set$40,LCFI23-LCFI22
	.long L$set$40
	.byte	0xc
	.uleb128 0x7
	.uleb128 0x8
	.align 3
LEFDE15:
	.ident	"GCC: (Homebrew GCC 12.2.0) 12.2.0"
	.subsections_via_symbols
