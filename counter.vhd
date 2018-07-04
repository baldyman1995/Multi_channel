LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_UNSIGNED.ALL;

ENTITY counter IS
	PORT(
			f_in, gate_in, reset: IN STD_LOGIC;
			f_out: OUT STD_LOGIC_VECTOR(23 DOWNTO 0));
END counter;

ARCHITECTURE counter_chip OF counter IS

	SIGNAL f_c: STD_LOGIC_VECTOR(23 DOWNTO 0):="000000000000000000000000";
	SIGNAL f_out_m : STD_LOGIC_VECTOR(23 DOWNTO 0):="000000000000000000000000";
	
	BEGIN
		PROCESS(f_in, reset)
		BEGIN
		
			IF(reset = '0') THEN
				f_out <= f_out_m;
				f_c <= (others => '0');
				
			ELSE
			
				IF(gate_in = '1') THEN
				
					IF RISING_EDGE(f_in) THEN
						f_c <= f_c + '1';
						f_out_m <= f_c;
					END IF;
					
				END IF;
				
			END IF;
			
		END PROCESS;
		
END counter_chip;