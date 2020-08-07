#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__table_58_840_47114600;

SignalI addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520;

SignalI makeaddr_47562120() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520 = signalI;
   signalI->owner = (Object)my__table_58_840_47114600;
   signalI->name = "addr";
   signalI->type = get_type_vector(get_type_bit(),4);
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

SignalI base_47561960_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520;

SignalI makebase_47561960() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   base_47561960_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520 = signalI;
   signalI->owner = (Object)my__table_58_840_47114600;
   signalI->name = "base";
   signalI->type = get_type_vector(get_type_bit(),8);
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

SignalI next__data_47561880_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520;

SignalI makenext__data_47561880() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   next__data_47561880_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520 = signalI;
   signalI->owner = (Object)my__table_58_840_47114600;
   signalI->name = "next_data";
   signalI->type = get_type_vector(get_type_bit(),8);
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

Block __47118460;

Block __47116720;

void code__47116720() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47119300___47098980_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->c_value;
            idx = value2integer(addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47561880_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
      set_value_pos(pool_state);
   }
}

Block make__47116720() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47116720 = block;
   block->owner = (Object)__47118460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47116720;

   return block;
};

Block __47118300;

void code__47118300() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47119300___47098980_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->c_value;
            idx = value2integer(({
                  Value src0,src1,dst = get_value();
                  unsigned int pool_state = get_value_pos();
                  src0 = ({
                        Value src0, dst = get_value();
                        unsigned int pool_state = get_value_pos();
                        src0 = addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->c_value;
                        dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
                        set_value_pos(pool_state);
                     dst; });
                  src1 = make__47659120();
                  dst = add_value(src0,src1,dst);
                  set_value_pos(pool_state);
               dst; }));
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),next__data_47561880_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
      set_value_pos(pool_state);
   }
}

Block make__47118300() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47118300 = block;
   block->owner = (Object)__47118460;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47118300;

   return block;
};

void code__47118460() {
   {
      Value cond = ({
         Value src0,src1,dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = ({
               Value src0, dst = get_value();
               unsigned int pool_state = get_value_pos();
               src0 = addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->c_value;
               dst = cast_value(src0,get_type_vector(get_type_signed(),32),dst);
               set_value_pos(pool_state);
            dst; });
         src1 = make__47659460();
         dst = equal_value(src0,src1,dst);
         set_value_pos(pool_state);
      dst; });
      if (is_defined_value(cond)) {
         if (value2integer(cond)) {
    code__47116720();
   }
   else {
  code__47118300();
   }
      }
   }
}

Block make__47118460() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47118460 = block;
   block->owner = (Object)__47115120;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47118460;

   return block;
};

Block __47637800;

void code__47637800() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long idx;
            unsigned int pool_state = get_value_pos();
            ref = lut_47119300___47098980_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->c_value;
            idx = value2integer(addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->c_value);
            dst = read_range(ref,idx,idx,get_type_vector(get_type_bit(),8),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),8),dst);
      set_value_pos(pool_state);
   dst; }),base_47561960_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
      set_value_pos(pool_state);
   }
}

Block make__47637800() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47637800 = block;
   block->owner = (Object)__47636860;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47637800;

   return block;
};

Value make__47660080() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47660060() {
   static unsigned long long data[] = { 2ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47660040() {
   static unsigned long long data[] = { 5ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47660020() {
   static unsigned long long data[] = { 8ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47659980() {
   static unsigned long long data[] = { 10ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47659960() {
   static unsigned long long data[] = { 11ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47659940() {
   static unsigned long long data[] = { 12ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47659920() {
   static unsigned long long data[] = { 13ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47659900() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47659860() {
   static unsigned long long data[] = { 14ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47659840() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47659820() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47659800() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47659780() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47659760() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47659740() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_bit(),8),1,data);
}

Value make__47659460() {
   static unsigned long long data[] = { 15ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47659120() {
   static unsigned long long data[] = { 1ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47098980;

SignalI lut_47119300___47098980_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520;

SignalI makelut_47119300() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   lut_47119300___47098980_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520 = signalI;
   signalI->owner = (Object)__47098980;
   signalI->name = "lut";
   signalI->type = get_type_vector(get_type_vector(get_type_bit(),8),16);
   signalI->c_value = make_value(signalI->type,0);
   signalI->c_value->signal = signalI;
   signalI->f_value = make_value(signalI->type,0);
   signalI->f_value->signal = signalI;
   copy_value(({
         Value src0,src1,src2,src3,src4,src5,src6,src7,src8,src9,src10,src11,src12,src13,src14,src15;
         Value dst = get_value();
         unsigned int pool_state = get_value_pos();
         src0 = make__47660080();
         src1 = make__47660060();
         src2 = make__47660040();
         src3 = make__47660020();
         src4 = make__47659980();
         src5 = make__47659960();
         src6 = make__47659940();
         src7 = make__47659920();
         src8 = make__47659900();
         src9 = make__47659860();
         src10 = make__47659840();
         src11 = make__47659820();
         src12 = make__47659800();
         src13 = make__47659780();
         src14 = make__47659760();
         src15 = make__47659740();
         concat_value(16,0,dst,src0,src1,src2,src3,src4,src5,src6,src7,src8,src9,src10,src11,src12,src13,src14,src15);
         set_value_pos(pool_state);
      dst; }),signalI->c_value);
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

Behavior __47115120;

Behavior make__47115120() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47115120 = behavior;
   behavior->owner = (Object)__47098980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
   addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any += 1;
   addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any = realloc(addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any,addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any*sizeof(Object));
addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any[addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47119300___47098980_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
   lut_47119300___47098980_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any += 1;
   lut_47119300___47098980_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any = realloc(lut_47119300___47098980_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any,lut_47119300___47098980_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any*sizeof(Object));
lut_47119300___47098980_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any[lut_47119300___47098980_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any-1] = (Object)behavior;
   behavior->block = make__47118460();

   return behavior;
}

Behavior __47636860;

Behavior make__47636860() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47636860 = behavior;
   behavior->owner = (Object)__47098980;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 2;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
   addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any += 1;
   addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any = realloc(addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any,addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any*sizeof(Object));
addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any[addr_47562120_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any-1] = (Object)behavior;
   behavior->events[1] = make_event(ANYEDGE,lut_47119300___47098980_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
   lut_47119300___47098980_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any += 1;
   lut_47119300___47098980_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any = realloc(lut_47119300___47098980_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any,lut_47119300___47098980_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any*sizeof(Object));
lut_47119300___47098980_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any[lut_47119300___47098980_my__table_58_840_47114600___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any-1] = (Object)behavior;
   behavior->block = make__47637800();

   return behavior;
}

Scope make__47098980() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47098980 = scope;
   scope->owner = (Object)my__table_58_840_47114600;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 1;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->inners[0] = makelut_47119300();
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 2;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47115120();
   scope->behaviors[1] = make__47636860();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__table_58_840_47114600() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__table_58_840_47114600 = systemT;
systemT->owner = NULL;
   systemT->name = "my_table:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makeaddr_47562120();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makebase_47561960();
   systemT->outputs[1] = makenext__data_47561880();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47098980();

   return systemT;
}