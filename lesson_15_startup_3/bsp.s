

		AREA Reset_Code, CODE, READONLY
		EXPORT HardFault_Handler
			
HardFault_Handler
		
		LDR 	R0, =0xE000ED0C		; Load SCB->AIRCR address
		LDR		R1, =0x05FA0004		; VECTKEY (0x05FA) + SYSRESETREQ (bit 2)
		
		DSB							; Data synchronization barrier
		
		STR		R1, [R0]			; Trigger the reset
		
		DSB							; Data synchronization barroer
		
S_Loop
		B		S_Loop				; Wait for reset to occur