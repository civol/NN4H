#include <stdlib.h>
#include "hruby_sim.h"
#include "hruby_sim_gen.h"

SystemT my__translator_58_840_47102200;

SignalI z__value_47099780_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520;

SignalI makez__value_47099780() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   z__value_47099780_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520 = signalI;
   signalI->owner = (Object)my__translator_58_840_47102200;
   signalI->name = "z_value";
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

SignalI addr_47099680_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520;

SignalI makeaddr_47099680() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   addr_47099680_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520 = signalI;
   signalI->owner = (Object)my__translator_58_840_47102200;
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

SignalI remaining_47099580_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520;

SignalI makeremaining_47099580() {
   SignalI signalI = malloc(sizeof(SignalIS));
   signalI->kind = SIGNALI;

   remaining_47099580_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520 = signalI;
   signalI->owner = (Object)my__translator_58_840_47102200;
   signalI->name = "remaining";
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

Block __47641120;

void code__47641120() {
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47099780_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->c_value;
            first = value2integer(make__47638380());
            last = value2integer(make__47638360());
            dst = read_range(ref,first,last,get_type_bit(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),addr_47099680_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
      set_value_pos(pool_state);
   }
   {
      unsigned int pool_state = get_value_pos();
      transmit_to_signal(({
      Value src0, dst = get_value();
      unsigned int pool_state = get_value_pos();
      src0 = ({
            Value ref,dst = get_value();
            unsigned long long first,last;
            unsigned int pool_state = get_value_pos();
            ref = z__value_47099780_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->c_value;
            first = value2integer(make__47638180());
            last = value2integer(make__47638160());
            dst = read_range(ref,first,last,get_type_bit(),dst);
            set_value_pos(pool_state);
         dst; });
      dst = cast_value(src0,get_type_vector(get_type_bit(),4),dst);
      set_value_pos(pool_state);
   dst; }),remaining_47099580_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
      set_value_pos(pool_state);
   }
}

Block make__47641120() {
   Block block = malloc(sizeof(BlockS));
   block->kind = BLOCK;

   __47641120 = block;
   block->owner = (Object)__47639480;
   block->num_inners = 0;
   block->inners = calloc(sizeof(SignalI),block->num_inners);
   block->function = &code__47641120;

   return block;
};

Value make__47638380() {
   static unsigned long long data[] = { 7ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47638360() {
   static unsigned long long data[] = { 4ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47638180() {
   static unsigned long long data[] = { 3ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Value make__47638160() {
   static unsigned long long data[] = { 0ULL };
   return make_set_value(get_type_vector(get_type_signed(),32),1,data);
}

Scope __47047400;

Behavior __47639480;

Behavior make__47639480() {
   Behavior behavior = malloc(sizeof(BehaviorS));
   behavior->kind = BEHAVIOR;

   __47639480 = behavior;
   behavior->owner = (Object)__47047400;
   behavior->activated = 0;
   behavior->timed = 0;
   behavior->num_events = 1;
   behavior->events = calloc(sizeof(Event),behavior->num_events);
   behavior->events[0] = make_event(ANYEDGE,z__value_47099780_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520);
   z__value_47099780_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any += 1;
   z__value_47099780_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any = realloc(z__value_47099780_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any,z__value_47099780_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any*sizeof(Object));
z__value_47099780_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->any[z__value_47099780_my__translator_58_840_47102200___47048500_tanh_58_840_47591360___47049560______58_840_47587520->num_any-1] = (Object)behavior;
   behavior->block = make__47641120();

   return behavior;
}

Scope make__47047400() {
   Scope scope = malloc(sizeof(ScopeS));
   scope->kind = SCOPE;

   __47047400 = scope;
   scope->owner = (Object)my__translator_58_840_47102200;
   scope->name = "";
   scope->num_systemIs = 0;
   scope->systemIs = calloc(sizeof(SystemI),scope->num_systemIs);
   scope->num_inners = 0;
   scope->inners = calloc(sizeof(SignalI),scope->num_inners);
   scope->num_scopes = 0;
   scope->scopes = calloc(sizeof(Scope),scope->num_scopes);
   scope->num_behaviors = 1;
   scope->behaviors = calloc(sizeof(Behavior),scope->num_behaviors);
   scope->behaviors[0] = make__47639480();
   scope->num_codes = 0;
   scope->codes = calloc(sizeof(Code),scope->num_codes);

   return scope;
}

SystemT makemy__translator_58_840_47102200() {
   SystemT systemT = malloc(sizeof(SystemTS));
   systemT->kind = SYSTEMT;

   my__translator_58_840_47102200 = systemT;
systemT->owner = NULL;
   systemT->name = "my_translator:T0";
   systemT->num_inputs = 1;
   systemT->inputs = calloc(sizeof(SignalI),systemT->num_inputs);
   systemT->inputs[0] = makez__value_47099780();
   systemT->num_outputs = 2;
   systemT->outputs = calloc(sizeof(SignalI),systemT->num_outputs);
   systemT->outputs[0] = makeaddr_47099680();
   systemT->outputs[1] = makeremaining_47099580();
   systemT->num_inouts = 0;
   systemT->inouts = calloc(sizeof(SignalI),systemT->num_inouts);

   systemT->scope = make__47047400();

   return systemT;
}