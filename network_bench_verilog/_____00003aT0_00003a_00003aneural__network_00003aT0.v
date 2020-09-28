`timescale 1ps/1ps

module _____00003aT0_00003a_00003aneural__network_00003aT0( clk, rst, req, fill, ack__network ); 
   input clk;
   input rst;
   input req;
   input fill;
   output ack__network;
   reg ack__0;
   reg ack__1;
   wire fill__inputs;
   reg [1:0] address__inputs;
   reg ack__inputs;
   wire signed[7:0] rom__inputs  :0[0:1];
   reg _00003a17;
   reg [0:0] _00003a18;
   reg signed[7:0] _00003a19;
   wire channel__input_00003a1_00003a_00003atrig__r;
   wire channel__input_00003a1_00003a_00003atrig__w;
   reg signed[7:0] channel__input_00003a1_00003a_00003adbus__r;
   wire signed[7:0] channel__input_00003a1_00003a_00003adbus__w;
   wire [0:0] channel__input_00003a1_00003a_00003aabus__r;
   wire [0:0] channel__input_00003a1_00003a_00003aabus__w;
   wire signed[7:0] channel__input_00003a1_00003a_00003amem  :0[0:1];
   wire signed[7:0] channel__output_00003a30_00003a_00003areg__0;
   wire [0:-1] channel__output_00003a30_00003a_00003arinc_00003a39_00003a_00003aabus__r;
   wire [0:-1] channel__output_00003a30_00003a_00003awinc_00003a42_00003a_00003aabus__w;
   wire [0:-1] channel__output_00003a30_00003a_00003ardec_00003a45_00003a_00003aabus__r;
   wire [0:-1] channel__output_00003a30_00003a_00003awdec_00003a49_00003a_00003aabus__w;
   wire signed[7:0] channel__a0_00003a53_00003a_00003areg__0;
   wire signed[7:0] channel__a0_00003a53_00003a_00003areg__1;
   wire [0:0] channel__a0_00003a53_00003a_00003arinc_00003a65_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a53_00003a_00003awinc_00003a69_00003a_00003aabus__w;
   wire [0:0] channel__a0_00003a53_00003a_00003ardec_00003a73_00003a_00003aabus__r;
   wire [0:0] channel__a0_00003a53_00003a_00003awdec_00003a78_00003a_00003aabus__w;
   wire _00005e_00006022;
   wire _00005e_00006023;
   wire _00005e_00006024;
   wire _00005e_00006025;
   wire _00005e_00006026;
   wire _00005e_00006027;
   wire _00005e_00006028;
   wire _00005e_00006029;
   wire _00005e_00006030;
   wire _00005e_00006031;
   wire signed[7:0] _00005e_00006032;
   wire _00005e_00006033;
   wire [0:0] _00005e_00006034;
   wire signed[7:0] _00005e_00006035;
   wire signed[7:0] _00005e_00006036;
   wire signed[7:0] _00005e_00006037;
   wire signed[7:0] _00005e_00006038;
   wire signed[7:0] _00005e_00006039;
   wire [0:0] _00005e_00006040;

   _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer0_00003aT0 layer0(.clk(_00005e_00006022),.rst(_00005e_00006023),.fill(_00005e_00006024),.req(_00005e_00006025),._00003a15(_00005e_00006032),.ack__layer(_00005e_00006026),._00003a13(_00005e_00006033),._00003a14(_00005e_00006034),._00003a55(_00005e_00006036),._00003a56(_00005e_00006037));
   _____00003aT0_00003a_00003aneural__network_00003aT0_00003a_00003alayer1_00003aT0 layer1(.clk(_00005e_00006027),.rst(_00005e_00006028),.fill(_00005e_00006029),.req(_00005e_00006030),._00003a66(_00005e_00006038),._00003a67(_00005e_00006039),.ack__layer(_00005e_00006031),._00003a68(_00005e_00006040),._00003a32(_00005e_00006035));
   assign ack__network = ack__1;

   assign _00005e_00006022 = clk;

   assign _00005e_00006023 = rst;

   assign _00005e_00006024 = fill;

   assign _00005e_00006025 = req;

   assign ack__0 = _00005e_00006026;

   assign _00005e_00006027 = clk;

   assign _00005e_00006028 = rst;

   assign _00005e_00006029 = fill;

   assign _00005e_00006030 = ack__0;

   assign ack__1 = _00005e_00006031;

   assign fill__inputs = (fill & ~ack__inputs);

   assign _00003a17 = channel__input_00003a1_00003a_00003atrig__w;

   assign _00003a18 = channel__input_00003a1_00003a_00003aabus__w;

   assign _00003a19 = channel__input_00003a1_00003a_00003adbus__w;

   assign _00005e_00006032 = channel__input_00003a1_00003a_00003adbus__r;

   assign _00005e_00006033 = channel__input_00003a1_00003a_00003atrig__r;

   assign _00005e_00006034 = channel__input_00003a1_00003a_00003aabus__r;

   assign _00005e_00006035 = channel__output_00003a30_00003a_00003areg__0;

   assign _00005e_00006036 = channel__a0_00003a53_00003a_00003areg__0;

   assign _00005e_00006037 = channel__a0_00003a53_00003a_00003areg__1;

   assign _00005e_00006038 = channel__a0_00003a53_00003a_00003areg__0;

   assign _00005e_00006039 = channel__a0_00003a53_00003a_00003areg__1;

   assign _00005e_00006040 = channel__a0_00003a53_00003a_00003arinc_00003a65_00003a_00003aabus__r;

   always @( posedge clk ) begin

      ack__0 <= 32'd0;

      ack__1 <= 32'd0;

   end

   always @( posedge clk ) begin

      if ((rst == 32'd1)) begin
         _00003a18 <= -32'd1;
      end

      _00003a17 <= 32'd0;

      if (rst) begin
         address__inputs <= 32'd0;
         ack__inputs <= 32'd0;
      end

      if (fill__inputs) begin
         if ((rst == 32'd0)) begin
            _00003a18 <= (_00003a18 + 32'd1);
            _00003a17 <= 32'd1;
            _00003a19 <= rom__inputs[address__inputs];
         end
         address__inputs <= (address__inputs + 32'd1);
      end

      if ((address__inputs == 32'd1)) begin
         ack__inputs <= 32'd1;
      end

   end

   always @( negedge clk ) begin

      channel__input_00003a1_00003a_00003adbus__r <= channel__input_00003a1_00003a_00003amem[channel__input_00003a1_00003a_00003aabus__r];

      if (channel__input_00003a1_00003a_00003atrig__w) begin
         channel__input_00003a1_00003a_00003amem[channel__input_00003a1_00003a_00003aabus__w] <= channel__input_00003a1_00003a_00003adbus__w;
      end

   end

   initial begin

      rom__inputs[32'd0] = $signed(32'd12);

      rom__inputs[32'd1] = $signed(32'd12);

   end

endmodule