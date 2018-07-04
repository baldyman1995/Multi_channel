LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_UNSIGNED.ALL;

ENTITY PWM_f IS
	PORT(
		clk_50M: IN STD_LOGIC;
		clk_100: OUT STD_LOGIC);
END PWM_f;


ARCHITECTURE gate OF PWM_f IS

	SIGNAL count: INTEGER:=0;
	SIGNAL clk_reg: STD_LOGIC:= '1';
	
	BEGIN
		PROCESS(clk_50M)
		BEGIN
			clk_100 <= clk_reg;
			
			IF RISING_EDGE(clk_50M) THEN
			
				count <= count + 1;
				
				IF(count = 250000) THEN
					
					clk_reg <= '0';
					
				ELSIF(count = 500000) THEN
					
					clk_reg <= '1';
					count <= 0;						
					
				END IF;
			END IF;
	END PROCESS;
END gate;	