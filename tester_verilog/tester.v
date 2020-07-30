`timescale 1ps/1ps

module _____00003aT0( ); 
   reg signed[31:0] z__value;
   wire signed[31:0] a;
   wire signed[31:0] _00005e_0000600;
   wire signed[31:0] _00005e_0000601;

   _____00003aT0_00003a_00003atanh_00003aT0 tanh(.z__value(_00005e_0000600),.a(_00005e_0000601));
   assign _00005e_0000600 = z__value;

   assign a = _00005e_0000601;

   initial begin

      z__value = 32'b0;

      #10

      z__value = 32'b00000001010111111111101110000000;

      #10

      z__value = 32'b0;

      #10

   end

endmodule