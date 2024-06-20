#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vour_OnOff.h"  //因为创建的是our_OnOff.v 所以头文件要包含Vour_OnOff.h(把V放在前面)
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vour_OnOff.h"
#include "Vour_OnOff___024root.h"
 
 
int main(int argc,char **argv)
{
  Verilated::commandArgs(argc,argv);
  Vour_OnOff *top = new Vour_OnOff("top");

 	Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    top->trace(m_trace, 0);
    m_trace->open("waveform.vcd"); 

  while(!Verilated::gotFinish())
{                                                                                                                                 
  int a = rand() & 1;
  int b = rand() & 1;
  top->a = a;
  top->b = b;
  top->eval();
  printf("a = %d, b = %d, f = %d\n",a,b, top->f);
  assert(top->f == a ^ b);
 }

  m_trace->close();
  delete top;
  exit(EXIT_SUCCESS); 
}
