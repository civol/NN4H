`timescale 1ps/1ps

module neural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003afunc0_00003aT1( z__value, a ); 
   input signed[7:0] z__value;
   output signed[7:0] a;
   wire signed[7:0] base;
   wire signed[7:0] next__data;
   wire [3:0] address;
   wire signed[7:0] remaining;
   wire [3:0] _00005e_000060501;
   wire signed[7:0] _00005e_000060502;
   wire signed[7:0] _00005e_000060503;
   wire signed[7:0] _00005e_000060504;
   wire signed[7:0] _00005e_000060505;
   wire signed[7:0] _00005e_000060506;
   wire signed[7:0] _00005e_000060507;

   neural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003afunc0_00003aT1_00003a_00003amy__lut_00003aT2 my__lut(.address(_00005e_000060501),.base(_00005e_000060502),.next__data(_00005e_000060503));
   neural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003afunc0_00003aT1_00003a_00003amy__interpolator_00003aT2 my__interpolator(.remaining(_00005e_000060504),.base(_00005e_000060505),.next__data(_00005e_000060506),.interpolated__value(_00005e_000060507));
   assign address = z__value[7:4];

   assign remaining = {{1'b0,1'b0,1'b0,1'b0},z__value[3:0]};

   assign _00005e_000060501 = address;

   assign base = _00005e_000060502;

   assign next__data = _00005e_000060503;

   assign _00005e_000060504 = remaining;

   assign _00005e_000060505 = base;

   assign _00005e_000060506 = next__data;

   assign a = _00005e_000060507;

endmodule