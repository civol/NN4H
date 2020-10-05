`timescale 1ps/1ps

module _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer0_00003aT0_00003a_00003afunc1_00003aT0_00003a_00003amy__interpolator_00003aT00( remaining, base, next__data, interpolated__value ); 
   input signed[7:0] remaining;
   input signed[7:0] base;
   input signed[7:0] next__data;
   output signed[7:0] interpolated__value;

   assign interpolated__value = (base + (($unsigned((next__data - base)) * remaining) >> 32'd4));

endmodule