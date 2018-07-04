LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_UNSIGNED.ALL;

ENTITY freq IS
	GENERIC(T : INTEGER := 50000000);
	PORT(
			clk_in, clr: IN STD_LOGIC;
			gate_p,reset_p: OUT STD_LOGIC);
END freq;


ARCHITECTURE ctl_chip OF freq IS

SIGNAL count_p : INTEGER:=0;
SIGNAL gate_p_m : STD_LOGIC:= '1';
SIGNAL reset_p_m: STD_LOGIC:= '1';


BEGIN
	PROCESS(clk_in,clr)
	BEGIN
	gate_p <= gate_p_m;
	reset_p <= reset_p_m;	
	
		IF(clr= '0') THEN
			count_p <= 0;
			gate_p <= '1';
			reset_p <= '1';
			
		ELSIF RISING_EDGE(clk_in) THEN
		
			IF(count_p = T + 5) THEN
				count_p <= 0;
				gate_p_m <= '1';
				
			ELSE
			
				count_p <= count_p + 1;
				
				IF(count_p = T) THEN
					gate_p_m <= '0';
					
				ELSIF(count_p = T + 3) THEN
					reset_p_m <= '0';
				ELSE
					reset_p_m <= '1';
					
				END IF;
				
			END IF;
			
		END IF;		

	END PROCESS;
END ctl_chip;