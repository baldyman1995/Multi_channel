library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

entity PWM_G is
	port(
			clk,enable: in std_logic;
			per_in:in std_logic_vector(6 downto 0);
			od_v, air_v:out std_logic
	);
end PWM_G;

architecture Gen of PWM_G is
	signal per_m: std_logic_vector(6 downto 0);
	signal per_p: std_logic_vector(6 downto 0);
	signal od: std_logic:='0';
	signal air: std_logic:='0';
	signal count: integer range 0 to 101:=0;
	
	
	begin
		od_v<=od;
		air_v<=air;
		
		process(clk,enable)
			begin
				if(enable='0') then
					od<='0';
					air<='0';
					count<=0;
					per_m<=(others=>'0');
				else
					if rising_edge(clk) then
						count<=count+1;
						if(count=1)then
							per_m<=per_in;
							per_p<=per_m;
						elsif(count=100)then
							count<=0;
						else
							if(per_p="0000000")then
								od<='0';
								air<='1';
							else
								od<='1';
								air<='0';
								per_p<=per_p-'1';
							end if;
						end if;
					end if;
				end if;
		end process;
end Gen;