// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vpwm__Syms.h"
#include "Vpwm.h"
#include "Vpwm_pwm.h"
#include "Vpwm_pwm_reg.h"
#include "Vpwm_pwm_crm.h"
#include "Vpwm_pwm_outputgen.h"
#include "Vpwm_pwm_fifo.h"
#include "Vpwm_pwm_dft_reset_mux.h"
#include "Vpwm_pwm_clock_gating.h"

// FUNCTIONS
Vpwm__Syms::Vpwm__Syms(Vpwm* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__v                         (Verilated::catName(topp->name(),"v"))
	, TOP__v__pwm_crm                (Verilated::catName(topp->name(),"v.pwm_crm"))
	, TOP__v__pwm_crm__pclk_gen      (Verilated::catName(topp->name(),"v.pwm_crm.pclk_gen"))
	, TOP__v__pwm_fifo               (Verilated::catName(topp->name(),"v.pwm_fifo"))
	, TOP__v__pwm_outputgen          (Verilated::catName(topp->name(),"v.pwm_outputgen"))
	, TOP__v__pwm_reg                (Verilated::catName(topp->name(),"v.pwm_reg"))
	, TOP__v__pwm_reg__cmp_status_reset_mux (Verilated::catName(topp->name(),"v.pwm_reg.cmp_status_reset_mux"))
	, TOP__v__pwm_reg__fifo_status_reset_mux (Verilated::catName(topp->name(),"v.pwm_reg.fifo_status_reset_mux"))
	, TOP__v__pwm_reg__pwm_en_reset_mux (Verilated::catName(topp->name(),"v.pwm_reg.pwm_en_reset_mux"))
	, TOP__v__pwm_reg__rov_status_reset_mux (Verilated::catName(topp->name(),"v.pwm_reg.rov_status_reset_mux"))
	, TOP__v__pwm_reg__software_reset_mux (Verilated::catName(topp->name(),"v.pwm_reg.software_reset_mux"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__v                  = &TOP__v;
    TOPp->__PVT__v->__PVT__pwm_crm  = &TOP__v__pwm_crm;
    TOPp->__PVT__v->__PVT__pwm_crm->__PVT__pclk_gen  = &TOP__v__pwm_crm__pclk_gen;
    TOPp->__PVT__v->__PVT__pwm_fifo  = &TOP__v__pwm_fifo;
    TOPp->__PVT__v->__PVT__pwm_outputgen  = &TOP__v__pwm_outputgen;
    TOPp->__PVT__v->__PVT__pwm_reg  = &TOP__v__pwm_reg;
    TOPp->__PVT__v->__PVT__pwm_reg->__PVT__cmp_status_reset_mux  = &TOP__v__pwm_reg__cmp_status_reset_mux;
    TOPp->__PVT__v->__PVT__pwm_reg->__PVT__fifo_status_reset_mux  = &TOP__v__pwm_reg__fifo_status_reset_mux;
    TOPp->__PVT__v->__PVT__pwm_reg->__PVT__pwm_en_reset_mux  = &TOP__v__pwm_reg__pwm_en_reset_mux;
    TOPp->__PVT__v->__PVT__pwm_reg->__PVT__rov_status_reset_mux  = &TOP__v__pwm_reg__rov_status_reset_mux;
    TOPp->__PVT__v->__PVT__pwm_reg->__PVT__software_reset_mux  = &TOP__v__pwm_reg__software_reset_mux;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__v.__Vconfigure(this, true);
    TOP__v__pwm_crm.__Vconfigure(this, true);
    TOP__v__pwm_crm__pclk_gen.__Vconfigure(this, true);
    TOP__v__pwm_fifo.__Vconfigure(this, true);
    TOP__v__pwm_outputgen.__Vconfigure(this, true);
    TOP__v__pwm_reg.__Vconfigure(this, true);
    TOP__v__pwm_reg__cmp_status_reset_mux.__Vconfigure(this, true);
    TOP__v__pwm_reg__fifo_status_reset_mux.__Vconfigure(this, false);
    TOP__v__pwm_reg__pwm_en_reset_mux.__Vconfigure(this, false);
    TOP__v__pwm_reg__rov_status_reset_mux.__Vconfigure(this, false);
    TOP__v__pwm_reg__software_reset_mux.__Vconfigure(this, false);
    // Setup scope names
}

