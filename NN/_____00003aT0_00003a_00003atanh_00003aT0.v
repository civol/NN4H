`timescale 1ps/1ps

module _____00003aT0_00003a_00003atanh_00003aT0( addr, base, next__data ); 
   input [7:0] addr;
   output signed[31:0] base;
   output reg signed[31:0] next__data;
   reg signed[31:0] table  [255:0];

   assign base = table[addr];

   always @( * ) begin

      if ((addr == 8'b11111111)) begin
         next__data <= table[addr];
      end
      else begin
         next__data <= table[(addr + 32'd1)];
      end

   end

   initial begin

      table[32'd0] = 53'b-0.9950547536867305;

      table[32'd1] = 53'b-0.9948180412711414;

      table[32'd2] = 53'b-0.9945700290619897;

      table[32'd3] = 53'b-0.994310180670041;

      table[32'd4] = 53'b-0.9940379345402902;

      table[32'd5] = 53'b-0.9937527028002934;

      table[32'd6] = 53'b-0.9934538700586567;

      table[32'd7] = 53'b-0.9931407921518111;

      table[32'd8] = 53'b-0.9928127948371598;

      table[32'd9] = 53'b-0.9924691724306522;

      table[32'd10] = 53'b-0.9921091863867959;

      table[32'd11] = 53'b-0.9917320638190951;

      table[32'd12] = 53'b-0.991336995958872;

      table[32'd13] = 53'b-0.9909231365504092;

      table[32'd14] = 53'b-0.9904896001803339;

      table[32'd15] = 53'b-0.9900354605391575;

      table[32'd16] = 53'b-0.9895597486128832;

      table[32'd17] = 53'b-0.989061450802602;

      table[32'd18] = 53'b-0.9885395069700158;

      table[32'd19] = 53'b-0.987992808406857;

      table[32'd20] = 53'b-0.9874201957262151;

      table[32'd21] = 53'b-0.9868204566738389;

      table[32'd22] = 53'b-0.9861923238575563;

      table[32'd23] = 53'b-0.9855344723930419;

      table[32'd24] = 53'b-0.9848455174642784;

      table[32'd25] = 53'b-0.9841240117971853;

      table[32'd26] = 53'b-0.9833684430450518;

      table[32'd27] = 53'b-0.9825772310845889;

      table[32'd28] = 53'b-0.9817487252216389;

      table[32'd29] = 53'b-0.9808812013058169;

      table[32'd30] = 53'b-0.9799728587536537;

      table[32'd31] = 53'b-0.979021817480124;

      table[32'd32] = 53'b-0.9780261147388136;

      table[32'd33] = 53'b-0.9769837018713932;

      table[32'd34] = 53'b-0.9758924409675271;

      table[32'd35] = 53'b-0.9747501014368711;

      table[32'd36] = 53'b-0.9735543564953897;

      table[32'd37] = 53'b-0.9723027795688709;

      table[32'd38] = 53'b-0.970992840617236;

      table[32'd39] = 53'b-0.9696219023840321;

      table[32'd40] = 53'b-0.9681872165763705;

      table[32'd41] = 53'b-0.9666859199815419;

      table[32'd42] = 53'b-0.9651150305275893;

      table[32'd43] = 53'b-0.963471443296286;

      table[32'd44] = 53'b-0.9617519264982222;

      table[32'd45] = 53'b-0.9599531174210895;

      table[32'd46] = 53'b-0.958071518363745;

      table[32'd47] = 53'b-0.9561034925702643;

      table[32'd48] = 53'b-0.9540452601799487;

      table[32'd49] = 53'b-0.9518928942111476;

      table[32'd50] = 53'b-0.9496423165987963;

      table[32'd51] = 53'b-0.9472892943077605;

      table[32'd52] = 53'b-0.94482943554642;

      table[32'd53] = 53'b-0.9422581861074242;

      table[32'd54] = 53'b-0.939570825865212;

      table[32'd55] = 53'b-0.936762465462709;

      table[32'd56] = 53'b-0.9338280432225917;

      table[32'd57] = 53'b-0.9307623223216483;

      table[32'd58] = 53'b-0.9275598882700505;

      table[32'd59] = 53'b-0.9242151467407852;

      table[32'd60] = 53'b-0.92072232179806;

      table[32'd61] = 53'b-0.9170754545771808;

      table[32'd62] = 53'b-0.9132684024721864;

      table[32'd63] = 53'b-0.9092948388913872;

      table[32'd64] = 53'b-0.9051482536448664;

      table[32'd65] = 53'b-0.9008219540319365;

      table[32'd66] = 53'b-0.8963090667004403;

      table[32'd67] = 53'b-0.8916025403536288;

      table[32'd68] = 53'b-0.8866951493840524;

      table[32'd69] = 53'b-0.8815794985174281;

      table[32'd70] = 53'b-0.8762480285527146;

      table[32'd71] = 53'b-0.8706930232875522;

      table[32'd72] = 53'b-0.8649066177207418;

      table[32'd73] = 53'b-0.8588808076254141;

      table[32'd74] = 53'b-0.852607460587903;

      table[32'd75] = 53'b-0.8460783286079477;

      table[32'd76] = 53'b-0.8392850623555859;

      table[32'd77] = 53'b-0.8322192271788401;

      table[32'd78] = 53'b-0.8248723209538826;

      table[32'd79] = 53'b-0.8172357938656573;

      table[32'd80] = 53'b-0.809301070201781;

      table[32'd81] = 53'b-0.8010595722357858;

      table[32'd82] = 53'b-0.7925027462672406;

      table[32'd83] = 53'b-0.7836220908758593;

      table[32'd84] = 53'b-0.7744091874342136;

      table[32'd85] = 53'b-0.7648557329089823;

      table[32'd86] = 53'b-0.7549535749636815;

      table[32'd87] = 53'b-0.7446947493564187;

      table[32'd88] = 53'b-0.7340715196043415;

      table[32'd89] = 53'b-0.7230764188620713;

      table[32'd90] = 53'b-0.7117022939345188;

      table[32'd91] = 53'b-0.6999423513151498;

      table[32'd92] = 53'b-0.6877902051090852;

      table[32'd93] = 53'b-0.6752399266665783;

      table[32'd94] = 53'b-0.6622860957166337;

      table[32'd95] = 53'b-0.6489238527531414;

      table[32'd96] = 53'b-0.6351489523872873;

      table[32'd97] = 53'b-0.6209578173406449;

      table[32'd98] = 53'b-0.606347592713803;

      table[32'd99] = 53'b-0.5913162001263084;

      table[32'd100] = 53'b-0.5758623912857893;

      table[32'd101] = 53'b-0.5599858005082137;

      table[32'd102] = 53'b-0.5436869956781494;

      table[32'd103] = 53'b-0.5269675271085849;

      table[32'd104] = 53'b-0.5098299737352566;

      table[32'd105] = 53'b-0.4922779860615022;

      table[32'd106] = 53'b-0.47431632525736667;

      table[32'd107] = 53'b-0.45595089781195497;

      table[32'd108] = 53'b-0.43718878514171233;

      table[32'd109] = 53'b-0.4180382675701865;

      table[32'd110] = 53'b-0.39850884211751697;

      table[32'd111] = 53'b-0.3786112335708921;

      table[32'd112] = 53'b-0.35835739835078595;

      table[32'd113] = 53'b-0.33776052074201707;

      table[32'd114] = 53'b-0.316835001123366;

      table[32'd115] = 53'b-0.2955964359042207;

      table[32'd116] = 53'b-0.2740615889607664;

      table[32'd117] = 53'b-0.25224835445660676;

      table[32'd118] = 53'b-0.230175711032133;

      table[32'd119] = 53'b-0.20786366745191664;

      table[32'd120] = 53'b-0.1853331999081395;

      table[32'd121] = 53'b-0.16260618128862664;

      table[32'd122] = 53'b-0.13970530282831423;

      table[32'd123] = 53'b-0.11665398867074886;

      table[32'd124] = 53'b-0.09347630396922774;

      table[32'd125] = 53'b-0.07019685725322307;

      table[32'd126] = 53'b-0.04684069787264808;

      table[32'd127] = 53'b-0.023433209408330664;

      table[32'd128] = 53'b0.0;

      table[32'd129] = 53'b0.023433209408330664;

      table[32'd130] = 53'b0.04684069787264808;

      table[32'd131] = 53'b0.07019685725322307;

      table[32'd132] = 53'b0.09347630396922774;

      table[32'd133] = 53'b0.11665398867074886;

      table[32'd134] = 53'b0.13970530282831423;

      table[32'd135] = 53'b0.16260618128862664;

      table[32'd136] = 53'b0.1853331999081395;

      table[32'd137] = 53'b0.20786366745191664;

      table[32'd138] = 53'b0.230175711032133;

      table[32'd139] = 53'b0.25224835445660676;

      table[32'd140] = 53'b0.2740615889607664;

      table[32'd141] = 53'b0.2955964359042207;

      table[32'd142] = 53'b0.316835001123366;

      table[32'd143] = 53'b0.33776052074201707;

      table[32'd144] = 53'b0.35835739835078595;

      table[32'd145] = 53'b0.3786112335708921;

      table[32'd146] = 53'b0.39850884211751697;

      table[32'd147] = 53'b0.4180382675701865;

      table[32'd148] = 53'b0.43718878514171233;

      table[32'd149] = 53'b0.45595089781195497;

      table[32'd150] = 53'b0.47431632525736667;

      table[32'd151] = 53'b0.4922779860615022;

      table[32'd152] = 53'b0.5098299737352566;

      table[32'd153] = 53'b0.5269675271085849;

      table[32'd154] = 53'b0.5436869956781494;

      table[32'd155] = 53'b0.5599858005082137;

      table[32'd156] = 53'b0.5758623912857893;

      table[32'd157] = 53'b0.5913162001263084;

      table[32'd158] = 53'b0.606347592713803;

      table[32'd159] = 53'b0.6209578173406449;

      table[32'd160] = 53'b0.6351489523872873;

      table[32'd161] = 53'b0.6489238527531414;

      table[32'd162] = 53'b0.6622860957166337;

      table[32'd163] = 53'b0.6752399266665783;

      table[32'd164] = 53'b0.6877902051090852;

      table[32'd165] = 53'b0.6999423513151498;

      table[32'd166] = 53'b0.7117022939345188;

      table[32'd167] = 53'b0.7230764188620713;

      table[32'd168] = 53'b0.7340715196043415;

      table[32'd169] = 53'b0.7446947493564187;

      table[32'd170] = 53'b0.7549535749636815;

      table[32'd171] = 53'b0.7648557329089823;

      table[32'd172] = 53'b0.7744091874342136;

      table[32'd173] = 53'b0.7836220908758593;

      table[32'd174] = 53'b0.7925027462672406;

      table[32'd175] = 53'b0.8010595722357858;

      table[32'd176] = 53'b0.809301070201781;

      table[32'd177] = 53'b0.8172357938656573;

      table[32'd178] = 53'b0.8248723209538826;

      table[32'd179] = 53'b0.8322192271788401;

      table[32'd180] = 53'b0.8392850623555859;

      table[32'd181] = 53'b0.8460783286079477;

      table[32'd182] = 53'b0.852607460587903;

      table[32'd183] = 53'b0.8588808076254141;

      table[32'd184] = 53'b0.8649066177207418;

      table[32'd185] = 53'b0.8706930232875522;

      table[32'd186] = 53'b0.8762480285527146;

      table[32'd187] = 53'b0.8815794985174281;

      table[32'd188] = 53'b0.8866951493840524;

      table[32'd189] = 53'b0.8916025403536288;

      table[32'd190] = 53'b0.8963090667004403;

      table[32'd191] = 53'b0.9008219540319365;

      table[32'd192] = 53'b0.9051482536448664;

      table[32'd193] = 53'b0.9092948388913872;

      table[32'd194] = 53'b0.9132684024721864;

      table[32'd195] = 53'b0.9170754545771808;

      table[32'd196] = 53'b0.92072232179806;

      table[32'd197] = 53'b0.9242151467407852;

      table[32'd198] = 53'b0.9275598882700505;

      table[32'd199] = 53'b0.9307623223216483;

      table[32'd200] = 53'b0.9338280432225917;

      table[32'd201] = 53'b0.936762465462709;

      table[32'd202] = 53'b0.939570825865212;

      table[32'd203] = 53'b0.9422581861074242;

      table[32'd204] = 53'b0.94482943554642;

      table[32'd205] = 53'b0.9472892943077605;

      table[32'd206] = 53'b0.9496423165987963;

      table[32'd207] = 53'b0.9518928942111476;

      table[32'd208] = 53'b0.9540452601799487;

      table[32'd209] = 53'b0.9561034925702643;

      table[32'd210] = 53'b0.958071518363745;

      table[32'd211] = 53'b0.9599531174210895;

      table[32'd212] = 53'b0.9617519264982222;

      table[32'd213] = 53'b0.963471443296286;

      table[32'd214] = 53'b0.9651150305275893;

      table[32'd215] = 53'b0.9666859199815419;

      table[32'd216] = 53'b0.9681872165763705;

      table[32'd217] = 53'b0.9696219023840321;

      table[32'd218] = 53'b0.970992840617236;

      table[32'd219] = 53'b0.9723027795688709;

      table[32'd220] = 53'b0.9735543564953897;

      table[32'd221] = 53'b0.9747501014368711;

      table[32'd222] = 53'b0.9758924409675271;

      table[32'd223] = 53'b0.9769837018713932;

      table[32'd224] = 53'b0.9780261147388136;

      table[32'd225] = 53'b0.979021817480124;

      table[32'd226] = 53'b0.9799728587536537;

      table[32'd227] = 53'b0.9808812013058169;

      table[32'd228] = 53'b0.9817487252216389;

      table[32'd229] = 53'b0.9825772310845889;

      table[32'd230] = 53'b0.9833684430450518;

      table[32'd231] = 53'b0.9841240117971853;

      table[32'd232] = 53'b0.9848455174642784;

      table[32'd233] = 53'b0.9855344723930419;

      table[32'd234] = 53'b0.9861923238575563;

      table[32'd235] = 53'b0.9868204566738389;

      table[32'd236] = 53'b0.9874201957262151;

      table[32'd237] = 53'b0.987992808406857;

      table[32'd238] = 53'b0.9885395069700158;

      table[32'd239] = 53'b0.989061450802602;

      table[32'd240] = 53'b0.9895597486128832;

      table[32'd241] = 53'b0.9900354605391575;

      table[32'd242] = 53'b0.9904896001803339;

      table[32'd243] = 53'b0.9909231365504092;

      table[32'd244] = 53'b0.991336995958872;

      table[32'd245] = 53'b0.9917320638190951;

      table[32'd246] = 53'b0.9921091863867959;

      table[32'd247] = 53'b0.9924691724306522;

      table[32'd248] = 53'b0.9928127948371598;

      table[32'd249] = 53'b0.9931407921518111;

      table[32'd250] = 53'b0.9934538700586567;

      table[32'd251] = 53'b0.9937527028002934;

      table[32'd252] = 53'b0.9940379345402902;

      table[32'd253] = 53'b0.994310180670041;

      table[32'd254] = 53'b0.9945700290619897;

      table[32'd255] = 53'b0.9948180412711414;

   end

endmodule