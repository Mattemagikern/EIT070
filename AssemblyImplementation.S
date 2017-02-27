


.global readSwitches_writeLed_Assembly
.text
.ent readSwitches_writeLed_Assembly

readSwitches_writeLed_Assembly:

	 lwi r11,r0, 0x40020000
	 swi r11,r0, 0x40010000
	 rtsd r15,8
	 nop
 .end readSwitches_writeLed_Assembly


.global translateN
.text
.ent translateN
translateN:
		addi r3,r0,0x1
again:  beqid r5, done
		nop
		addi r5,r5,-1
		add r3,r3,r3
		brid again
		nop
done:   addi r3,r3,-1
		rtsd r15, 8
		nop
.end translateN

.global number_of_ones
.text
.ent number_of_ones
number_of_ones:
		add r3,r0,r0
while:  beqid r5, result
		nop
		andi r4,r5,1
		add r3,r3,r4
		sra r5,r5
		brid while
		nop
result: rtsd r15, 8
		nop
.end number_of_ones



.global function
.text
.ent function
function:
			addi r1,r1,-4
			swi r15,r1,0
			lwi r5,r0, 0x40020000
			brlid r15, number_of_ones
			nop
			add r5,r3,r0
			brlid r15,translateN
			nop
			swi r3,r0,0x40010000
			lwi r15,r1,0
			addi r1,r1,4
			rtsd r15, 8
			nop
.end function

.global process_switches
.text
.ent process_switches
process_switches:
			addi r1,r1,-4
			sw r15,r1,r0
			lwi r6,r0, 0x40020000
			add r5,r0,r0
			addi r7,r0,8
			addi r10,r0,1
shift: beqi r7, arg_ready
			nop
			andi r9, r6,1
			add r5,r5,r5
			add r5,r5,r9
			sra r6,r6
			rsub r7,r10,r7
			brid shift
			nop
arg_ready: brlid r15, number_of_ones
			nop
			add r7,r3,r0
			add r5,r6,r0
			brlid r15, first_position_of_one
			nop
			add r6,r3,r0
			add r5,r7,r0
			brlid r15, display_value_at_index
			nop
			lw r15,r1,r0
			addi r1,r1,4
			rtsd r15, 8
			nop
.end process_switches

.global first_position_of_one
.text
.ent first_position_of_one
first_position_of_one:
			add r3,r0,r0
			beqi r5, found
			nop
next: andi r4,r5,1
			bneid r4, found
			nop
			addi r3,r3,1
			sra r5,r5
			brid next
			nop
			found: rtsd r15,8
nop
.end first_position_of_one



/*
.global process_switches
.text
.ent process_switches
process_switches:
			addi r1,r1,-4
			sw r15,r1,r0
			lwi r6,r0, 0x40020000
			add r5,r0,r0
			addi r7,r0,8
			addi r10,r0,1
shift: beqi r7, arg_ready
			nop
			andi r9, r6,1
			add r5,r5,r5
			add r5,r5,r9
			sra r6,r6
			rsub r7,r10,r7
			brid shift
			nop
arg_ready: brlid r15, number_of_ones
			nop
			add r7,r3,r0
			add r5,r6,r0
			brlid r15, first_position_of_one
			nop
			add r6,r3,r0
			add r5,r7,r0
			brlid r15, display_value_at_index
			nop
			lw r15,r1,r0
			addi r1,r1,4
			rtsd r15, 8
			nop
.end process_switches
*/

/*
.global first_position_of_one
.text
.ent first_position_of_one
first_position_of_one:
			add r3,r0,r0
			beqi r5, found
			nop
next: andi r4,r5,1
			bneid r4, found
			nop
			addi r3,r3,1
			sra r5,r5
			brid next
			nop
			found: rtsd r15,8
nop
.end first_position_of_one
*/

.global display_value_at_index
.text
.ent display_value_at_index
display_value_at_index:
		add r7,r5,r5
		add r7,r7,r7
		add r8,r6,r6
		add r8,r8,r8
		addi r9,r0,7
		addi r10,r0,0x44A00000
		addi r11,r0,1
		/*
reset_display: add r12, r9,r9
		add r12,r12,r12
		sw r0,r10,r12
		rsub r9,r11,r9
		bgeid r9, reset_display
		*/
		nop
		lwi r9,r7,display_codes
		sw r9, r10, r8
		rtsd r15, 8
		nop
.end display_value_at_index



/*
.global main_assembly
.text
.ent main_assembly
main_assembly:

	lwi r19, r0, 0x40020000
	nop
	addi r20, r0, 255
	and r21, r19, r20 //right part
	addi r22, r0, 65280
	and r23, r19, r22 //left part
	addi r24, r0, 8 //8
	addi r25, r0, 1 //1
	lwi r27, r0, 0x40010000
	nop

while: beqid r24, done //branch
	nop
	sra r23, r23
	rsub r24, r25, r24
	brid while
	nop
done:
	nop
    rsub r26, r23, r21
    bgti r26,true
    nop
    addi r28, r0, 65535
	swi r0, r0, 0x40010000
	nop
	bri finish
	nop
true:
	swi r28, r0, 0x40010000
	nop
finish:
    rtsd r15, 8
    nop

.end main_assembly
*/


/*
.global main_assembly2
.text
.ent main_assembly2
main_assembly2:

	lwi r19, r0, 0x40020000
	nop
	addi r20, r0, 255
	and r21, r19, r20 //right part
	addi r22, r0, 65280
	and r23, r19, r22 //left part


	addi r26, r0, 8 //8
	addi r27, r0, 1 //1

	nop

while3: beqid r26, done3 //branch
	nop
	sra r23, r23
	rsub r26, r27, r26
	brid while3
	nop
done3:
	xor r24, r21, r23
	not r24, r24
	nop
	add r26, r0, r0
	addi r26, r0, 7 //8
	addi r27, r0, 1 //1

	nop
while2: beqid r26, finish
	nop
	rsubi r6, r26, 7 //index
	andi r5, r24, 1
	sra r24, r24

	brlid r15, display_value_at_index
	nop
	rsub r26, r27, r26
	brid while2
	nop
finish:
	lwi r15,r1,0
	addi r1,r1,4
	rtsd r15, 8

    nop


.end main_assembly2
*/

.global main_assembly3
.text
.ent main_assembly3
main_assembly3:

	addi r10,r0,0x44A00000
	addi r11,r0,1
	reset_display: add r12, r9,r9
		add r12,r12,r12
		sw r0,r10,r12
		rsub r9,r11,r9
		bgeid r9, reset_display

	lwi r5, r0, 0x40020000

	brlid r15, number_of_ones
	nop
	add r19, r3, r0
	addi r20, r0, 9
	rsub r21, r20, r19

	bgti r21, greater
continue:
	add r5, r3, r0
	add r6, r0, r0
	brlid r15, display_value_at_index
	nop
	brid finish
	nop

greater:
	addi r5, r0, 1
	addi r6, r6, 1
	brlid r15, display_value_at_index
	nop
	brid continue
	nop

finish:
	lwi r15,r1,0
	addi r1,r1,4
	rtsd r15, 8
	nop

.end main_assembly3
