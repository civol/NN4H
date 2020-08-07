`timescale 1ps/1ps

module _____00003aT0( ); 
   reg [31:0] z__value;
   wire [31:0] a;
   wire [31:0] _00005e_0000600;
   wire [31:0] _00005e_0000601;

   _____00003aT0_00003a_00003atanh_00003aT0 tanh(.z__value(_00005e_0000600),.a(_00005e_0000601));
   assign _00005e_0000600 = z__value;

   assign a = _00005e_0000601;

   initial begin

      z__value = 32'b00000000000000000000000000000000;

      #10

      z__value = 32'b11111111111111111111111111111111;

      #10

   end

endmodule