	component core is
		port (
			clk_clk                           : in  std_logic                     := 'X';             -- clk
			freq_0_external_connection_export : in  std_logic_vector(23 downto 0) := (others => 'X'); -- export
			freq_1_external_connection_export : in  std_logic_vector(23 downto 0) := (others => 'X'); -- export
			freq_2_external_connection_export : in  std_logic_vector(23 downto 0) := (others => 'X'); -- export
			freq_3_external_connection_export : in  std_logic_vector(23 downto 0) := (others => 'X'); -- export
			freq_4_external_connection_export : in  std_logic_vector(23 downto 0) := (others => 'X'); -- export
			freq_5_external_connection_export : in  std_logic_vector(23 downto 0) := (others => 'X'); -- export
			freq_6_external_connection_export : in  std_logic_vector(23 downto 0) := (others => 'X'); -- export
			freq_7_external_connection_export : in  std_logic_vector(23 downto 0) := (others => 'X'); -- export
			hum_export                        : in  std_logic_vector(15 downto 0) := (others => 'X'); -- export
			pwm_0_external_connection_export  : out std_logic_vector(6 downto 0);                     -- export
			pwm_1_external_connection_export  : out std_logic_vector(6 downto 0);                     -- export
			pwm_2_external_connection_export  : out std_logic_vector(6 downto 0);                     -- export
			pwm_3_external_connection_export  : out std_logic_vector(6 downto 0);                     -- export
			pwm_4_external_connection_export  : out std_logic_vector(6 downto 0);                     -- export
			pwm_5_external_connection_export  : out std_logic_vector(6 downto 0);                     -- export
			pwm_6_external_connection_export  : out std_logic_vector(6 downto 0);                     -- export
			pwm_7_external_connection_export  : out std_logic_vector(6 downto 0);                     -- export
			tem_export                        : in  std_logic_vector(15 downto 0) := (others => 'X'); -- export
			uart_external_connection_rxd      : in  std_logic                     := 'X';             -- rxd
			uart_external_connection_txd      : out std_logic                                         -- txd
		);
	end component core;

	u0 : component core
		port map (
			clk_clk                           => CONNECTED_TO_clk_clk,                           --                        clk.clk
			freq_0_external_connection_export => CONNECTED_TO_freq_0_external_connection_export, -- freq_0_external_connection.export
			freq_1_external_connection_export => CONNECTED_TO_freq_1_external_connection_export, -- freq_1_external_connection.export
			freq_2_external_connection_export => CONNECTED_TO_freq_2_external_connection_export, -- freq_2_external_connection.export
			freq_3_external_connection_export => CONNECTED_TO_freq_3_external_connection_export, -- freq_3_external_connection.export
			freq_4_external_connection_export => CONNECTED_TO_freq_4_external_connection_export, -- freq_4_external_connection.export
			freq_5_external_connection_export => CONNECTED_TO_freq_5_external_connection_export, -- freq_5_external_connection.export
			freq_6_external_connection_export => CONNECTED_TO_freq_6_external_connection_export, -- freq_6_external_connection.export
			freq_7_external_connection_export => CONNECTED_TO_freq_7_external_connection_export, -- freq_7_external_connection.export
			hum_export                        => CONNECTED_TO_hum_export,                        --                        hum.export
			pwm_0_external_connection_export  => CONNECTED_TO_pwm_0_external_connection_export,  --  pwm_0_external_connection.export
			pwm_1_external_connection_export  => CONNECTED_TO_pwm_1_external_connection_export,  --  pwm_1_external_connection.export
			pwm_2_external_connection_export  => CONNECTED_TO_pwm_2_external_connection_export,  --  pwm_2_external_connection.export
			pwm_3_external_connection_export  => CONNECTED_TO_pwm_3_external_connection_export,  --  pwm_3_external_connection.export
			pwm_4_external_connection_export  => CONNECTED_TO_pwm_4_external_connection_export,  --  pwm_4_external_connection.export
			pwm_5_external_connection_export  => CONNECTED_TO_pwm_5_external_connection_export,  --  pwm_5_external_connection.export
			pwm_6_external_connection_export  => CONNECTED_TO_pwm_6_external_connection_export,  --  pwm_6_external_connection.export
			pwm_7_external_connection_export  => CONNECTED_TO_pwm_7_external_connection_export,  --  pwm_7_external_connection.export
			tem_export                        => CONNECTED_TO_tem_export,                        --                        tem.export
			uart_external_connection_rxd      => CONNECTED_TO_uart_external_connection_rxd,      --   uart_external_connection.rxd
			uart_external_connection_txd      => CONNECTED_TO_uart_external_connection_txd       --                           .txd
		);

