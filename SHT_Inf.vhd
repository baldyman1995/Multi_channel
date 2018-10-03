LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE IEEE.STD_LOGIC_UNSIGNED.ALL;

ENTITY SHT_Inf IS
	GENERIC(T : INTEGER := 20);
	PORT(
			clk_in, Aqr : IN    STD_LOGIC;
			sck,sda:INOUT STD_LOGIC;
			H_out: OUT STD_LOGIC_VECTOR(15 DOWNTO 0);
			T_out: OUT STD_LOGIC_VECTOR(15 DOWNTO 0)
			
			);
			
END SHT_Inf;


ARCHITECTURE SHT_c OF SHT_Inf IS

SIGNAL count_p : INTEGER:= 0;
SIGNAL step_reg : INTEGER:= 0;
SIGNAL aqr_reg : STD_LOGIC:= '1';
SIGNAL sck_reg : STD_LOGIC:= '1';
SIGNAL scl_reg : STD_LOGIC:= '1';
SIGNAL sda_reg : STD_LOGIC:= '1';

BEGIN

	scl <= scl_reg;

	PROCESS(clk_in,aqr)
	BEGIN
	
		IF RISING_EDGE(aqr) THEN
		
			aqr_reg <= '1';

			scl_reg <= '1';
			sck_reg <= '1';
			
		END IF;
		
		
		IF RISING_EDGE(clk_in) THEN
		
			IF(count_p = 5) THEN
				sck_reg <= '0';
								
			ELSIF(count_p = 10) then
				scl_reg <= '0';
				sck_reg <= '1';
				
			ELSIF(count_p = 15) then
				sck_reg <= '0';

		   ELSIF(count_p = 20) then
				scl_reg <= '1';
				sck_reg <= '1';
				
				step_reg <= step_reg + 1;
				
				count_p <= 0;
				
			ELSE
			
				count_p <= count_p + 1;
				
					
			END IF;
				
			
		END IF;
		
		
		IF (aqr_reg = '1') THEN
			
			case step_reg is
			
				when 1 => 
					
					IF(count_p = 5) THEN
						
						sda <= '0';
					end IF;
			end case;
				
			
			
			
		end if;

	END PROCESS;
END SHT_c;