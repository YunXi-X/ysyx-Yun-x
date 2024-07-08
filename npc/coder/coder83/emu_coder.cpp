#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcoder.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vcoder* top;

void step_and_dump_wave(){
	top->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());	
}

void sim_init(){
	contextp = new VerilatedContext;
	tfp = new VerilatedVcdC;
	top = new Vcoder;
	contextp->traceEverOn(true);
	top->trace(tfp,0);
	tfp->open("dump.vcd");

}

void sim_exit(){
	step_and_dump_wave();
	tfp->close();
}

int main(){
  sim_init();
	
//  top->en = 0b0;  top->x = 0b00;  step_and_dump_wave();
//                  top->x = 0b01;  step_and_dump_wave();
//                  top->x = 0b10;  step_and_dump_wave();
//                  top->x = 0b11;  step_and_dump_wave();
//  top->en = 0b1;  top->x = 0b00;  step_and_dump_wave();
//                  top->x = 0b01;  step_and_dump_wave();
//                  top->x = 0b10;  step_and_dump_wave();
//                  top->x = 0b11;  step_and_dump_wave();
	
  top->en=0b0;	top->x=0b00000000; step_and_dump_wave();
 				top->x=0b00000001; step_and_dump_wave();
 				top->x=0b00000010; step_and_dump_wave();
 				top->x=0b00000100; step_and_dump_wave();
 				top->x=0b00001000; step_and_dump_wave();
 				top->x=0b00010000; step_and_dump_wave();
 				top->x=0b00100000; step_and_dump_wave();
 				top->x=0b01000000; step_and_dump_wave();
 				top->x=0b10000000; step_and_dump_wave();
  top->en=0b1;	top->x=0b00000000; step_and_dump_wave();
 				top->x=0b00000001; step_and_dump_wave();
 				top->x=0b00000010; step_and_dump_wave();
 				top->x=0b00000100; step_and_dump_wave();
 				top->x=0b00001000; step_and_dump_wave();
 				top->x=0b00010000; step_and_dump_wave();
 				top->x=0b00100000; step_and_dump_wave();
 				top->x=0b01000000; step_and_dump_wave();
 				top->x=0b10000000; step_and_dump_wave();
  
  sim_exit();




}









