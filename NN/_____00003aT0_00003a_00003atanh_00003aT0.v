`timescale 1ps/1ps

module _____00003aT0_00003a_00003atanh_00003aT0( addr, data__prev, data__next ); 
   input [7:0] addr;
   output signed[7:0] data__prev;
   output signed[7:0] data__next;
   reg signed[31:0] table__prev  [255:0];
   reg signed[31:0] table__next  [255:0];

   assign data__prev = table__prev[addr];

   assign data__next = table__next[addr];

   initial begin

      table__prev[32'd0] = -32'd64;

      table__prev[32'd1] = -32'd64;

      table__prev[32'd2] = -32'd64;

      table__prev[32'd3] = -32'd64;

      table__prev[32'd4] = -32'd64;

      table__prev[32'd5] = -32'd64;

      table__prev[32'd6] = -32'd64;

      table__prev[32'd7] = -32'd64;

      table__prev[32'd8] = -32'd64;

      table__prev[32'd9] = -32'd64;

      table__prev[32'd10] = -32'd64;

      table__prev[32'd11] = -32'd64;

      table__prev[32'd12] = -32'd64;

      table__prev[32'd13] = -32'd64;

      table__prev[32'd14] = -32'd64;

      table__prev[32'd15] = -32'd64;

      table__prev[32'd16] = -32'd64;

      table__prev[32'd17] = -32'd64;

      table__prev[32'd18] = -32'd64;

      table__prev[32'd19] = -32'd64;

      table__prev[32'd20] = -32'd64;

      table__prev[32'd21] = -32'd64;

      table__prev[32'd22] = -32'd64;

      table__prev[32'd23] = -32'd64;

      table__prev[32'd24] = -32'd64;

      table__prev[32'd25] = -32'd64;

      table__prev[32'd26] = -32'd64;

      table__prev[32'd27] = -32'd64;

      table__prev[32'd28] = -32'd64;

      table__prev[32'd29] = -32'd64;

      table__prev[32'd30] = -32'd64;

      table__prev[32'd31] = -32'd64;

      table__prev[32'd32] = -32'd64;

      table__prev[32'd33] = -32'd64;

      table__prev[32'd34] = -32'd64;

      table__prev[32'd35] = -32'd64;

      table__prev[32'd36] = -32'd64;

      table__prev[32'd37] = -32'd64;

      table__prev[32'd38] = -32'd64;

      table__prev[32'd39] = -32'd64;

      table__prev[32'd40] = -32'd64;

      table__prev[32'd41] = -32'd64;

      table__prev[32'd42] = -32'd64;

      table__prev[32'd43] = -32'd64;

      table__prev[32'd44] = -32'd64;

      table__prev[32'd45] = -32'd64;

      table__prev[32'd46] = -32'd64;

      table__prev[32'd47] = -32'd64;

      table__prev[32'd48] = -32'd64;

      table__prev[32'd49] = -32'd64;

      table__prev[32'd50] = -32'd64;

      table__prev[32'd51] = -32'd64;

      table__prev[32'd52] = -32'd64;

      table__prev[32'd53] = -32'd64;

      table__prev[32'd54] = -32'd64;

      table__prev[32'd55] = -32'd64;

      table__prev[32'd56] = -32'd64;

      table__prev[32'd57] = -32'd64;

      table__prev[32'd58] = -32'd64;

      table__prev[32'd59] = -32'd64;

      table__prev[32'd60] = -32'd64;

      table__prev[32'd61] = -32'd64;

      table__prev[32'd62] = -32'd64;

      table__prev[32'd63] = -32'd64;

      table__prev[32'd64] = -32'd64;

      table__prev[32'd65] = -32'd62;

      table__prev[32'd66] = -32'd61;

      table__prev[32'd67] = -32'd60;

      table__prev[32'd68] = -32'd59;

      table__prev[32'd69] = -32'd58;

      table__prev[32'd70] = -32'd57;

      table__prev[32'd71] = -32'd56;

      table__prev[32'd72] = -32'd55;

      table__prev[32'd73] = -32'd54;

      table__prev[32'd74] = -32'd53;

      table__prev[32'd75] = -32'd52;

      table__prev[32'd76] = -32'd51;

      table__prev[32'd77] = -32'd50;

      table__prev[32'd78] = -32'd49;

      table__prev[32'd79] = -32'd48;

      table__prev[32'd80] = -32'd47;

      table__prev[32'd81] = -32'd46;

      table__prev[32'd82] = -32'd45;

      table__prev[32'd83] = -32'd44;

      table__prev[32'd84] = -32'd43;

      table__prev[32'd85] = -32'd42;

      table__prev[32'd86] = -32'd41;

      table__prev[32'd87] = -32'd40;

      table__prev[32'd88] = -32'd39;

      table__prev[32'd89] = -32'd38;

      table__prev[32'd90] = -32'd37;

      table__prev[32'd91] = -32'd36;

      table__prev[32'd92] = -32'd35;

      table__prev[32'd93] = -32'd34;

      table__prev[32'd94] = -32'd33;

      table__prev[32'd95] = -32'd32;

      table__prev[32'd96] = -32'd31;

      table__prev[32'd97] = -32'd30;

      table__prev[32'd98] = -32'd29;

      table__prev[32'd99] = -32'd28;

      table__prev[32'd100] = -32'd27;

      table__prev[32'd101] = -32'd26;

      table__prev[32'd102] = -32'd25;

      table__prev[32'd103] = -32'd24;

      table__prev[32'd104] = -32'd23;

      table__prev[32'd105] = -32'd22;

      table__prev[32'd106] = -32'd21;

      table__prev[32'd107] = -32'd20;

      table__prev[32'd108] = -32'd19;

      table__prev[32'd109] = -32'd18;

      table__prev[32'd110] = -32'd17;

      table__prev[32'd111] = -32'd16;

      table__prev[32'd112] = -32'd15;

      table__prev[32'd113] = -32'd14;

      table__prev[32'd114] = -32'd13;

      table__prev[32'd115] = -32'd12;

      table__prev[32'd116] = -32'd11;

      table__prev[32'd117] = -32'd10;

      table__prev[32'd118] = -32'd9;

      table__prev[32'd119] = -32'd8;

      table__prev[32'd120] = -32'd7;

      table__prev[32'd121] = -32'd6;

      table__prev[32'd122] = -32'd5;

      table__prev[32'd123] = -32'd4;

      table__prev[32'd124] = -32'd3;

      table__prev[32'd125] = -32'd2;

      table__prev[32'd126] = -32'd1;

      table__prev[32'd127] = 32'd0;

      table__prev[32'd128] = 32'd1;

      table__prev[32'd129] = 32'd2;

      table__prev[32'd130] = 32'd3;

      table__prev[32'd131] = 32'd4;

      table__prev[32'd132] = 32'd5;

      table__prev[32'd133] = 32'd6;

      table__prev[32'd134] = 32'd7;

      table__prev[32'd135] = 32'd8;

      table__prev[32'd136] = 32'd9;

      table__prev[32'd137] = 32'd10;

      table__prev[32'd138] = 32'd11;

      table__prev[32'd139] = 32'd12;

      table__prev[32'd140] = 32'd13;

      table__prev[32'd141] = 32'd14;

      table__prev[32'd142] = 32'd15;

      table__prev[32'd143] = 32'd16;

      table__prev[32'd144] = 32'd17;

      table__prev[32'd145] = 32'd18;

      table__prev[32'd146] = 32'd19;

      table__prev[32'd147] = 32'd20;

      table__prev[32'd148] = 32'd21;

      table__prev[32'd149] = 32'd22;

      table__prev[32'd150] = 32'd23;

      table__prev[32'd151] = 32'd24;

      table__prev[32'd152] = 32'd25;

      table__prev[32'd153] = 32'd26;

      table__prev[32'd154] = 32'd27;

      table__prev[32'd155] = 32'd28;

      table__prev[32'd156] = 32'd29;

      table__prev[32'd157] = 32'd30;

      table__prev[32'd158] = 32'd31;

      table__prev[32'd159] = 32'd32;

      table__prev[32'd160] = 32'd33;

      table__prev[32'd161] = 32'd34;

      table__prev[32'd162] = 32'd35;

      table__prev[32'd163] = 32'd36;

      table__prev[32'd164] = 32'd37;

      table__prev[32'd165] = 32'd38;

      table__prev[32'd166] = 32'd39;

      table__prev[32'd167] = 32'd40;

      table__prev[32'd168] = 32'd41;

      table__prev[32'd169] = 32'd42;

      table__prev[32'd170] = 32'd43;

      table__prev[32'd171] = 32'd44;

      table__prev[32'd172] = 32'd45;

      table__prev[32'd173] = 32'd46;

      table__prev[32'd174] = 32'd47;

      table__prev[32'd175] = 32'd48;

      table__prev[32'd176] = 32'd49;

      table__prev[32'd177] = 32'd50;

      table__prev[32'd178] = 32'd51;

      table__prev[32'd179] = 32'd52;

      table__prev[32'd180] = 32'd53;

      table__prev[32'd181] = 32'd54;

      table__prev[32'd182] = 32'd55;

      table__prev[32'd183] = 32'd56;

      table__prev[32'd184] = 32'd57;

      table__prev[32'd185] = 32'd58;

      table__prev[32'd186] = 32'd59;

      table__prev[32'd187] = 32'd60;

      table__prev[32'd188] = 32'd61;

      table__prev[32'd189] = 32'd62;

      table__prev[32'd190] = 32'd63;

      table__prev[32'd191] = 32'd64;

      table__prev[32'd192] = 32'd64;

      table__prev[32'd193] = 32'd64;

      table__prev[32'd194] = 32'd64;

      table__prev[32'd195] = 32'd64;

      table__prev[32'd196] = 32'd64;

      table__prev[32'd197] = 32'd64;

      table__prev[32'd198] = 32'd64;

      table__prev[32'd199] = 32'd64;

      table__prev[32'd200] = 32'd64;

      table__prev[32'd201] = 32'd64;

      table__prev[32'd202] = 32'd64;

      table__prev[32'd203] = 32'd64;

      table__prev[32'd204] = 32'd64;

      table__prev[32'd205] = 32'd64;

      table__prev[32'd206] = 32'd64;

      table__prev[32'd207] = 32'd64;

      table__prev[32'd208] = 32'd64;

      table__prev[32'd209] = 32'd64;

      table__prev[32'd210] = 32'd64;

      table__prev[32'd211] = 32'd64;

      table__prev[32'd212] = 32'd64;

      table__prev[32'd213] = 32'd64;

      table__prev[32'd214] = 32'd64;

      table__prev[32'd215] = 32'd64;

      table__prev[32'd216] = 32'd64;

      table__prev[32'd217] = 32'd64;

      table__prev[32'd218] = 32'd64;

      table__prev[32'd219] = 32'd64;

      table__prev[32'd220] = 32'd64;

      table__prev[32'd221] = 32'd64;

      table__prev[32'd222] = 32'd64;

      table__prev[32'd223] = 32'd64;

      table__prev[32'd224] = 32'd64;

      table__prev[32'd225] = 32'd64;

      table__prev[32'd226] = 32'd64;

      table__prev[32'd227] = 32'd64;

      table__prev[32'd228] = 32'd64;

      table__prev[32'd229] = 32'd64;

      table__prev[32'd230] = 32'd64;

      table__prev[32'd231] = 32'd64;

      table__prev[32'd232] = 32'd64;

      table__prev[32'd233] = 32'd64;

      table__prev[32'd234] = 32'd64;

      table__prev[32'd235] = 32'd64;

      table__prev[32'd236] = 32'd64;

      table__prev[32'd237] = 32'd64;

      table__prev[32'd238] = 32'd64;

      table__prev[32'd239] = 32'd64;

      table__prev[32'd240] = 32'd64;

      table__prev[32'd241] = 32'd64;

      table__prev[32'd242] = 32'd64;

      table__prev[32'd243] = 32'd64;

      table__prev[32'd244] = 32'd64;

      table__prev[32'd245] = 32'd64;

      table__prev[32'd246] = 32'd64;

      table__prev[32'd247] = 32'd64;

      table__prev[32'd248] = 32'd64;

      table__prev[32'd249] = 32'd64;

      table__prev[32'd250] = 32'd64;

      table__prev[32'd251] = 32'd64;

      table__prev[32'd252] = 32'd64;

      table__prev[32'd253] = 32'd64;

      table__prev[32'd254] = 32'd64;

      table__prev[32'd255] = 32'd64;

      table__next[32'd0] = -32'd64;

      table__next[32'd1] = -32'd64;

      table__next[32'd2] = -32'd64;

      table__next[32'd3] = -32'd64;

      table__next[32'd4] = -32'd64;

      table__next[32'd5] = -32'd64;

      table__next[32'd6] = -32'd64;

      table__next[32'd7] = -32'd64;

      table__next[32'd8] = -32'd64;

      table__next[32'd9] = -32'd64;

      table__next[32'd10] = -32'd64;

      table__next[32'd11] = -32'd64;

      table__next[32'd12] = -32'd64;

      table__next[32'd13] = -32'd64;

      table__next[32'd14] = -32'd64;

      table__next[32'd15] = -32'd64;

      table__next[32'd16] = -32'd64;

      table__next[32'd17] = -32'd64;

      table__next[32'd18] = -32'd64;

      table__next[32'd19] = -32'd64;

      table__next[32'd20] = -32'd64;

      table__next[32'd21] = -32'd64;

      table__next[32'd22] = -32'd64;

      table__next[32'd23] = -32'd64;

      table__next[32'd24] = -32'd64;

      table__next[32'd25] = -32'd64;

      table__next[32'd26] = -32'd64;

      table__next[32'd27] = -32'd64;

      table__next[32'd28] = -32'd64;

      table__next[32'd29] = -32'd64;

      table__next[32'd30] = -32'd64;

      table__next[32'd31] = -32'd64;

      table__next[32'd32] = -32'd64;

      table__next[32'd33] = -32'd64;

      table__next[32'd34] = -32'd64;

      table__next[32'd35] = -32'd64;

      table__next[32'd36] = -32'd64;

      table__next[32'd37] = -32'd64;

      table__next[32'd38] = -32'd64;

      table__next[32'd39] = -32'd64;

      table__next[32'd40] = -32'd64;

      table__next[32'd41] = -32'd64;

      table__next[32'd42] = -32'd64;

      table__next[32'd43] = -32'd64;

      table__next[32'd44] = -32'd64;

      table__next[32'd45] = -32'd64;

      table__next[32'd46] = -32'd64;

      table__next[32'd47] = -32'd64;

      table__next[32'd48] = -32'd64;

      table__next[32'd49] = -32'd64;

      table__next[32'd50] = -32'd64;

      table__next[32'd51] = -32'd64;

      table__next[32'd52] = -32'd64;

      table__next[32'd53] = -32'd64;

      table__next[32'd54] = -32'd64;

      table__next[32'd55] = -32'd64;

      table__next[32'd56] = -32'd64;

      table__next[32'd57] = -32'd64;

      table__next[32'd58] = -32'd64;

      table__next[32'd59] = -32'd64;

      table__next[32'd60] = -32'd64;

      table__next[32'd61] = -32'd64;

      table__next[32'd62] = -32'd64;

      table__next[32'd63] = -32'd64;

      table__next[32'd64] = -32'd64;

      table__next[32'd65] = -32'd63;

      table__next[32'd66] = -32'd62;

      table__next[32'd67] = -32'd61;

      table__next[32'd68] = -32'd60;

      table__next[32'd69] = -32'd59;

      table__next[32'd70] = -32'd58;

      table__next[32'd71] = -32'd57;

      table__next[32'd72] = -32'd56;

      table__next[32'd73] = -32'd55;

      table__next[32'd74] = -32'd54;

      table__next[32'd75] = -32'd53;

      table__next[32'd76] = -32'd52;

      table__next[32'd77] = -32'd51;

      table__next[32'd78] = -32'd50;

      table__next[32'd79] = -32'd49;

      table__next[32'd80] = -32'd48;

      table__next[32'd81] = -32'd47;

      table__next[32'd82] = -32'd46;

      table__next[32'd83] = -32'd45;

      table__next[32'd84] = -32'd44;

      table__next[32'd85] = -32'd43;

      table__next[32'd86] = -32'd42;

      table__next[32'd87] = -32'd41;

      table__next[32'd88] = -32'd40;

      table__next[32'd89] = -32'd39;

      table__next[32'd90] = -32'd38;

      table__next[32'd91] = -32'd37;

      table__next[32'd92] = -32'd36;

      table__next[32'd93] = -32'd35;

      table__next[32'd94] = -32'd34;

      table__next[32'd95] = -32'd33;

      table__next[32'd96] = -32'd32;

      table__next[32'd97] = -32'd31;

      table__next[32'd98] = -32'd30;

      table__next[32'd99] = -32'd29;

      table__next[32'd100] = -32'd28;

      table__next[32'd101] = -32'd27;

      table__next[32'd102] = -32'd26;

      table__next[32'd103] = -32'd25;

      table__next[32'd104] = -32'd24;

      table__next[32'd105] = -32'd23;

      table__next[32'd106] = -32'd22;

      table__next[32'd107] = -32'd21;

      table__next[32'd108] = -32'd20;

      table__next[32'd109] = -32'd19;

      table__next[32'd110] = -32'd18;

      table__next[32'd111] = -32'd17;

      table__next[32'd112] = -32'd16;

      table__next[32'd113] = -32'd15;

      table__next[32'd114] = -32'd14;

      table__next[32'd115] = -32'd13;

      table__next[32'd116] = -32'd12;

      table__next[32'd117] = -32'd11;

      table__next[32'd118] = -32'd10;

      table__next[32'd119] = -32'd9;

      table__next[32'd120] = -32'd8;

      table__next[32'd121] = -32'd7;

      table__next[32'd122] = -32'd6;

      table__next[32'd123] = -32'd5;

      table__next[32'd124] = -32'd4;

      table__next[32'd125] = -32'd3;

      table__next[32'd126] = -32'd2;

      table__next[32'd127] = -32'd1;

      table__next[32'd128] = 32'd0;

      table__next[32'd129] = 32'd1;

      table__next[32'd130] = 32'd2;

      table__next[32'd131] = 32'd3;

      table__next[32'd132] = 32'd4;

      table__next[32'd133] = 32'd5;

      table__next[32'd134] = 32'd6;

      table__next[32'd135] = 32'd7;

      table__next[32'd136] = 32'd8;

      table__next[32'd137] = 32'd9;

      table__next[32'd138] = 32'd10;

      table__next[32'd139] = 32'd11;

      table__next[32'd140] = 32'd12;

      table__next[32'd141] = 32'd13;

      table__next[32'd142] = 32'd14;

      table__next[32'd143] = 32'd15;

      table__next[32'd144] = 32'd16;

      table__next[32'd145] = 32'd17;

      table__next[32'd146] = 32'd18;

      table__next[32'd147] = 32'd19;

      table__next[32'd148] = 32'd20;

      table__next[32'd149] = 32'd21;

      table__next[32'd150] = 32'd22;

      table__next[32'd151] = 32'd23;

      table__next[32'd152] = 32'd24;

      table__next[32'd153] = 32'd25;

      table__next[32'd154] = 32'd26;

      table__next[32'd155] = 32'd27;

      table__next[32'd156] = 32'd28;

      table__next[32'd157] = 32'd29;

      table__next[32'd158] = 32'd30;

      table__next[32'd159] = 32'd31;

      table__next[32'd160] = 32'd32;

      table__next[32'd161] = 32'd33;

      table__next[32'd162] = 32'd34;

      table__next[32'd163] = 32'd35;

      table__next[32'd164] = 32'd36;

      table__next[32'd165] = 32'd37;

      table__next[32'd166] = 32'd38;

      table__next[32'd167] = 32'd39;

      table__next[32'd168] = 32'd40;

      table__next[32'd169] = 32'd41;

      table__next[32'd170] = 32'd42;

      table__next[32'd171] = 32'd43;

      table__next[32'd172] = 32'd44;

      table__next[32'd173] = 32'd45;

      table__next[32'd174] = 32'd46;

      table__next[32'd175] = 32'd47;

      table__next[32'd176] = 32'd48;

      table__next[32'd177] = 32'd49;

      table__next[32'd178] = 32'd50;

      table__next[32'd179] = 32'd51;

      table__next[32'd180] = 32'd52;

      table__next[32'd181] = 32'd53;

      table__next[32'd182] = 32'd54;

      table__next[32'd183] = 32'd55;

      table__next[32'd184] = 32'd56;

      table__next[32'd185] = 32'd57;

      table__next[32'd186] = 32'd58;

      table__next[32'd187] = 32'd59;

      table__next[32'd188] = 32'd60;

      table__next[32'd189] = 32'd61;

      table__next[32'd190] = 32'd62;

      table__next[32'd191] = 32'd63;

      table__next[32'd192] = 32'd64;

      table__next[32'd193] = 32'd64;

      table__next[32'd194] = 32'd64;

      table__next[32'd195] = 32'd64;

      table__next[32'd196] = 32'd64;

      table__next[32'd197] = 32'd64;

      table__next[32'd198] = 32'd64;

      table__next[32'd199] = 32'd64;

      table__next[32'd200] = 32'd64;

      table__next[32'd201] = 32'd64;

      table__next[32'd202] = 32'd64;

      table__next[32'd203] = 32'd64;

      table__next[32'd204] = 32'd64;

      table__next[32'd205] = 32'd64;

      table__next[32'd206] = 32'd64;

      table__next[32'd207] = 32'd64;

      table__next[32'd208] = 32'd64;

      table__next[32'd209] = 32'd64;

      table__next[32'd210] = 32'd64;

      table__next[32'd211] = 32'd64;

      table__next[32'd212] = 32'd64;

      table__next[32'd213] = 32'd64;

      table__next[32'd214] = 32'd64;

      table__next[32'd215] = 32'd64;

      table__next[32'd216] = 32'd64;

      table__next[32'd217] = 32'd64;

      table__next[32'd218] = 32'd64;

      table__next[32'd219] = 32'd64;

      table__next[32'd220] = 32'd64;

      table__next[32'd221] = 32'd64;

      table__next[32'd222] = 32'd64;

      table__next[32'd223] = 32'd64;

      table__next[32'd224] = 32'd64;

      table__next[32'd225] = 32'd64;

      table__next[32'd226] = 32'd64;

      table__next[32'd227] = 32'd64;

      table__next[32'd228] = 32'd64;

      table__next[32'd229] = 32'd64;

      table__next[32'd230] = 32'd64;

      table__next[32'd231] = 32'd64;

      table__next[32'd232] = 32'd64;

      table__next[32'd233] = 32'd64;

      table__next[32'd234] = 32'd64;

      table__next[32'd235] = 32'd64;

      table__next[32'd236] = 32'd64;

      table__next[32'd237] = 32'd64;

      table__next[32'd238] = 32'd64;

      table__next[32'd239] = 32'd64;

      table__next[32'd240] = 32'd64;

      table__next[32'd241] = 32'd64;

      table__next[32'd242] = 32'd64;

      table__next[32'd243] = 32'd64;

      table__next[32'd244] = 32'd64;

      table__next[32'd245] = 32'd64;

      table__next[32'd246] = 32'd64;

      table__next[32'd247] = 32'd64;

      table__next[32'd248] = 32'd64;

      table__next[32'd249] = 32'd64;

      table__next[32'd250] = 32'd64;

      table__next[32'd251] = 32'd64;

      table__next[32'd252] = 32'd64;

      table__next[32'd253] = 32'd64;

      table__next[32'd254] = 32'd64;

      table__next[32'd255] = 32'd64;

   end

endmodule