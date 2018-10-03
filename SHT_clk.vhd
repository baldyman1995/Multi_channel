LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_UNSIGNED.ALL;

ENTITY SHT_C IS
	PORT(
		clk_50M: IN STD_LOGIC;
		clk_5M: OUT STD_LOGIC);
END SHT_C;


ARCHITECTURE gate OF SHT_C IS

	SIGNAL count: INTEGER:=0;
	SIGNAL clk_reg: STD_LOGIC:= '1';
	
	BEGIN
		PROCESS(clk_50M)
		BEGIN
			clk_5M <= clk_reg;
			
			IF RISING_EDGE(clk_50M) THEN
			
				count <= count + 1;
				
				IF(count = 20) THEN
					
					clk_reg <= '0';
					
				ELSIF(count = 40) THEN
					
					clk_reg <= '1';
					count <= 0;						
					
				END IF;
			END IF;
	END PROCESS;
END gate;	