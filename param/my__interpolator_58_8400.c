#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__interpolator_58_8400_51050860;

SignalI remaining_51291820_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920;

SignalI makeremaining_51291820() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_51291820_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_51050860;
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

SignalI base_51444500_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920;

SignalI makebase_51444500() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_51444500_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_51050860;
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

SignalI next__data_51508220_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920;

SignalI makenext__data_51508220() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_51508220_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_51050860;
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

SignalI interpolated__value_43362880_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920;

SignalI makeinterpolated__value_43362880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   interpolated__value_43362880_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920 = signalI;
   signalI->owner = (Object)my__interpolator_58_8400_51050860;
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

Block __47841020;

void code__47841020() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0,src1,dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value src0, dst = get_value();
            unsigned int pool_state = get_value_pos();
            src0 = base_51444500_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value;
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
                                    src0 = next__data_51508220_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value;
                                    src1 = base_51444500_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value;
                                    dst = sub_value(src0,src1,dst);
                                    set_value_pos(pool_state);
                                 dst; });
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        src1 = ({
                              Value src0, dst = get_value();
                              unsigned int pool_state = get_value_pos();
                              src0 = remaining_51291820_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->c_value;
                              dst = cast_value(src0,get_type_vector(get_type_signed(),12),dst);
                              set_value_pos(pool_state);
                           dst; });
                        dst = mul_value(src0,src1,dst);
                        set_value_pos(pool_state);
                     dst; });
                  dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                  set_value_pos(pool_state);
               dst; });
            src1 = make__47857200();
            dst = shift_right_value(src0,src1,dst);
            set_value_pos(pool_state);
         dst; });
      dst = add_value(src0,src1,dst);
      set_value_pos(pool_state);
   dst; }),interpolated__value_43362880_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
      set_value_pos(pool_state);
   }
}

Block make__47841020() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47841020 = block;
   block->owner = (Object)__47838040;
   block->name = "";
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47841020;

   return block;
};

Value make__47857200() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope my__interpolator_58_840_49894020;

Scope __49893700;

Scope make__49893700() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __49893700 = scope;
   scope->owner = (Object)my__interpolator_58_840_49894020;
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

Behavior __47838040;

Behavior make__47838040() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47838040 = behavior;
   behavior->owner = (Object)my__interpolator_58_840_49894020;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 3;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,base_51444500_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
   base_51444500_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any += 1;
   base_51444500_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any = realloc(base_51444500_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any,base_51444500_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
base_51444500_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any[base_51444500_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,next__data_51508220_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
   next__data_51508220_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any += 1;
   next__data_51508220_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any = realloc(next__data_51508220_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any,next__data_51508220_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
next__data_51508220_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any[next__data_51508220_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->events[2] = make_event(ANYEDGE,remaining_51291820_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920);
   remaining_51291820_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any += 1;
   remaining_51291820_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any = realloc(remaining_51291820_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any,remaining_51291820_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any*sizeof(Object));
remaining_51291820_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->any[remaining_51291820_my__interpolator_58_8400_51050860_func1__0_58_84_51490100_func1__0_58_840_51360980______58_84_47509160______58_840_45773920->num_any-1] = (Object)behavior;
   behavior->block = make__47841020();

   return behavior;
}

Scope makemy__interpolator_58_840_49894020() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   my__interpolator_58_840_49894020 = scope;
   scope->owner = (Object)my__interpolator_58_8400_51050860;
   scope->name = "my_interpolator:T0";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 1;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->scopes[0] = make__49893700();
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47838040();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__interpolator_58_8400_51050860() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__interpolator_58_8400_51050860 = systemT;
systemT->owner = NULL;
   systemT->name = "my_interpolator:T00";
   systemT->num_inputs = 3;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeremaining_51291820();
   systemT->inputs[1] = makebase_51444500();
   systemT->inputs[2] = makenext__data_51508220();
   systemT->num_outputs = 1;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeinterpolated__value_43362880();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = makemy__interpolator_58_840_49894020();

   return systemT;
}