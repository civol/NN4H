#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8400_52895440;

SignalI remaining_53021320_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeremaining_53021320() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_53021320_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_52895440;
   signalI->name = "remaining";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI base_53228280_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makebase_53228280() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_53228280_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_52895440;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI next__data_44017960_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makenext__data_44017960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_44017960_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_52895440;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

SignalI interpolated__value_47689260_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200;

SignalI makeinterpolated__value_47689260() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_47689260_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_52895440;
   signalI->name = "interpolated_value";
   signalI->type = get_type_vector(get_type_signed(),8);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   signalI->fading = 1;
   signalI->num_any = 0;
   signalI->any = NULL;
   signalI->num_pos = 0;
   signalI->pos = NULL;
   signalI->num_neg = 0;
   signalI->neg = NULL;
   register_signal(signalI);

   return signalI;
};

Block __51822380;

void code__51822380() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = base_53228280_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
      src1 = ({
            Value src0,src1,dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = ({
                  Value src0, dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0,src1,dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = ({
                                    Value src0,src1,dst = get_value();
                                    unsigned int pool_state = get_value_pos();
                                    src0 = next__data_44017960_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
                                    src1 = base_53228280_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_53021320_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_bit(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__51816120();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_47689260_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
      set_value_pos(pool_state);
   }
}

Block make__51822380() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __51822380 = block;
   block->owner = (Object)__51819940;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__51822380;

   return block;
};

Value make__51816120() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __51318800;

Scope __51317880;

Scope make__51317880() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51317880 = scope;
   scope->owner = (Object)__51318800;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 0;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

Behavior __51819940;

Behavior make__51819940() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __51819940 = behavior;
   behavior->owner = (Object)__51318800;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_53228280_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   base_53228280_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   base_53228280_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(base_53228280_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,base_53228280_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
base_53228280_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[base_53228280_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_44017960_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   next__data_44017960_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   next__data_44017960_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(next__data_44017960_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,next__data_44017960_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
next__data_44017960_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[next__data_44017960_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_53021320_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200);
   remaining_53021320_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any += 1;
   remaining_53021320_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any = realloc(remaining_53021320_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any,remaining_53021320_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any*sizeof(Object));
remaining_53021320_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->any[remaining_53021320_my__interpolator_58_8400_52895440___52989140_func1_58_840_53121580___48350160_layer0_58_840_52138560___48385240______58_840_52937200->num_any-1] = (Object)behavior;
   behavior->block = make__51822380();

   return behavior;
}

Scope make__51318800() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __51318800 = scope;
   scope->owner = (Object)my__interpolator_58_8400_52895440;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__51317880();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__51819940();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8400_52895440() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8400_52895440 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_53021320();
   systemT->inputs[1] = makebase_53228280();
   systemT->inputs[2] = makenext__data_44017960();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_47689260();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__51318800();

   return systemT;
}