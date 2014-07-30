// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VusbHostSlave__Syms.h"
#include "VusbHostSlave.h"
#include "VusbHostSlave_usbHostSlave.h"
#include "VusbHostSlave_usbHostControl.h"
#include "VusbHostSlave_usbSlaveControl.h"
#include "VusbHostSlave_wishBoneBI.h"
#include "VusbHostSlave_hostSlaveMux.h"
#include "VusbHostSlave_usbSerialInterfaceEngine.h"
#include "VusbHostSlave_TxFifo__F40_A6.h"
#include "VusbHostSlave_RxFifo__F40_A6.h"
#include "VusbHostSlave_slaveRxStatusMonitor.h"
#include "VusbHostSlave_fifoMux.h"
#include "VusbHostSlave_hostSlaveMuxBI.h"
#include "VusbHostSlave_lineControlUpdate.h"
#include "VusbHostSlave_SIEReceiver.h"
#include "VusbHostSlave_processRxBit.h"
#include "VusbHostSlave_processRxByte.h"
#include "VusbHostSlave_updateCRC5.h"
#include "VusbHostSlave_updateCRC16.h"
#include "VusbHostSlave_SIETransmitter.h"
#include "VusbHostSlave_processTxByte.h"
#include "VusbHostSlave_USBTxWireArbiter.h"
#include "VusbHostSlave_writeUSBWireData.h"
#include "VusbHostSlave_readUSBWireData.h"
#include "VusbHostSlave_fifoRTL__FB40_A6.h"
#include "VusbHostSlave_TxfifoBI.h"
#include "VusbHostSlave_RxfifoBI.h"
#include "VusbHostSlave_USBHostControlBI.h"
#include "VusbHostSlave_hostcontroller.h"
#include "VusbHostSlave_SOFController.h"
#include "VusbHostSlave_SOFTransmit.h"
#include "VusbHostSlave_sendPacketArbiter.h"
#include "VusbHostSlave_sendPacketCheckPreamble.h"
#include "VusbHostSlave_sendPacket.h"
#include "VusbHostSlave_directControl.h"
#include "VusbHostSlave_HCTxPortArbiter.h"
#include "VusbHostSlave_getPacket.h"
#include "VusbHostSlave_rxStatusMonitor.h"
#include "VusbHostSlave_USBSlaveControlBI.h"
#include "VusbHostSlave_slavecontroller.h"
#include "VusbHostSlave_endpMux.h"
#include "VusbHostSlave_slaveSendPacket.h"
#include "VusbHostSlave_slaveDirectControl.h"
#include "VusbHostSlave_SCTxPortArbiter.h"
#include "VusbHostSlave_slaveGetPacket.h"
#include "VusbHostSlave_dpMem_dc__F8_FB40_A6.h"

// FUNCTIONS
VusbHostSlave__Syms::VusbHostSlave__Syms(VusbHostSlave* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__v                         (Verilated::catName(topp->name(),"v"))
	, TOP__v__EP0RxFifo              (Verilated::catName(topp->name(),"v.EP0RxFifo"))
	, TOP__v__EP0RxFifo__u_RxfifoBI  (Verilated::catName(topp->name(),"v.EP0RxFifo.u_RxfifoBI"))
	, TOP__v__EP0RxFifo__u_fifo      (Verilated::catName(topp->name(),"v.EP0RxFifo.u_fifo"))
	, TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc (Verilated::catName(topp->name(),"v.EP0RxFifo.u_fifo.u_dpMem_dc"))
	, TOP__v__EP0TxFifo              (Verilated::catName(topp->name(),"v.EP0TxFifo"))
	, TOP__v__EP0TxFifo__u_TxfifoBI  (Verilated::catName(topp->name(),"v.EP0TxFifo.u_TxfifoBI"))
	, TOP__v__EP0TxFifo__u_fifo      (Verilated::catName(topp->name(),"v.EP0TxFifo.u_fifo"))
	, TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc (Verilated::catName(topp->name(),"v.EP0TxFifo.u_fifo.u_dpMem_dc"))
	, TOP__v__EP1RxFifo              (Verilated::catName(topp->name(),"v.EP1RxFifo"))
	, TOP__v__EP1RxFifo__u_RxfifoBI  (Verilated::catName(topp->name(),"v.EP1RxFifo.u_RxfifoBI"))
	, TOP__v__EP1RxFifo__u_fifo      (Verilated::catName(topp->name(),"v.EP1RxFifo.u_fifo"))
	, TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc (Verilated::catName(topp->name(),"v.EP1RxFifo.u_fifo.u_dpMem_dc"))
	, TOP__v__EP1TxFifo              (Verilated::catName(topp->name(),"v.EP1TxFifo"))
	, TOP__v__EP1TxFifo__u_TxfifoBI  (Verilated::catName(topp->name(),"v.EP1TxFifo.u_TxfifoBI"))
	, TOP__v__EP1TxFifo__u_fifo      (Verilated::catName(topp->name(),"v.EP1TxFifo.u_fifo"))
	, TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc (Verilated::catName(topp->name(),"v.EP1TxFifo.u_fifo.u_dpMem_dc"))
	, TOP__v__EP2RxFifo              (Verilated::catName(topp->name(),"v.EP2RxFifo"))
	, TOP__v__EP2RxFifo__u_RxfifoBI  (Verilated::catName(topp->name(),"v.EP2RxFifo.u_RxfifoBI"))
	, TOP__v__EP2RxFifo__u_fifo      (Verilated::catName(topp->name(),"v.EP2RxFifo.u_fifo"))
	, TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc (Verilated::catName(topp->name(),"v.EP2RxFifo.u_fifo.u_dpMem_dc"))
	, TOP__v__EP2TxFifo              (Verilated::catName(topp->name(),"v.EP2TxFifo"))
	, TOP__v__EP2TxFifo__u_TxfifoBI  (Verilated::catName(topp->name(),"v.EP2TxFifo.u_TxfifoBI"))
	, TOP__v__EP2TxFifo__u_fifo      (Verilated::catName(topp->name(),"v.EP2TxFifo.u_fifo"))
	, TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc (Verilated::catName(topp->name(),"v.EP2TxFifo.u_fifo.u_dpMem_dc"))
	, TOP__v__EP3RxFifo              (Verilated::catName(topp->name(),"v.EP3RxFifo"))
	, TOP__v__EP3RxFifo__u_RxfifoBI  (Verilated::catName(topp->name(),"v.EP3RxFifo.u_RxfifoBI"))
	, TOP__v__EP3RxFifo__u_fifo      (Verilated::catName(topp->name(),"v.EP3RxFifo.u_fifo"))
	, TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc (Verilated::catName(topp->name(),"v.EP3RxFifo.u_fifo.u_dpMem_dc"))
	, TOP__v__EP3TxFifo              (Verilated::catName(topp->name(),"v.EP3TxFifo"))
	, TOP__v__EP3TxFifo__u_TxfifoBI  (Verilated::catName(topp->name(),"v.EP3TxFifo.u_TxfifoBI"))
	, TOP__v__EP3TxFifo__u_fifo      (Verilated::catName(topp->name(),"v.EP3TxFifo.u_fifo"))
	, TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc (Verilated::catName(topp->name(),"v.EP3TxFifo.u_fifo.u_dpMem_dc"))
	, TOP__v__HostRxFifo             (Verilated::catName(topp->name(),"v.HostRxFifo"))
	, TOP__v__HostRxFifo__u_RxfifoBI (Verilated::catName(topp->name(),"v.HostRxFifo.u_RxfifoBI"))
	, TOP__v__HostRxFifo__u_fifo     (Verilated::catName(topp->name(),"v.HostRxFifo.u_fifo"))
	, TOP__v__HostRxFifo__u_fifo__u_dpMem_dc (Verilated::catName(topp->name(),"v.HostRxFifo.u_fifo.u_dpMem_dc"))
	, TOP__v__HostTxFifo             (Verilated::catName(topp->name(),"v.HostTxFifo"))
	, TOP__v__HostTxFifo__u_TxfifoBI (Verilated::catName(topp->name(),"v.HostTxFifo.u_TxfifoBI"))
	, TOP__v__HostTxFifo__u_fifo     (Verilated::catName(topp->name(),"v.HostTxFifo.u_fifo"))
	, TOP__v__HostTxFifo__u_fifo__u_dpMem_dc (Verilated::catName(topp->name(),"v.HostTxFifo.u_fifo.u_dpMem_dc"))
	, TOP__v__u_hostSlaveMux         (Verilated::catName(topp->name(),"v.u_hostSlaveMux"))
	, TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI (Verilated::catName(topp->name(),"v.u_hostSlaveMux.u_hostSlaveMuxBI"))
	, TOP__v__u_usbHostControl       (Verilated::catName(topp->name(),"v.u_usbHostControl"))
	, TOP__v__u_usbHostControl__u_HCTxPortArbiter (Verilated::catName(topp->name(),"v.u_usbHostControl.u_HCTxPortArbiter"))
	, TOP__v__u_usbHostControl__u_SOFController (Verilated::catName(topp->name(),"v.u_usbHostControl.u_SOFController"))
	, TOP__v__u_usbHostControl__u_SOFTransmit (Verilated::catName(topp->name(),"v.u_usbHostControl.u_SOFTransmit"))
	, TOP__v__u_usbHostControl__u_USBHostControlBI (Verilated::catName(topp->name(),"v.u_usbHostControl.u_USBHostControlBI"))
	, TOP__v__u_usbHostControl__u_directControl (Verilated::catName(topp->name(),"v.u_usbHostControl.u_directControl"))
	, TOP__v__u_usbHostControl__u_getPacket (Verilated::catName(topp->name(),"v.u_usbHostControl.u_getPacket"))
	, TOP__v__u_usbHostControl__u_hostController (Verilated::catName(topp->name(),"v.u_usbHostControl.u_hostController"))
	, TOP__v__u_usbHostControl__u_rxStatusMonitor (Verilated::catName(topp->name(),"v.u_usbHostControl.u_rxStatusMonitor"))
	, TOP__v__u_usbHostControl__u_sendPacket (Verilated::catName(topp->name(),"v.u_usbHostControl.u_sendPacket"))
	, TOP__v__u_usbHostControl__u_sendPacketArbiter (Verilated::catName(topp->name(),"v.u_usbHostControl.u_sendPacketArbiter"))
	, TOP__v__u_usbHostControl__u_sendPacketCheckPreamble (Verilated::catName(topp->name(),"v.u_usbHostControl.u_sendPacketCheckPreamble"))
	, TOP__v__u_usbSerialInterfaceEngine (Verilated::catName(topp->name(),"v.u_usbSerialInterfaceEngine"))
	, TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16 (Verilated::catName(topp->name(),"v.u_usbSerialInterfaceEngine.RxUpdateCRC16"))
	, TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5 (Verilated::catName(topp->name(),"v.u_usbSerialInterfaceEngine.RxUpdateCRC5"))
	, TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16 (Verilated::catName(topp->name(),"v.u_usbSerialInterfaceEngine.TxUpdateCRC16"))
	, TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5 (Verilated::catName(topp->name(),"v.u_usbSerialInterfaceEngine.TxUpdateCRC5"))
	, TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver (Verilated::catName(topp->name(),"v.u_usbSerialInterfaceEngine.u_SIEReceiver"))
	, TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter (Verilated::catName(topp->name(),"v.u_usbSerialInterfaceEngine.u_SIETransmitter"))
	, TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter (Verilated::catName(topp->name(),"v.u_usbSerialInterfaceEngine.u_USBTxWireArbiter"))
	, TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate (Verilated::catName(topp->name(),"v.u_usbSerialInterfaceEngine.u_lineControlUpdate"))
	, TOP__v__u_usbSerialInterfaceEngine__u_processRxBit (Verilated::catName(topp->name(),"v.u_usbSerialInterfaceEngine.u_processRxBit"))
	, TOP__v__u_usbSerialInterfaceEngine__u_processRxByte (Verilated::catName(topp->name(),"v.u_usbSerialInterfaceEngine.u_processRxByte"))
	, TOP__v__u_usbSerialInterfaceEngine__u_processTxByte (Verilated::catName(topp->name(),"v.u_usbSerialInterfaceEngine.u_processTxByte"))
	, TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData (Verilated::catName(topp->name(),"v.u_usbSerialInterfaceEngine.u_readUSBWireData"))
	, TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData (Verilated::catName(topp->name(),"v.u_usbSerialInterfaceEngine.u_writeUSBWireData"))
	, TOP__v__u_usbSlaveControl      (Verilated::catName(topp->name(),"v.u_usbSlaveControl"))
	, TOP__v__u_usbSlaveControl__u_SCTxPortArbiter (Verilated::catName(topp->name(),"v.u_usbSlaveControl.u_SCTxPortArbiter"))
	, TOP__v__u_usbSlaveControl__u_USBSlaveControlBI (Verilated::catName(topp->name(),"v.u_usbSlaveControl.u_USBSlaveControlBI"))
	, TOP__v__u_usbSlaveControl__u_endpMux (Verilated::catName(topp->name(),"v.u_usbSlaveControl.u_endpMux"))
	, TOP__v__u_usbSlaveControl__u_fifoMux (Verilated::catName(topp->name(),"v.u_usbSlaveControl.u_fifoMux"))
	, TOP__v__u_usbSlaveControl__u_slaveDirectControl (Verilated::catName(topp->name(),"v.u_usbSlaveControl.u_slaveDirectControl"))
	, TOP__v__u_usbSlaveControl__u_slaveGetPacket (Verilated::catName(topp->name(),"v.u_usbSlaveControl.u_slaveGetPacket"))
	, TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor (Verilated::catName(topp->name(),"v.u_usbSlaveControl.u_slaveRxStatusMonitor"))
	, TOP__v__u_usbSlaveControl__u_slaveSendPacket (Verilated::catName(topp->name(),"v.u_usbSlaveControl.u_slaveSendPacket"))
	, TOP__v__u_usbSlaveControl__u_slavecontroller (Verilated::catName(topp->name(),"v.u_usbSlaveControl.u_slavecontroller"))
	, TOP__v__u_wishBoneBI           (Verilated::catName(topp->name(),"v.u_wishBoneBI"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__v                  = &TOP__v;
    TOPp->__PVT__v->__PVT__EP0RxFifo  = &TOP__v__EP0RxFifo;
    TOPp->__PVT__v->__PVT__EP0RxFifo->__PVT__u_RxfifoBI  = &TOP__v__EP0RxFifo__u_RxfifoBI;
    TOPp->__PVT__v->__PVT__EP0RxFifo->__PVT__u_fifo  = &TOP__v__EP0RxFifo__u_fifo;
    TOPp->__PVT__v->__PVT__EP0RxFifo->__PVT__u_fifo->__PVT__u_dpMem_dc  = &TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc;
    TOPp->__PVT__v->__PVT__EP0TxFifo  = &TOP__v__EP0TxFifo;
    TOPp->__PVT__v->__PVT__EP0TxFifo->__PVT__u_TxfifoBI  = &TOP__v__EP0TxFifo__u_TxfifoBI;
    TOPp->__PVT__v->__PVT__EP0TxFifo->__PVT__u_fifo  = &TOP__v__EP0TxFifo__u_fifo;
    TOPp->__PVT__v->__PVT__EP0TxFifo->__PVT__u_fifo->__PVT__u_dpMem_dc  = &TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc;
    TOPp->__PVT__v->__PVT__EP1RxFifo  = &TOP__v__EP1RxFifo;
    TOPp->__PVT__v->__PVT__EP1RxFifo->__PVT__u_RxfifoBI  = &TOP__v__EP1RxFifo__u_RxfifoBI;
    TOPp->__PVT__v->__PVT__EP1RxFifo->__PVT__u_fifo  = &TOP__v__EP1RxFifo__u_fifo;
    TOPp->__PVT__v->__PVT__EP1RxFifo->__PVT__u_fifo->__PVT__u_dpMem_dc  = &TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc;
    TOPp->__PVT__v->__PVT__EP1TxFifo  = &TOP__v__EP1TxFifo;
    TOPp->__PVT__v->__PVT__EP1TxFifo->__PVT__u_TxfifoBI  = &TOP__v__EP1TxFifo__u_TxfifoBI;
    TOPp->__PVT__v->__PVT__EP1TxFifo->__PVT__u_fifo  = &TOP__v__EP1TxFifo__u_fifo;
    TOPp->__PVT__v->__PVT__EP1TxFifo->__PVT__u_fifo->__PVT__u_dpMem_dc  = &TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc;
    TOPp->__PVT__v->__PVT__EP2RxFifo  = &TOP__v__EP2RxFifo;
    TOPp->__PVT__v->__PVT__EP2RxFifo->__PVT__u_RxfifoBI  = &TOP__v__EP2RxFifo__u_RxfifoBI;
    TOPp->__PVT__v->__PVT__EP2RxFifo->__PVT__u_fifo  = &TOP__v__EP2RxFifo__u_fifo;
    TOPp->__PVT__v->__PVT__EP2RxFifo->__PVT__u_fifo->__PVT__u_dpMem_dc  = &TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc;
    TOPp->__PVT__v->__PVT__EP2TxFifo  = &TOP__v__EP2TxFifo;
    TOPp->__PVT__v->__PVT__EP2TxFifo->__PVT__u_TxfifoBI  = &TOP__v__EP2TxFifo__u_TxfifoBI;
    TOPp->__PVT__v->__PVT__EP2TxFifo->__PVT__u_fifo  = &TOP__v__EP2TxFifo__u_fifo;
    TOPp->__PVT__v->__PVT__EP2TxFifo->__PVT__u_fifo->__PVT__u_dpMem_dc  = &TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc;
    TOPp->__PVT__v->__PVT__EP3RxFifo  = &TOP__v__EP3RxFifo;
    TOPp->__PVT__v->__PVT__EP3RxFifo->__PVT__u_RxfifoBI  = &TOP__v__EP3RxFifo__u_RxfifoBI;
    TOPp->__PVT__v->__PVT__EP3RxFifo->__PVT__u_fifo  = &TOP__v__EP3RxFifo__u_fifo;
    TOPp->__PVT__v->__PVT__EP3RxFifo->__PVT__u_fifo->__PVT__u_dpMem_dc  = &TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc;
    TOPp->__PVT__v->__PVT__EP3TxFifo  = &TOP__v__EP3TxFifo;
    TOPp->__PVT__v->__PVT__EP3TxFifo->__PVT__u_TxfifoBI  = &TOP__v__EP3TxFifo__u_TxfifoBI;
    TOPp->__PVT__v->__PVT__EP3TxFifo->__PVT__u_fifo  = &TOP__v__EP3TxFifo__u_fifo;
    TOPp->__PVT__v->__PVT__EP3TxFifo->__PVT__u_fifo->__PVT__u_dpMem_dc  = &TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc;
    TOPp->__PVT__v->__PVT__HostRxFifo  = &TOP__v__HostRxFifo;
    TOPp->__PVT__v->__PVT__HostRxFifo->__PVT__u_RxfifoBI  = &TOP__v__HostRxFifo__u_RxfifoBI;
    TOPp->__PVT__v->__PVT__HostRxFifo->__PVT__u_fifo  = &TOP__v__HostRxFifo__u_fifo;
    TOPp->__PVT__v->__PVT__HostRxFifo->__PVT__u_fifo->__PVT__u_dpMem_dc  = &TOP__v__HostRxFifo__u_fifo__u_dpMem_dc;
    TOPp->__PVT__v->__PVT__HostTxFifo  = &TOP__v__HostTxFifo;
    TOPp->__PVT__v->__PVT__HostTxFifo->__PVT__u_TxfifoBI  = &TOP__v__HostTxFifo__u_TxfifoBI;
    TOPp->__PVT__v->__PVT__HostTxFifo->__PVT__u_fifo  = &TOP__v__HostTxFifo__u_fifo;
    TOPp->__PVT__v->__PVT__HostTxFifo->__PVT__u_fifo->__PVT__u_dpMem_dc  = &TOP__v__HostTxFifo__u_fifo__u_dpMem_dc;
    TOPp->__PVT__v->__PVT__u_hostSlaveMux  = &TOP__v__u_hostSlaveMux;
    TOPp->__PVT__v->__PVT__u_hostSlaveMux->__PVT__u_hostSlaveMuxBI  = &TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI;
    TOPp->__PVT__v->__PVT__u_usbHostControl  = &TOP__v__u_usbHostControl;
    TOPp->__PVT__v->__PVT__u_usbHostControl->__PVT__u_HCTxPortArbiter  = &TOP__v__u_usbHostControl__u_HCTxPortArbiter;
    TOPp->__PVT__v->__PVT__u_usbHostControl->__PVT__u_SOFController  = &TOP__v__u_usbHostControl__u_SOFController;
    TOPp->__PVT__v->__PVT__u_usbHostControl->__PVT__u_SOFTransmit  = &TOP__v__u_usbHostControl__u_SOFTransmit;
    TOPp->__PVT__v->__PVT__u_usbHostControl->__PVT__u_USBHostControlBI  = &TOP__v__u_usbHostControl__u_USBHostControlBI;
    TOPp->__PVT__v->__PVT__u_usbHostControl->__PVT__u_directControl  = &TOP__v__u_usbHostControl__u_directControl;
    TOPp->__PVT__v->__PVT__u_usbHostControl->__PVT__u_getPacket  = &TOP__v__u_usbHostControl__u_getPacket;
    TOPp->__PVT__v->__PVT__u_usbHostControl->__PVT__u_hostController  = &TOP__v__u_usbHostControl__u_hostController;
    TOPp->__PVT__v->__PVT__u_usbHostControl->__PVT__u_rxStatusMonitor  = &TOP__v__u_usbHostControl__u_rxStatusMonitor;
    TOPp->__PVT__v->__PVT__u_usbHostControl->__PVT__u_sendPacket  = &TOP__v__u_usbHostControl__u_sendPacket;
    TOPp->__PVT__v->__PVT__u_usbHostControl->__PVT__u_sendPacketArbiter  = &TOP__v__u_usbHostControl__u_sendPacketArbiter;
    TOPp->__PVT__v->__PVT__u_usbHostControl->__PVT__u_sendPacketCheckPreamble  = &TOP__v__u_usbHostControl__u_sendPacketCheckPreamble;
    TOPp->__PVT__v->__PVT__u_usbSerialInterfaceEngine  = &TOP__v__u_usbSerialInterfaceEngine;
    TOPp->__PVT__v->__PVT__u_usbSerialInterfaceEngine->__PVT__RxUpdateCRC16  = &TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16;
    TOPp->__PVT__v->__PVT__u_usbSerialInterfaceEngine->__PVT__RxUpdateCRC5  = &TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5;
    TOPp->__PVT__v->__PVT__u_usbSerialInterfaceEngine->__PVT__TxUpdateCRC16  = &TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16;
    TOPp->__PVT__v->__PVT__u_usbSerialInterfaceEngine->__PVT__TxUpdateCRC5  = &TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5;
    TOPp->__PVT__v->__PVT__u_usbSerialInterfaceEngine->__PVT__u_SIEReceiver  = &TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver;
    TOPp->__PVT__v->__PVT__u_usbSerialInterfaceEngine->__PVT__u_SIETransmitter  = &TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter;
    TOPp->__PVT__v->__PVT__u_usbSerialInterfaceEngine->__PVT__u_USBTxWireArbiter  = &TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter;
    TOPp->__PVT__v->__PVT__u_usbSerialInterfaceEngine->__PVT__u_lineControlUpdate  = &TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate;
    TOPp->__PVT__v->__PVT__u_usbSerialInterfaceEngine->__PVT__u_processRxBit  = &TOP__v__u_usbSerialInterfaceEngine__u_processRxBit;
    TOPp->__PVT__v->__PVT__u_usbSerialInterfaceEngine->__PVT__u_processRxByte  = &TOP__v__u_usbSerialInterfaceEngine__u_processRxByte;
    TOPp->__PVT__v->__PVT__u_usbSerialInterfaceEngine->__PVT__u_processTxByte  = &TOP__v__u_usbSerialInterfaceEngine__u_processTxByte;
    TOPp->__PVT__v->__PVT__u_usbSerialInterfaceEngine->__PVT__u_readUSBWireData  = &TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData;
    TOPp->__PVT__v->__PVT__u_usbSerialInterfaceEngine->__PVT__u_writeUSBWireData  = &TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData;
    TOPp->__PVT__v->__PVT__u_usbSlaveControl  = &TOP__v__u_usbSlaveControl;
    TOPp->__PVT__v->__PVT__u_usbSlaveControl->__PVT__u_SCTxPortArbiter  = &TOP__v__u_usbSlaveControl__u_SCTxPortArbiter;
    TOPp->__PVT__v->__PVT__u_usbSlaveControl->__PVT__u_USBSlaveControlBI  = &TOP__v__u_usbSlaveControl__u_USBSlaveControlBI;
    TOPp->__PVT__v->__PVT__u_usbSlaveControl->__PVT__u_endpMux  = &TOP__v__u_usbSlaveControl__u_endpMux;
    TOPp->__PVT__v->__PVT__u_usbSlaveControl->__PVT__u_fifoMux  = &TOP__v__u_usbSlaveControl__u_fifoMux;
    TOPp->__PVT__v->__PVT__u_usbSlaveControl->__PVT__u_slaveDirectControl  = &TOP__v__u_usbSlaveControl__u_slaveDirectControl;
    TOPp->__PVT__v->__PVT__u_usbSlaveControl->__PVT__u_slaveGetPacket  = &TOP__v__u_usbSlaveControl__u_slaveGetPacket;
    TOPp->__PVT__v->__PVT__u_usbSlaveControl->__PVT__u_slaveRxStatusMonitor  = &TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor;
    TOPp->__PVT__v->__PVT__u_usbSlaveControl->__PVT__u_slaveSendPacket  = &TOP__v__u_usbSlaveControl__u_slaveSendPacket;
    TOPp->__PVT__v->__PVT__u_usbSlaveControl->__PVT__u_slavecontroller  = &TOP__v__u_usbSlaveControl__u_slavecontroller;
    TOPp->__PVT__v->__PVT__u_wishBoneBI  = &TOP__v__u_wishBoneBI;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__v.__Vconfigure(this, true);
    TOP__v__EP0RxFifo.__Vconfigure(this, true);
    TOP__v__EP0RxFifo__u_RxfifoBI.__Vconfigure(this, true);
    TOP__v__EP0RxFifo__u_fifo.__Vconfigure(this, true);
    TOP__v__EP0RxFifo__u_fifo__u_dpMem_dc.__Vconfigure(this, true);
    TOP__v__EP0TxFifo.__Vconfigure(this, true);
    TOP__v__EP0TxFifo__u_TxfifoBI.__Vconfigure(this, true);
    TOP__v__EP0TxFifo__u_fifo.__Vconfigure(this, false);
    TOP__v__EP0TxFifo__u_fifo__u_dpMem_dc.__Vconfigure(this, false);
    TOP__v__EP1RxFifo.__Vconfigure(this, false);
    TOP__v__EP1RxFifo__u_RxfifoBI.__Vconfigure(this, false);
    TOP__v__EP1RxFifo__u_fifo.__Vconfigure(this, false);
    TOP__v__EP1RxFifo__u_fifo__u_dpMem_dc.__Vconfigure(this, false);
    TOP__v__EP1TxFifo.__Vconfigure(this, false);
    TOP__v__EP1TxFifo__u_TxfifoBI.__Vconfigure(this, false);
    TOP__v__EP1TxFifo__u_fifo.__Vconfigure(this, false);
    TOP__v__EP1TxFifo__u_fifo__u_dpMem_dc.__Vconfigure(this, false);
    TOP__v__EP2RxFifo.__Vconfigure(this, false);
    TOP__v__EP2RxFifo__u_RxfifoBI.__Vconfigure(this, false);
    TOP__v__EP2RxFifo__u_fifo.__Vconfigure(this, false);
    TOP__v__EP2RxFifo__u_fifo__u_dpMem_dc.__Vconfigure(this, false);
    TOP__v__EP2TxFifo.__Vconfigure(this, false);
    TOP__v__EP2TxFifo__u_TxfifoBI.__Vconfigure(this, false);
    TOP__v__EP2TxFifo__u_fifo.__Vconfigure(this, false);
    TOP__v__EP2TxFifo__u_fifo__u_dpMem_dc.__Vconfigure(this, false);
    TOP__v__EP3RxFifo.__Vconfigure(this, false);
    TOP__v__EP3RxFifo__u_RxfifoBI.__Vconfigure(this, false);
    TOP__v__EP3RxFifo__u_fifo.__Vconfigure(this, false);
    TOP__v__EP3RxFifo__u_fifo__u_dpMem_dc.__Vconfigure(this, false);
    TOP__v__EP3TxFifo.__Vconfigure(this, false);
    TOP__v__EP3TxFifo__u_TxfifoBI.__Vconfigure(this, false);
    TOP__v__EP3TxFifo__u_fifo.__Vconfigure(this, false);
    TOP__v__EP3TxFifo__u_fifo__u_dpMem_dc.__Vconfigure(this, false);
    TOP__v__HostRxFifo.__Vconfigure(this, false);
    TOP__v__HostRxFifo__u_RxfifoBI.__Vconfigure(this, false);
    TOP__v__HostRxFifo__u_fifo.__Vconfigure(this, false);
    TOP__v__HostRxFifo__u_fifo__u_dpMem_dc.__Vconfigure(this, false);
    TOP__v__HostTxFifo.__Vconfigure(this, false);
    TOP__v__HostTxFifo__u_TxfifoBI.__Vconfigure(this, false);
    TOP__v__HostTxFifo__u_fifo.__Vconfigure(this, false);
    TOP__v__HostTxFifo__u_fifo__u_dpMem_dc.__Vconfigure(this, false);
    TOP__v__u_hostSlaveMux.__Vconfigure(this, true);
    TOP__v__u_hostSlaveMux__u_hostSlaveMuxBI.__Vconfigure(this, true);
    TOP__v__u_usbHostControl.__Vconfigure(this, true);
    TOP__v__u_usbHostControl__u_HCTxPortArbiter.__Vconfigure(this, true);
    TOP__v__u_usbHostControl__u_SOFController.__Vconfigure(this, true);
    TOP__v__u_usbHostControl__u_SOFTransmit.__Vconfigure(this, true);
    TOP__v__u_usbHostControl__u_USBHostControlBI.__Vconfigure(this, true);
    TOP__v__u_usbHostControl__u_directControl.__Vconfigure(this, true);
    TOP__v__u_usbHostControl__u_getPacket.__Vconfigure(this, true);
    TOP__v__u_usbHostControl__u_hostController.__Vconfigure(this, true);
    TOP__v__u_usbHostControl__u_rxStatusMonitor.__Vconfigure(this, true);
    TOP__v__u_usbHostControl__u_sendPacket.__Vconfigure(this, true);
    TOP__v__u_usbHostControl__u_sendPacketArbiter.__Vconfigure(this, true);
    TOP__v__u_usbHostControl__u_sendPacketCheckPreamble.__Vconfigure(this, true);
    TOP__v__u_usbSerialInterfaceEngine.__Vconfigure(this, true);
    TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC16.__Vconfigure(this, true);
    TOP__v__u_usbSerialInterfaceEngine__RxUpdateCRC5.__Vconfigure(this, true);
    TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC16.__Vconfigure(this, false);
    TOP__v__u_usbSerialInterfaceEngine__TxUpdateCRC5.__Vconfigure(this, false);
    TOP__v__u_usbSerialInterfaceEngine__u_SIEReceiver.__Vconfigure(this, true);
    TOP__v__u_usbSerialInterfaceEngine__u_SIETransmitter.__Vconfigure(this, true);
    TOP__v__u_usbSerialInterfaceEngine__u_USBTxWireArbiter.__Vconfigure(this, true);
    TOP__v__u_usbSerialInterfaceEngine__u_lineControlUpdate.__Vconfigure(this, true);
    TOP__v__u_usbSerialInterfaceEngine__u_processRxBit.__Vconfigure(this, true);
    TOP__v__u_usbSerialInterfaceEngine__u_processRxByte.__Vconfigure(this, true);
    TOP__v__u_usbSerialInterfaceEngine__u_processTxByte.__Vconfigure(this, true);
    TOP__v__u_usbSerialInterfaceEngine__u_readUSBWireData.__Vconfigure(this, true);
    TOP__v__u_usbSerialInterfaceEngine__u_writeUSBWireData.__Vconfigure(this, true);
    TOP__v__u_usbSlaveControl.__Vconfigure(this, true);
    TOP__v__u_usbSlaveControl__u_SCTxPortArbiter.__Vconfigure(this, true);
    TOP__v__u_usbSlaveControl__u_USBSlaveControlBI.__Vconfigure(this, true);
    TOP__v__u_usbSlaveControl__u_endpMux.__Vconfigure(this, true);
    TOP__v__u_usbSlaveControl__u_fifoMux.__Vconfigure(this, true);
    TOP__v__u_usbSlaveControl__u_slaveDirectControl.__Vconfigure(this, true);
    TOP__v__u_usbSlaveControl__u_slaveGetPacket.__Vconfigure(this, true);
    TOP__v__u_usbSlaveControl__u_slaveRxStatusMonitor.__Vconfigure(this, true);
    TOP__v__u_usbSlaveControl__u_slaveSendPacket.__Vconfigure(this, true);
    TOP__v__u_usbSlaveControl__u_slavecontroller.__Vconfigure(this, true);
    TOP__v__u_wishBoneBI.__Vconfigure(this, true);
    // Setup scope names
}

