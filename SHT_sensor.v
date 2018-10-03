module SHT_Sensor(
    input CLK,
    input RST_N,
    output[15:0] TEMP,
    output[15:0] HUMID,
    output reg SCK,
    inout DATA
);

reg[15:0] iTEMP;
reg[15:0] iHUMID;
reg[7:0] state;
reg[7:0] counter;
reg select; // temperature=1, humidity=0
reg rw; // output=1, input=0
reg ack;
reg iDATA;
reg[7:0] command;
reg wait_flag;

assign DATA = (rw) ? iDATA : 1'bz;
assign TEMP = iTEMP[15:0];
assign HUMID = iHUMID[15:0];

always @ (posedge CLK, negedge RST_N) begin
  if (RST_N==1'b0) begin
    state <= 0;
    counter <= 0;
    wait_flag <= 0;
    rw <= 1'b1;
    select <= 1;
    command <= 8'b00000011;
    iTEMP <= 0;
    iHUMID <= 0;
    iDATA <= 1'b1;
  end else begin
    case (state)
    0: // initial state
      begin
        SCK <= 0;
        iDATA <= 1;
        command <= 8'b00000011;
        ack <= 1;
        counter <= 0;
        state <= 1;
      end
    1: // Connection reset sequence
      begin
        SCK <= 1;
        iDATA <= 1;
        state <= 2;
      end
    2:
      begin
        SCK <= 0;
        // iDATA <= 1;
        counter <= counter + 1;
        if (counter == 8) begin
          state <= 3;
          counter <= 0;
        end else begin
          state <= 1;
        end
      end
    3: // Transmission Start sequence
      begin
        SCK <= 1;
        iDATA <= 1;
        state <= 4;
      end
    4:
      begin
        iDATA <= 0;
        state <= 5;
      end
    5:
      begin
        SCK <= 0;
        state <= 6;
      end
    6:
      begin
        SCK <= 1;
        state <= 7;
      end
    7:
      begin
        iDATA <= 1;
        state <= 8;
      end
    8:
      begin
        SCK <= 0;
        state <= 9;
      end
    9: // Set command for Measuring
      begin
        rw <= 1; //output
        if (select==1)
          command <= 8'b00000011; // Measure Temperature
        else
          command <= 8'b00000101; // Measure Humidity
        state <= 10;
      end
    10: // Send a Command
      begin
        SCK <= 0;
        iDATA <= (command & 8'b10000000) ? 1 : 0;
        command <= command << 1;
        state <= 11;
      end
    11:
      begin
        SCK <= 1;
        counter <= counter + 1;
        state <= 12;
      end
    12:
      begin
        SCK <= 0;
        if (counter == 8) begin
          counter <= 0;
          state <= 13;
        end else begin
          state <= 10;
        end
      end
    13: // recieve acknowledge
      begin
        rw <= 0; // input
        state <= 14;
      end
    14:
      begin
        SCK <= 1;
        ack <= DATA;
        state <= 15;
      end
    15:
      begin
        SCK <= 0;
        if (ack == 0) begin
          ack <= 1;
          state <= 16;
        end else begin 
          state <= 1;
        end
      end
    16: // Wait for measuring
      begin
        wait_flag <= DATA;
        if (wait_flag == 1)
          state <= 17;
        else
          state <= 16;
      end
    17:
      begin
        wait_flag <= DATA;
        if (wait_flag == 0)
          state <= 18;
        else
          state <= 17;
      end
    18: // Read sensor data
      begin
        rw <= 0; // input
        SCK <= 0;
        state <= 19;
      end
    19:
      begin
        SCK <= 1;
        counter <= counter + 1;
        state <= 20;
      end
    20:
      begin
        if (select == 1)
          iTEMP[16-counter] = DATA;
        else 
          iHUMID[16-counter] = DATA;
        if (counter == 8) begin
          state <= 21;
        end else if (counter == 16) begin
          counter <= 0;
          state <= 25;
        end else begin
          state <= 18;
        end
      end
    21: // send acknowlege
      begin
        rw <= 1; // output
        SCK <= 0;
        state <= 22;
      end
    22:
      begin
        iDATA <= 0;
        state <= 23;
      end
    23:
      begin
        SCK <= 1;
        state <= 24;
      end
    24:
      begin
        SCK <= 0;
        state <= 18;
      end
    25:
      begin
        rw <= 1; // output
        SCK <= 0;
        state <= 26;
      end
    26:
      begin
        iDATA <= 1;
        state <= 27;
      end
    27:
      begin
        SCK <= 1;
        state <= 28;
      end
    28:
      begin
        SCK <= 0;
        if (select == 1) 
          select <= 0;
        else 
          select <= 1;
        state <= 3;
      end
    endcase
  end
end

endmodule 