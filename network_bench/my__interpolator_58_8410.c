#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8410_58377140;

SignalI remaining_58604000_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeremaining_58604000() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_58604000_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)my__interpolator_58_8410_58377140;
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

SignalI base_58685080_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makebase_58685080() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_58685080_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)my__interpolator_58_8410_58377140;
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

SignalI next__data_58873660_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makenext__data_58873660() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_58873660_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)my__interpolator_58_8410_58377140;
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

SignalI interpolated__value_58947920_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640;

SignalI makeinterpolated__value_58947920() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_58947920_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640 = signalI;
   signalI->owner = (Object)my__interpolator_58_8410_58377140;
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

Block __49494200;

void code__49494200() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_58685080_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
            dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
            set_value_pos(pool_state);
         dst; });
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
                                    src0 = next__data_58873660_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                                    src1 = base_58685080_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_58604000_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__50010900();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_58947920_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
      set_value_pos(pool_state);
   }
}

Block make__49494200() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __49494200 = block;
   block->owner = (Object)__49507500;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__49494200;

   return block;
};

Value make__50010900() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_841_57400080;

Scope __57399720;

Scope make__57399720() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __57399720 = scope;
   scope->owner = (Object)my__interpolator_58_841_57400080;
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

Behavior __49507500;

Behavior make__49507500() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __49507500 = behavior;
   behavior->owner = (Object)my__interpolator_58_841_57400080;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_58685080_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   base_58685080_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   base_58685080_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(base_58685080_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,base_58685080_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
base_58685080_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[base_58685080_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_58873660_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   next__data_58873660_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   next__data_58873660_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(next__data_58873660_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,next__data_58873660_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
next__data_58873660_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[next__data_58873660_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_58604000_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640);
   remaining_58604000_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any += 1;
   remaining_58604000_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any = realloc(remaining_58604000_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any,remaining_58604000_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any*sizeof(Object));
remaining_58604000_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->any[remaining_58604000_my__interpolator_58_8410_58377140_func0_58_840_50750460_func0_58_8400_51446360_layer1_58_84_58603200_layer1_58_840_58121640_neural__network_58_84_50005580_neural__network_58_840_58992160______58_84_50006280______58_840_59058640->num_any-1] = (Object)behavior;
   behavior->block = make__49494200();

   return behavior;
}

Scope makemy__interpolator_58_841_57400080() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_841_57400080 = scope;
   scope->owner = (Object)my__interpolator_58_8410_58377140;
   scope->name = "my_interpolator:T1";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__57399720();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__49507500();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8410_58377140() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8410_58377140 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T10";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_58604000();
   systemT->inputs[1] = makebase_58685080();
   systemT->inputs[2] = makenext__data_58873660();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_58947920();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_841_57400080();

   return systemT;
}